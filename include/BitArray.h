#pragma once

#include <vector>
#include <cstdint>

#include "Bit.h"

namespace AntSpace
{
    struct BitInfo {
        size_t ByteIndex;
        size_t BitIndex;
        size_t BitOffset;
    };

    class BitArray {
    private:
        std::vector<uint8_t> bytes;
        size_t bitCount = 0;

    public:
        const size_t kByteWidth = 8;

        Bit operator[](size_t) const;

        //  Lowercase because, although it's public, it's a helper method
        BitInfo calcBintInfo(size_t) const;

        void AppendSetBit();
        void AppendUnsetBit();

        void SetBit(size_t);
        void UnsetBit(size_t);
    };
} // namespace AntSpace
