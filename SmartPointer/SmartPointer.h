#ifndef SMARTPOINTER_H_
#define SMARTPOINTER_H_

template<typedef T>
class SmartPointer
{
private:
	T* m_pointer;
public:
	SmartPointer();
	SmartPointer(const T* pointer);
	T& operator*();
	T* operator->();
	bool operator==();
	bool operator!=();
	~SmartPointer();
}

#endif