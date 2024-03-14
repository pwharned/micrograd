#include <iostream>
using namespace std;

template <class T>
class Value
{

public:
  T* val;
  Value();
  Value(T* element);
  
  void print();

  ~Value();

  template <class U> friend Value<U> operator+(Value<T>& lhs, Value<T>& rhs) ;
  template <class U> friend Value<U> operator*(Value<T>& lhs, Value<T>& rhs) ;
  template <class U> friend Value<U> operator-(Value<T>& lhs, Value<T>& rhs) ;
  template <class U> friend Value<U> operator/(Value<T>& lhs, Value<T>& rhs) ;

  
};

template <class T>
Value<T> operator+(Value<T>& lhs, Value<T>& rhs) {
    
    int k = *rhs.val + *lhs.val;


    Value<int> result = Value<int>(&k);

    return result;
}
template <class T>
Value<T> operator*(Value<T>& lhs, Value<T>& rhs) {
    
    int k = *(rhs.val) * *(lhs.val);

    Value<int> result = Value<int>(&k);

    return result;
}
template <class T>
Value<T> operator-(Value<T>& lhs, Value<T>& rhs) {
    
    int k = *rhs.val - *lhs.val;


    Value<int> result = Value<int>(&k);

    return result;
}

template <class T>
Value<T> operator/(Value<T>& lhs, Value<T>& rhs) {
    
    int k = *rhs.val / *(lhs.val);


    Value<int> result = Value<int>(&k);

    return result;
}



template <class T>
Value<T>::Value()
{

}

template <class T>
Value<T>::Value(T* element)
{

	val = new T;
	val = element;
}

template <class T>
void Value<T>::print()
{

	std::cout << *val << std::endl;

}
template <class T>
Value<T>::~Value()
{
  if(val!=nullptr)
	delete  val;
}
