#include "estring.h"
#include <iostream>

namespace ecma262
{
    void EString::test()
    {
        // 简单输出 m_str 的内容
        std::cout << "String content: " << m_str << std::endl;
    }
}
