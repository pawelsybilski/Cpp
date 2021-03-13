#include <iostream>
#include <fstream>
#include "document.h"
#include "mainwindow.h"
#include <sstream>
#include "mytypes.h"
using namespace std;

void Document::add_element(Element * ptr)
{
container.push_back(ptr);
}

void Document :: save_svg()
{
fstream file;

    file.open("plik.html",ios::out);
    file<<"<!DOCTYPE html><svg width=\"5000\" height=\"5000\">"<<endl;

for(unsigned int i=0;i<container.size();i++)
    file<<container[i]->generate_svg();

file<<"</svg><!DOCTYPE html>"<<endl;
    file.close();
}

void Document :: delete_element(int wybor)
{
    container.erase(container.begin()+wybor-1);
}

void Document:: modify_element(int w1 ,int w2, int w3,int numer_elementu)
{
container[numer_elementu-1]->change_parameters(w1,w2,w3);
}

string Document::convert_to_string_for_display()
{ostringstream parameters_in_string_for_display;
    for(unsigned int i=0;i<container.size();i++)
    parameters_in_string_for_display<<(container[i]->convert_parameters_to_string_for_display(i+1));

    return parameters_in_string_for_display.str();
}

void Document:: save_for_reading(string file_name)
{

   ofstream outputFile;
   outputFile.open((file_name).c_str());
   outputFile.close();

    outputFile.open((file_name).c_str());
    if(!outputFile.is_open())
    {
       QString wyjatek = "Blad zapisu pliku";
     throw wyjatek;
    }
   for(unsigned int i =0;i<container.size();i++)
   {container[i]->save_elements(outputFile);cout<<i<<endl;}
   outputFile.close();
}

void Document::read_from_file(string file_name)
{int type=1;

ifstream file;
file.open((file_name).c_str());
if(!file.is_open())
{
   QString wyjatek = "Blad odczytu z pliku";
 throw wyjatek;
}
    Element * tempFigure;
 file>>type;

while(!file.eof())
{


    tempFigure=create(type);
    if (tempFigure!=NULL)
        {
        tempFigure->read_parameters_from_file(file);
        container.push_back(tempFigure);
        }
    file>>type;
    }

file.close();
}

Document:: ~Document()
{
    for(unsigned int i=0;i<container.size();i++)
        delete[] container[i];
}

unsigned int Document::registerElement(createElement fun)
{
elementCreators_.insert(pair<unsigned int,createElement>(++ID_,fun));
return ID_;
}

Element * Document::create(unsigned int id)
{
    CreatorsMap::iterator it=elementCreators_.find(id);
    if (it!=elementCreators_.end())
    {
        return (it->second)();
    }
return NULL;
}

unsigned int Element:: id_=0;
unsigned int Document::ID_=1;
Document Document::document_;
int Document::element_id=0;
Document::Document(){}
