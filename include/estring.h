#ifndef ECMA262_STRING_H
#define ECMA262_STRING_H

#include <string>

namespace ecma262
{
    class EString
    {
    private:
        std::string m_str = "123";

    protected:
    public:
        void test();
    };
}

#endif