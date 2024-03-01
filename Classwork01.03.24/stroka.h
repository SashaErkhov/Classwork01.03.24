#pragma once
#ifndef STROKA_OP_2023

#include <string.h>
#include <iostream>

class stroka
{
	char* data_;
	size_t size_;
	void swap(stroka& other)
	{
		std::swap(data_, other.data_);
		std::swap(size_, other.size_);
	}
public:
	stroka(const char* str="");
	stroka(size_t N);
	stroka(const stroka&);
	~stroka();
	stroka& operator=(const stroka&);
	size_t length()const { return strlen(data_); }
	size_t size()const { return size_; }
	const char* str() const { return data_; }
	char operator[](size_t index)const;
	stroka& operator+=(const stroka&);

};

bool operator==(const stroka& left, const stroka& right);
bool operator!=(const stroka& left, const stroka& right);
bool operator<(const stroka& left, const stroka& right);
std::ostream& operator<<(std::ostream& out, const stroka& X);
stroka operator+(const stroka&,const stroka&);

#endif // !STROKA_OP_2023