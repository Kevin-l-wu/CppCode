#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>
#include "Array.h"

using namespace std;

template<typename T>
Array<T>::Array(int length)
{
	if(length < 0)
	{
		length = 0;
	}

	this->length = length;
	mSpace = new T[this->length];
}

template<typename T>
Array<T>::Array(Array& obj)
{
	this->length = obj.length;
	this->mSpace = new T[this->length];
	
	for(int index = 0; index < obj.length; index++)
	{
		this->mSpace[index] = obj.mSpace[index];
	}
}

template<typename T>
int Array<T>::Length()
{
	return this->length;
}

template<typename T>
T& Array<T>::operator[](int index)
{
	return this->mSpace[index];
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T>& obj)
{
	delete[] this->mSpace;

	this->length = obj.length;
	this->mSpace = new T[this->length];
	
	for(int index = 0; index < obj.length; index++)
	{
		this->mSpace[index] = obj.mSpace[index];
	}
}

template<typename T>
bool Array<T>::operator==(Array& obj)
{
	bool result = true;

	if(this->length == obj.length && this->length != 0)
	{
		for(int index = 0; index < this->length; index++)
		{
			if(this->mSpace[index] != obj.mSpace[index])
			{
				result = false;
				break;
			}
		}
	}
	else
	{
		result = false;
	}
	
	return result;
}

template<typename T>
bool Array<T>::operator!=(Array& obj)
{
	return !(*this == obj);
}

template<typename T>
Array<T>::~Array()
{
	this->length = 0;
	delete[] this->mSpace;
}

#endif
