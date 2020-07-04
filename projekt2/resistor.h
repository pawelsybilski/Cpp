#pragma once
#include <iostream>
#include "element.h"
using namespace std;

class Resistor: public Element
{
public :
    void set_parameters(unsigned int,unsigned int,unsigned int)=0;
    string generate_svg()=0;
    void change_parameters(unsigned int,unsigned int,unsigned int)=0;
    string convert_parameters_to_string_for_display(unsigned int)=0;
    void save_elements(ofstream &)=0;
    void read_parameters_from_file(ifstream &)=0;

};


