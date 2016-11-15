#include "JLOperation.h"

JLOperation::JLOperation()
{
    //ctor
}

JLOperation::~JLOperation()
{
    //dtor
}

//JLOperation& JLOperation::operator=(char arg)
void JLOperation::set(char arg)
{
    m_strContent = arg;
    //return *this;
}
void JLOperation::set(std::string arg)
{
    m_strContent = arg;
}
