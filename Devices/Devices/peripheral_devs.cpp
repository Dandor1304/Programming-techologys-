#include "peripheral_devs.h"
#include <iostream>
#include <string.h>
using namespace std;

peripheral_devs::peripheral_devs()
{
	maker = "NONAME";
	cost = 0;
}

int peripheral_devs::getcost()
{
	return cost;
}

void peripheral_devs::show()
{
	cout << "Maker: " << maker << "Cost: " << cost << endl;
}

void peripheral_devs::setmaker(string maker)
{
	this->maker = maker;
}

void peripheral_devs::setcost(int c)
{
	cost = c;
}
