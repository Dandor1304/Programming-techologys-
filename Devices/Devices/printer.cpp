#include "printer.h"

printer::printer(string m, int c , string f )
{
	maker = m;
	cost = c;
	format = f;

}

void printer::setformat(string format)
{
	this->format = format;
}

void printer::show()
{
	cout << "Maker: " << maker << "Cost:" << cost << "Foramt: " << format << endl;

}
