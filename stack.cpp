#include <iostream>

template <class t1>
class Stack
{
private:
    t1 stkData[200];
    int coun;

public:
    Stack();
    bool push(t1 stackVal);
    bool pop(t1 & stackVal);
};

template <class t1>
Stack<t1>::Stack()
{
    coun = 0;
}


template <class t1>
bool Stack<t1>::push(t1 stackVal)
{
    bool ret = false;

    if (coun < 200){
        stkData[coun] = stackVal;
        coun++;
        ret = true;
    }

    return ret;
}

template <class t1>
bool Stack<t1>::pop(t1 & stackVal)
{
   bool ret = false;

    if (coun > 0){
        stackVal = stkData[coun];
        coun--;
        ret = true;
    }
    return ret;
}
