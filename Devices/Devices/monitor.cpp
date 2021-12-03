
#include "monitor.h"

monitor::monitor(string m, int c, string d)
{
	maker = m;
	cost = c;
	diagonal = d;
}

void monitor::setdiagonal(string diagonal)
{
	this->diagonal = diagonal;
}

void monitor::show()
{
	cout << "Maker: " << maker << "Cost: " << cost<<" "<< "Diagonal: " << diagonal << endl;

}
