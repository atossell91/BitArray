#include "Bit.h"

#include <iostream>

#include "exceptions/InvalidBitAssignmentException.h"

namespace AntSpace {
    Bit::Bit(int i) {
        setValue(i);
    }

    Bit& Bit::operator=(int i) {
        setValue(i);

        return *this;
    }

    void Bit::setValue(int i) {
        if (i == 0) {
            value = 0;
        }
        else {
            value = 1;
        }
    }

    std::ostream& operator<<(std::ostream& os, const Bit& b) {
        os << static_cast<int>(b.value);
        return os;
    }
}
