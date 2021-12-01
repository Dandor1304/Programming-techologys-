#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class peripheral_devs
{
public:
        peripheral_devs();
        int getcost();
        virtual void show();
        void setmaker(string);
        void setcost(int);
protected:
        string maker;
        int cost;
 };

