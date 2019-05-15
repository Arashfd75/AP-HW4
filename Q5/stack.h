#include "node.hpp"

template <typename T>
class CStack
{
public:
  CStack();
  ~CStack();

  void push(const T &);
  int getCount();
  T pop();
  bool isEmpty();

private:
  CNode<T> *top;
  int count;

};