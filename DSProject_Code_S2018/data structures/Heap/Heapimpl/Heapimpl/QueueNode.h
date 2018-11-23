#pragma once

template <class T>
class QueueNode
{
private:
	T data;
	double priority;


public:
	QueueNode();
	QueueNode(T dat = 0, double prio = 0);

	T getdata() const;
		double getpriority() const;

	void setdata();
	void setpriority();
	~QueueNode();
};

