
#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
#include <vector>

using namespace std;



//template<class, class...> class TCont
template<class T>
class Stack
{
	vector<T> data;
	int top;
public:
	Stack() : top(-1) {}
	size_t size() const { return top + 1; }
	bool IsEmpty() const { return top == -1; }
	void Push(const T& val) {
		data.push_back(val);
		top++;
	}
	T Top() {
		return data[top];
	}
	void Pop() {
		if (IsEmpty()) throw 1;
		data.pop_back();
		top--;
	}
};



#endif