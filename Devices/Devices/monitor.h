#pragma once
#include "peripheral_devs.h"
#include <iostream>
#include <string.h>
using namespace std;

class monitor : public peripheral_devs
{
public:
    monitor(string,int, string);
    void setdiagonal(string);
    void show();
protected:
private:
    string diagonal;
};

