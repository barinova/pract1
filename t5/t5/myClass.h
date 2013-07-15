#include <iostream>
#include <string>

class myClass
{
public:
	std::string str;
	myClass(void);
	myClass(char* str);
	~myClass(void);
	void createString();
	void addString();
	void findString();
	std::string viewSubstring(std::string tmp);
};

