#ifndef SMARTPOINTER_HPP_
#define SMARTPOINTER_HPP_

#include <iostream>

#include "SmartPointer.h"

using namespace std;

template<typename T>
SmartPointer<T>::SmartPointer()
{
	cout << "SmartPointer<T>::SmartPointer()" << endl;
	m_pointer = NULL;
	referenceCount = 0;
}

template<typename T>
SmartPointer<T>::SmartPointer(T* pointer)
{
	cout << "SmartPointer<T>::SmartPointer(T* pointer)" << endl;
	m_pointer = pointer;
	referenceCount++;
}

template<typename T>
T& SmartPointer<T>::operator*()
{
	cout << "T& SmartPointer<T>::operator*()" << endl;
	return *m_pointer;
}

template<typename T>
T* SmartPointer<T>::operator->()
{
	cout << "T* SmartPointer<T>::operator->()" << endl;
	return m_pointer;
}

template<typename T>
void SmartPointer<T>::operator=(SmartPointer<T>& obj)
{
	cout << "void operator=(SmartPointer<T>& obj)" << endl;
	this->m_pointer = obj.m_pointer;
}

template<typename T>
bool SmartPointer<T>::operator==(SmartPointer& obj)
{
	cout << "bool SmartPointer<T>::operator==(SmartPointer& obj)" << endl;
	return (this->m_pointer == obj.m_pointer);
}

template<typename T>
bool SmartPointer<T>::operator!=(SmartPointer& obj)
{
	cout << "bool SmartPointer<T>::operator!=(SmartPointer& obj)" << endl;
	return (this->m_pointer != obj.m_pointer);
}

template<typename T>
SmartPointer<T>::~SmartPointer()
{
	cout << "SmartPointer<T>::~SmartPointer()" << endl;
	delete[] m_pointer;
}

#endif
