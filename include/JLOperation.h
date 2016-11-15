#ifndef JLOPERATION_H
#define JLOPERATION_H

#include "JLNumber.h"
#include <string>

class JLOperation
{
    public:
        JLOperation();
        virtual ~JLOperation();

        virtual void act(JLNumber& num1, JLNumber& num2) = 0;
        virtual void act(JLNumber& num1) = 0;

        //virtual JLOperation& operator=(char arg);
        void set(char arg);
        void set(std::string arg);

        virtual int getArgumentsNumber() const = 0;

    protected:
        std::string m_strContent;

    private:
};

#endif // JLOPERATION_H
