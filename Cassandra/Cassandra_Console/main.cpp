

#include <iostream>

#include "Cassandra.h"


using namespace Cassandra;

int main()
{
	Element *obj;

	obj = new Element();
	std::cout << obj;
	SAFE_DELETE(obj);

	std::cout << std::endl;

	obj = new Element_Integer(6);
	std::cout << obj;	
	SAFE_DELETE(obj);

	std::cout << std::endl;

	obj = new Element_String("Hallo Welt");
	std::cout << obj;
	SAFE_DELETE(obj);

	std::cout << std::endl;

	

	std::cout << std::endl;


	system("Pause");
   }