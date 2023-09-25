#pragma once

#include <cstdint>
#include <iostream>

namespace AntSpace
{
    class Bit {
    private:
        uint8_t value;

        void setValue(int);
    public:
        Bit() { value = 0; }
        Bit(int);
        Bit(const Bit& b) { value = b.value; }
 
        Bit& operator=(int);
        Bit operator!() { return value == 0 ? Bit(1) : Bit(0); }

        friend std::ostream& operator<<(std::ostream& os, const Bit& bit);
    };
} // namespace AntSpace

