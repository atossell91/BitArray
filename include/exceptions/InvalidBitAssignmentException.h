#pragma once

#include <string>

#include "BaseException.h"

namespace AntSpace
{
    class InvalidBitAssignmentException : public BaseException {
    public:
        InvalidBitAssignmentException(const std::string& msg) : BaseException(msg) {}
    };
} // namespace AntSpace

