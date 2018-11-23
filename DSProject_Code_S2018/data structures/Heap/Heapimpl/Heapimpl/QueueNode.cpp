#include "pch.h"
#include "QueueNode.h"

template<class T>
QueueNode<T>::QueueNode()
{
	priority = 0;
	data = 0;

}

template<class T>
QueueNode<T>::QueueNode(T dat, double prio)
{
	priority = prio;
	data = dat;
}

template<class T>
T QueueNode<T>::getdata() const
{
	return T();
}

template<class T>
double QueueNode<T>::getpriority() const
{
	return 0.0;
}

template<class T>
void QueueNode<T>::setdata() 
{
}

template<class T>
void QueueNode<T>::setpriority()
{
}

template<class T>
QueueNode<T>::~QueueNode()
{
}
