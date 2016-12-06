#ifndef JLARITHMETICS_H
#define JLARITHMETICS_H

#include "JLOperation.h"

class JLArithmetics : public JLOperation
{
    public:
        JLArithmetics();
        virtual ~JLArithmetics();

        JLNumber act(JLNumber& num1, JLNumber& num2);
        JLNumber act(JLNumber& num1);

        int getArgumentsNumber() const;


//        JLOperation& operator=(char arg) = 0;

    protected:

    private:
};

#endif // JLARITHMETICS_H
