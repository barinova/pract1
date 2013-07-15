#include <iostream>
using namespace std;

int* getElem(int i, int* arr)
{ 
	return &arr[i];
}

void init(int* arr, int len)
{
	int tmp;
	arr[0] = rand()%(2*len);
	for(int i(1); i < len; i++)
	{
		//for(int j(0); j < i; j++)
			//while(arr[j] == arr[i])
				arr[i] = rand()%(2*len);
	}
}

int main()
{
	int N;
	cout << "Enter size: ";
	cin >> N;
	int* arr = new int[N];
	init(arr, N);
	for(int i(0); i < N; i++)
		cout << *getElem(i, arr) << " ";
	return 0;
}