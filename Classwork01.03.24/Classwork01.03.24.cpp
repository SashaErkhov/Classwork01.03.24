#include <iostream>
#include "stroka.h"

int main()
{
    stroka str("Hello");
    stroka str2("World");
    std::cout << str + " " + str2 + "!" << std::endl;
    return 0;
}