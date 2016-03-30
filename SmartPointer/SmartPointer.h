#ifndef SMARTPOINTER_H_
#define SMARTPOINTER_H_

template<typename T>
class SmartPointer
{
private:
	T* m_pointer;
	int referenceCount;
public:
	SmartPointer();
	SmartPointer(T* pointer);
	T& operator*();
	T* operator->();
	void operator=(SmartPointer<T>& obj);
	bool operator==(SmartPointer<T>& obj);
	bool operator!=(SmartPointer<T>& obj);
	~SmartPointer();
};

#endif
