#pragma once

#include <exception>
#include <string>

namespace AntSpace {
    class BaseException : std::exception {
    private:
        std::string msg;
    public:
        BaseException(const std::string& str) : msg { str } {}
        const char* what() const throw() {
            return msg.c_str();
        }
    };
}
