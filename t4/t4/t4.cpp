#include <iostream>

using namespace std;

int& f1(int N)
{
	static int k = N;
	k=k*k;
	return k;
}

void f2()
{
	int N;
	cout << "Enter N: ";
	cin >> N;
	cout << f1(N);
}

int main()
{
	f2();
	return 0;
}