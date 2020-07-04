#pragma once
#include <iostream>
using namespace std;

class Element
{
protected:
    unsigned int y_coordinates;
    unsigned int x_coordinates;
public:
    virtual void set_parameters(unsigned int,unsigned int,unsigned int)=0;
    virtual string generate_svg()=0;
    virtual void change_parameters(unsigned int,unsigned int,unsigned int)=0;
    virtual string convert_parameters_to_string_for_display(unsigned int)=0;
    virtual void save_elements(ofstream &)=0;
    virtual void read_parameters_from_file(ifstream &)=0;
    static unsigned int id_;
};
