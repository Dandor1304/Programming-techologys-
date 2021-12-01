
#include "peripheral_devs.h"
#include "monitor.h"
#include "printer.h"
#include <iostream>
#include "Devices.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
    monitor m1 ("HP ", 12000 , "23.8");
    monitor m2 ("PB ", 18000 , "24");
    printer p1 ("Samsung ", 8000 , "A4");
    printer p2 ("Xerox ", 10000 , "A3");
    peripheral_devs* pd[4];
    int min_cost = m1.getcost();
    pd[0] = &m1;
    pd[1] = &m2;
    pd[2] = &p1;
    pd[3] = &p2;
        for (int i = 0; i < 4; i++) // Вывод на экран данных
        {
            pd[i]->show();
        }

        
}

