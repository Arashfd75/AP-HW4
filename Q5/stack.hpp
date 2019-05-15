#include "stack.h"

template <typename T>
CStack<T>::CStack(){
    top = nullptr;
    count = 0;
}

template <typename T>
CStack<T>::~CStack()
{
    for (int i = 0; i < count; i++)
    {
        CNode<T> *temp{top->previous};
        delete top;
        top = temp;
    }
}

template <typename T>
void CStack<T>::push(const T &value)
{
    CNode<T> *temp{new CNode<T>{value, top}};
    top = temp;
    count++;
}


template <typename T>
int CStack<T>::getCount(){return count;}

template <typename T>
T CStack<T>::pop()
{
    T value{top->value};
    CNode<T>* temp{top};
    top = top->previous;
    delete temp;
    count--;
    return value;
}

template <typename T>
bool CStack<T>::isEmpty(){return !count;}