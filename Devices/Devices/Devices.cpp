
#include "peripheral_devs.h"
#include "monitor.h"
#include "printer.h"
#include <iostream>
using namespace std;






int main()
{
    int i = 0;
    int num_dev = 0;
    string m;
    string f;
    string d;
    int c;
    int parametr = 0;
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
        cout << "Выберите номер устройства для редактирования данных" << endl;
        cin >> num_dev;
        cout << "Чтобы поменять 1 параметр утройства нажмите - 1" << endl;
        cout << "Чтобы поменять 2 параметр утройства нажмите - 2" << endl;
        cout << "Чтобы поменять 3 параметр утройства нажмите - 3" << endl;
        cin >> parametr;

        switch (parametr)
        {
        case 1:
            cout << "Введите производителя" << endl;
            cin >> m;
            pd[num_dev-1]->setmaker(m);
            break;
        case 2:
            cout << "Введите стоимость" << endl;
            cin >> c;
            pd[num_dev - 1]->setcost(c);
            break;
        case 3:
            if (num_dev >= 2)
            {
                cout << "Введите  формат бумаги для принтера" << endl;
                cin >> f;
                ((printer*) pd[num_dev-1])->setformat(f);
                break;
            }
            else
            {
                cout << "Введите диагональ экрана" << endl;

                cin >> d;
                ((monitor*)pd[num_dev - 1])->setdiagonal(d);
                break;
            }

        }
        for (int i = 0; i < 4; i++) // Вывод на экран отредактированных данных
        {
            pd[i]->show();
        }
        for (int i = 0; i < 4; i++) // Вывод на экран данных
        {
            if (pd[i]->getcost() < min_cost)
                min_cost = pd[i]->getcost();

        }
        cout << "Минимальная цена устройства составляет " << min_cost;

}

