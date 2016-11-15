#ifndef JLNUMBER_H
#define JLNUMBER_H

class JLNumber
{
    public:
        JLNumber();
        virtual ~JLNumber();

        JLNumber& operator=(int arg);

        void operator+=(JLNumber arg);
        void operator-=(JLNumber arg);
        void operator*=(JLNumber arg);
        void operator/=(JLNumber arg);
        void operator%=(JLNumber arg);
        void sqrtAndSet();
        void sqrAndSet();
        void inverseAndSet();

        void print();

    protected:

    private:
        double m_nContent;
};

#endif // JLNUMBER_H
