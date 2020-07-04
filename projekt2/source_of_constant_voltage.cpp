#include <iostream>
#include "source_of_constant_voltage.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void Source_of_constant_voltage:: set_parameters(unsigned int w1, unsigned int w2, unsigned int w3)
{

    source_colour=w1;

    x_coordinates=w2;

    y_coordinates=w3;
}

string Source_of_constant_voltage::generate_svg()
{
ostringstream svg_code;
    svg_code<<"<circle cx=\""<<100+x_coordinates<<"\" cy=\""<<50+y_coordinates<<"\" r=\"10\" stroke=\"rgb("<<source_colour<<",0,"<<source_colour<<")\" stroke-width=\"2\" fill=\"white\" />"<<endl;
            svg_code<<"<line x1=\""<<100+x_coordinates<<"\" y1=\""<<40+y_coordinates<<"\" x2=\""<<100+x_coordinates<<"\" y2=\""<<y_coordinates<<"\" style=\"stroke:rgb(0,0,0);stroke-width:2\"/>"<<endl;
            svg_code<<"<line x1=\""<<100+x_coordinates<<"\" y1=\""<<60+y_coordinates<<"\" x2=\""<<100+x_coordinates<<"\" y2=\""<<100+y_coordinates<<"\" style=\"stroke:rgb(0,0,0);stroke-width:2\"/>"<<endl;
            svg_code<<"<line x1=\""<<95+x_coordinates<<"\" y1=\""<<50+y_coordinates<<"\" x2=\""<<105+x_coordinates<<"\" y2=\""<<50+y_coordinates<<"\" style=\"stroke:rgb("<<source_colour<<",0,"<<source_colour<<");stroke-width:2\" />"<<endl;

return svg_code.str();
}

void Source_of_constant_voltage::change_parameters(unsigned int w1, unsigned int w2 , unsigned int w3)
{
        source_colour=w1;

        x_coordinates=w2;

        y_coordinates=w3;
}

string Source_of_constant_voltage::convert_parameters_to_string_for_display(unsigned int element_number)
{
    ostringstream parameters_in_string_for_display;

    parameters_in_string_for_display<<"Zrodlo napiecia stalego "<<endl;
         parameters_in_string_for_display<<"Kolor zrodla:   "<<source_colour<<endl;
         parameters_in_string_for_display<<"Wspolrzedne x-owe:   "<<x_coordinates<<endl;
         parameters_in_string_for_display<<"Wspolrzednie y-owe:   "<<y_coordinates<<endl;
         parameters_in_string_for_display<<"Numer elementu:  "<<element_number<<endl;
         parameters_in_string_for_display<<"////////////////////"<<endl;
return parameters_in_string_for_display.str();
}

void Source_of_constant_voltage ::save_elements(ofstream &file)
{

    file<<3<<endl;
            file<<source_colour<<endl;
            file<<x_coordinates<<endl;
            file<<y_coordinates<<endl;
            //file.close();
}
void Source_of_constant_voltage:: read_parameters_from_file(ifstream & file)
{
    file>>source_colour;
            file>>x_coordinates;
            file>>y_coordinates;
}

unsigned int Source_of_constant_voltage::id_=0;
