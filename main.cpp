#include <iostream>
#include "JLNumber.h"
#include "JLArithmetics.h"
#include <string>

using namespace std;

int main()
{
    int i;

    JLNumber nNum1;

    std::cout << "Enter number: " << std::endl;
    std::cin >> i;
    nNum1 = i;
    nNum1.print();

    std::cout << "Enter operation: " << std::endl;
    std::string strOperation;
    //char cOperation;
    std::cin >> strOperation;
    JLArithmetics oOperation;
    oOperation.set(strOperation);

    if(oOperation.getArgumentsNumber() == 2)
    {
        JLNumber nNum2;
        std::cout << "Enter second number: " << std::endl;
        std::cin >> i;
        nNum2 = i;
        nNum2.print();

        oOperation.act(nNum1, nNum2);
        //nNum1 += nNum2;
    }
    else if(oOperation.getArgumentsNumber() == 1)
    {
        oOperation.act(nNum1);
    }

    std::cout << "Result is: " << std::endl;
    nNum1.print();

    return 0;
}
