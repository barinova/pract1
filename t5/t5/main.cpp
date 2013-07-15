#include "myClass.h"

int main()
{
	myClass* str = new myClass();
	myClass* strFromProg = new myClass("ololo");
	str->addString();
	str->findString();
	return 0;
}