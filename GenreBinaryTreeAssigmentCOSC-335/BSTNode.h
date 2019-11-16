#include <iostream>
using namespace std;

//Jonathan Vazquez Rivera
//jvazquez441@email.suagm.edu

template <class T>
class BSTNode
{
public:
	BSTNode(); // Default Constructor
	BSTNode(BSTNode<T> *l, T i, BSTNode<T>*r); // Special constructor
	T getInfo();
	BSTNode<T>* getLeft();
	BSTNode<T>* getRight();
	void setInfo(T i);
	void setLeft(BSTNode<T>* l);
	void setRight(BSTNode<T>* r);
private:
	BSTNode<T>* left;
	T info;
	BSTNode<T>* right;
};

template<class T>
inline BSTNode<T>::BSTNode()
{
	right = left = 0;
}

template<class T>
inline BSTNode<T>::BSTNode(BSTNode<T>*l, T i, BSTNode<T>*r)
{
	info = i;
	left = l;
	right = r;
}

template<class T>
inline T BSTNode<T>::getInfo()
{
	return info;
}

template<class T>
inline BSTNode<T>* BSTNode<T>::getLeft()
{
	return left;
}

template<class T>
inline BSTNode<T>* BSTNode<T>::getRight()
{
	return right;
}

template<class T>
inline void BSTNode<T>::setInfo(T i)
{
	info = i;
}

template<class T>
inline void BSTNode<T>::setLeft(BSTNode<T>*l)
{
	left = l;
}

template<class T>
inline void BSTNode<T>::setRight(BSTNode<T>*r)
{
	right = r;
}
