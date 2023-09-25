#include "BitArray.h"

namespace AntSpace {
    BitInfo BitArray::calcBintInfo(size_t index) const {
        BitInfo bi;

        bi.ByteIndex = index / kByteWidth;
        bi.BitIndex = index % kByteWidth;
        bi.BitOffset = kByteWidth - bi.BitIndex;

        return bi;
    }

    Bit BitArray::operator[](size_t index) const {
        //  TODO: Check if index is in bounds

        BitInfo bitInfo = calcBintInfo(index);

        uint8_t byte = bytes[bitInfo.ByteIndex];

        uint8_t bit = byte >> bitInfo.BitOffset;

        return Bit(bit);
    }

    void BitArray::AppendSetBit() { 
        //  Add new byte if needed
        while ((bitCount + 1)/8 >= bytes.size()) {
            bytes.push_back(0);
        }
        //  Set the relevant bit, in the byte
        //  Increment len
    }
}
