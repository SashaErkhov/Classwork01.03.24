#include "dictpara.h"

#include <iostream>
std::ostream& operator<<(std::ostream& out, const dictPara& X)
{
	out << X.get_word() << ": " << X.get_translate() << std::endl;
	return out;
}
#include <fstream>
std::ifstream& operator>>(std::ifstream& in, dictPara& X)
{
	char buf[1024];
	in.getline(buf, 1024);
	char* p = buf;
	while (((*p) != '\t') && ((*p) != '\0'))
	{
		++p;
	}
	if (*p)
	{
		*p = '\0';
		++p;
	}
	X = dictPara(buf, p);
	return in;
}


const stroka& dictPara::get_word()const { return word_; }
const stroka& dictPara::get_translate()const { return translate_; }
bool dictPara::operator==(const dictPara& right) const { return word_ == right.word_; }
bool dictPara::operator!=(const dictPara& right) const { return word_ != right.word_; }
bool dictPara::operator<(const dictPara& right) const { return word_ < right.word_; }