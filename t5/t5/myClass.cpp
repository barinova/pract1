#include "myClass.h"

using namespace std;

myClass::myClass(void)
{
	createString();
}

myClass::myClass(char* tmp)
{
	str = tmp;
}

myClass::~myClass(void)
{
	delete[] this;
}

void myClass::createString()
{
	cout << "Enter a string: ";
	getline(cin, str);
}

void myClass::addString()
{
	string tmp;
	int pos;
	cout << "Enter substring: "; 
	getline(cin, tmp);
	cout << "Enter position: "; 
	cin >> pos;
	str.insert( pos, tmp);
	cout << str;
}

void myClass::findString()
{
	string tmp;
	int pos;
	cout << "Enter substring: " << endl;
	cin >> tmp;
	//getline(cin, tmp);
	pos = str.find(tmp);
	if (pos == string::npos)
		cout << "\nString not contain substring: " << tmp<< endl;
	else
	{
		cout << "\nString  contain substring: " << viewSubstring(tmp) << " in position " << pos << endl;
	}
}
string myClass::viewSubstring(string tmp)
{
	return tmp;
}