#pragma once
#include "peripheral_devs.h"
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

