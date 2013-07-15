
#include <time.h>
#include <iostream>
using namespace std;

void dataFromTime(int &dd, int &mm, int &yy)
{
	tm *local;
	time_t t;

	t = time(NULL);
	local = localtime(&t);
	cout << asctime(local) << endl;
	dd = local->tm_mday;
	mm = local->tm_mon;
	yy = local->tm_year + 1900;
	
}

int main()
{
	int dd, mm, yy;
	dataFromTime(dd, mm, yy);
	cout << dd << " " << mm << " " << yy;
	return 0;
}