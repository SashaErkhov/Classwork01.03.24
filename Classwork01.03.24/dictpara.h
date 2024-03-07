#pragma once
#ifndef DICTPARA_OP_2023
#define DICTPARA_OP_2023

#include "stroka.h"

class dictPara
{
	stroka word_;
	stroka translate_;
public:
	dictPara() :word_(""), translate_("") {}
	dictPara(const stroka& word, const stroka& translate) :
		word_(word), translate_(translate) {}
	const stroka& get_word()const;
	const stroka& get_translate()const;
	bool operator==(const dictPara& right) const;
	bool operator!=(const dictPara& right) const;
	bool operator<(const dictPara& right) const;

};

#include <iostream>
std::ostream& operator<<(std::ostream& out, const dictPara& X);
#include <fstream>
std::ifstream& operator>>(std::ifstream& in, dictPara& X);



#endif // !DICTPARA_OP_2023