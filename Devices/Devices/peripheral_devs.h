#ifndef PERIPHERAL_DEVS_H
#define PERIPHERAL_DEVS_H
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
 #endif // PERIPHERAL_DEVS_H

