#ifndef ARRAY_H_
#define ARRAY_H_

template<typename T>
class Array
{
private:
	int length;
	T* mSpace;
public:
	Array(int length);
	Array(Array& obj);
	int Length();
	T& operator[](int index);
	Array& operator=(Array& obj);
	bool operator==(Array& obj);
	bool operator!=(Array& obj);
	~Array();
};





#endif
