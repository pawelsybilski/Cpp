#include <iostream>
#include "non_linear_resistor.h"
#include <fstream>
#include <sstream>
#include <string>
#include "element.h"
using namespace std;
void Non_linear_resistor:: set_parameters(unsigned int w1, unsigned int w2, unsigned int w3)
{
    resistor_colour=w1;

    x_coordinates=w2;

    y_coordinates=w3;

}

string Non_linear_resistor::generate_svg()
{
ostringstream kod_svg;
    kod_svg<<"<rect x=\""<<100+x_coordinates<<"\" y=\""<<30+y_coordinates<<"\" width=\"20\" height=\"40\" style=\"fill:rgb(255,255,255);stroke-width:2;stroke:rgb("<<resistor_colour<<",0,"<<resistor_colour<<")\" />"<<endl;
            kod_svg<<"<line x1=\""<<110+x_coordinates<<"\" y1=\""<<30+y_coordinates<<"\" x2=\""<<110+x_coordinates<<"\" y2=\""<<y_coordinates<<"\" style=\"stroke:rgb(0,0,0);stroke-width:2\" />"<<endl;
            kod_svg<<"<line x1=\""<<110+x_coordinates<<"\" y1=\""<<100+y_coordinates<<"\" x2=\""<<110+x_coordinates<<"\" y2=\""<<70+y_coordinates<<"\" style=\"stroke:rgb(0,0,0);stroke-width:2\" />"<<endl;
           kod_svg<<"<line x1=\""<<90+x_coordinates<<"\" y1=\""<<60+y_coordinates<<"\" x2=\""<<130+x_coordinates<<"\" y2=\""<<40+y_coordinates<<"\" style=\"stroke:rgb("<<resistor_colour<<",0,"<<resistor_colour<<");stroke-width:2\" />"<<endl;
            kod_svg<<"<transform=\"rotate(90 250,2500\"/>";
           return kod_svg.str();
}

void Non_linear_resistor::change_parameters(unsigned int w1, unsigned int w2, unsigned int w3)
{

    resistor_colour=w1;

    x_coordinates=w2;

    y_coordinates=w3;


}

string Non_linear_resistor::convert_parameters_to_string_for_display(unsigned int element_number)
{
ostringstream parameters_in_string_for_display;
                parameters_in_string_for_display<<"Rezystor nieliniowy "<<endl;
                parameters_in_string_for_display<<"Kolor rezystora:  "<<resistor_colour<<endl;
                parameters_in_string_for_display<<"Wspolrzedne x-owe:  "<<x_coordinates<<endl;
                parameters_in_string_for_display<<"Wspolrzednie y-owe:  "<<y_coordinates<<endl;
                parameters_in_string_for_display<<"Numer elementu:  "<<element_number<<endl;
                parameters_in_string_for_display<<"////////////////////"<<endl;
return parameters_in_string_for_display.str();
}

void Non_linear_resistor::save_elements(ofstream &file)
{

         file<<2<<endl;
         file<<resistor_colour<<endl;
         file<<x_coordinates<<endl;
         file<<y_coordinates<<endl;
}

void Non_linear_resistor::read_parameters_from_file(ifstream & file)
{
    file>>resistor_colour;
    file>>x_coordinates;
    file>>y_coordinates;
}
unsigned int Non_linear_resistor::id_=0;
