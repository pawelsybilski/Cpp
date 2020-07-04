#pragma once
#include <iostream>
#include "resistor.h"
using namespace std;


class Non_linear_resistor : public Resistor
{
    unsigned resistor_colour;
public:
    void set_parameters(unsigned int,unsigned int,unsigned int);
    string generate_svg();
    void change_parameters(unsigned int,unsigned int,unsigned int);
    string convert_parameters_to_string_for_display(unsigned  int);
    void save_elements(ofstream &);
    void read_parameters_from_file(ifstream &);
    static unsigned int id_;
static Element *  create_non_linear_resistor(){return new Non_linear_resistor();}
};



