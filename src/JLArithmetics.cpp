#include "JLArithmetics.h"
#include <cassert>

JLArithmetics::JLArithmetics()
{
    //ctor
}

JLArithmetics::~JLArithmetics()
{
    //dtor
}

int JLArithmetics::getArgumentsNumber() const
{
    int nResult = 0;

    if(m_strContent == "+" || m_strContent == "-" || m_strContent == "*" || m_strContent == "/" || m_strContent == "%")
    {
        nResult = 2;
    }
    else if(m_strContent == "sqrt" || m_strContent == "sqr" || m_strContent == "inv")
    {
        nResult = 1;
    }
    else
    {
        assert(0 && "Invalid operation") ;
//        std::cout << "Invalid operation" ;
//        std::exit() ;
    }

    return nResult;
}

JLNumber JLArithmetics::act(JLNumber& num1)
{
    JLNumber num3;

    if(m_strContent == "sqrt")
    {
        num3 = num1;
        num3.sqrtAndSet();
        return num3;
    }
    else if(m_strContent == "sqr")
    {
        num3 = num1;
        num3.sqrAndSet();
        return num3;
    }
    else if(m_strContent == "inv")
    {
        num3 = num1;
        num3.inverseAndSet();
        return num3;
    }
    else
    {
        assert(0 && "Invalid operation");
    }
}

JLNumber JLArithmetics::act(JLNumber& num1, JLNumber& num2)
{
    JLNumber num3;

    if(m_strContent == "+")
    {
        num3 = num1;
        num3 += num2;
        return num3;
    }
    else if(m_strContent == "-")
    {
        num3 = num1;
        num3 -= num2;
        return num3;
    }
    else if(m_strContent == "*")
    {
        num3 = num1;
        num3 *= num2;
        return num3;
    }
    else if(m_strContent == "/")
    {
        num3 = num1;
        num3 /= num2;
        return num3;
    }
    else if(m_strContent == "%")
    {
        num3 = num1;
        num3 %= num2;
        return num3;
    }
    else
    {
        assert(0 && "Invalid operation") ;
//        std::cout << "Invalid operation" ;
//        std::exit() ;
    }
}
