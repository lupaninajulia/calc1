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

void JLArithmetics::act(JLNumber& num1)
{
    if(m_strContent == "sqrt")
    {
        num1.sqrtAndSet();
    }
    else if(m_strContent == "sqr")
    {
        num1.sqrAndSet();
    }
    else if(m_strContent == "inv")
    {
        num1.inverseAndSet();
    }
    else
    {
        assert(0 && "Invalid operation");
    }
}

void JLArithmetics::act(JLNumber& num1, JLNumber& num2)
{
    if(m_strContent == "+")
    {
        num1 += num2;
    }
    else if(m_strContent == "-")
    {
        num1 -= num2;
    }
    else if(m_strContent == "*")
    {
        num1 *= num2;
    }
    else if(m_strContent == "/")
    {
        num1 /= num2;
    }
    else if(m_strContent == "%")
    {
        num1 %= num2;
    }
    else
    {
        assert(0 && "Invalid operation") ;
//        std::cout << "Invalid operation" ;
//        std::exit() ;
    }
}
