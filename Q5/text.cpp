#include "text.h"

CText::CText(){}

CText::CText(std::string text){
    this->text = text;
}

std::string CText::getText(){return text;}

CText::~CText(){}
