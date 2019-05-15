#include "node.h"

template <typename T>
CNode<T>::CNode(){}

template <typename T>
CNode<T>::~CNode(){}

template <typename T>
CNode<T>::CNode(const T& value, CNode<T>* previous)
{
    this->value = value;
    this->previous = previous;
}