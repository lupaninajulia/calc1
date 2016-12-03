#include "JLNumber.h"
#include <iostream>
#include <cmath>

JLNumber::JLNumber()
{
    //ctor
}

JLNumber::~JLNumber()
{
    //dtor
}

JLNumber& JLNumber::operator=(int arg)
{
    m_nContent = arg;
    return *this;
}

void JLNumber::operator+=(JLNumber arg)
{
    m_nContent += arg.m_nContent;
}

void JLNumber::operator-=(JLNumber arg)
{
    m_nContent -= arg.m_nContent;
}

void JLNumber::operator*=(JLNumber arg)
{
    m_nContent *= arg.m_nContent;
}

void JLNumber::operator/=(JLNumber arg)
{
    m_nContent /= arg.m_nContent;
}

void JLNumber::operator%=(JLNumber arg)
{
    m_nContent =(arg.m_nContent/m_nContent)*100;
}

void JLNumber::sqrtAndSet()
{
    m_nContent = std::sqrt(m_nContent);
}

void JLNumber::sqrAndSet()
{
    m_nContent *= m_nContent;
}

void JLNumber::inverseAndSet()
{
    m_nContent = 1/m_nContent;
}

void JLNumber::print() const
{
    std::cout << m_nContent << std::endl;
}

double JLNumber::output() const
{
    return m_nContent;
}
