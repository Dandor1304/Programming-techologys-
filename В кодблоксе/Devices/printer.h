#ifndef PRINTER_H_INCLUDED
#define PRINTER_H_INCLUDED
#include "peripheral_devs.h"
#include <iostream>
using namespace std;
class printer : public peripheral_devs
{
public:
    printer(string,int,string);
    void setformat(string);
    void show();
protected:
private:
    string format;

};
#endif // PRINTER_H_INCLUDED
