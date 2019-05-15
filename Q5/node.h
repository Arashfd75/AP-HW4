template <typename T>
class CNode
{

public:
  CNode();
  ~CNode();
  CNode(const T &, CNode<T> *);

public:
  T value;
  CNode<T> *previous;
};
