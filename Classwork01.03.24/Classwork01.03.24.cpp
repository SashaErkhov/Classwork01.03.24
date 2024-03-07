#include <iostream>
#include "stroka.h"
#include "dictpara.h"
#include <fstream>

int main()
{
    stroka str("Hello");
    stroka str2("World");
    std::cout << str + " " + str2 + "!" << std::endl;
    const char fname[] = "dict.txt";
    std::ifstream inFIle(fname);
    if (!inFIle)
    {
        std::cout << "error1";
        return 1;
    }
    dictPara X;
    int cnt = 0;
    while (inFIle.peek() != EOF)
    {
        inFIle >> X;
        std::cout << X;
        ++cnt;
    }
    inFIle.close();
    std::cout << "total: " << cnt << std::endl;
    return 0;
}