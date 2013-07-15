#include <iostream>

using namespace std;

int* digits(int N, int &len)
{
	int *arr = new int[N];
	for(int i(2); i <= N; i++)
		arr[i - 2] = i;
	len = N - 2;
	return arr;
}

int main()
{
	int N, len;
	cout << "Enter number of digits: ";
	cin >> N;
	int *arr = digits(N , len);
	for(int i(0); i < len; i++)
		cout << arr[i] << '\t';
	cout << "\nLenght: " << len;
	return 0;
}