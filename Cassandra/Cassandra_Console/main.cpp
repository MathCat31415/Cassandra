

#include <iostream>

#include "Cassandra.h"

using namespace Cassandra;

int main()
{
	//el::Helpers::setStorage(Cassandra::Settings::getEasyloggingStorage());
	Rules* rule = Rulebook::get_Rules("Real");

	Node *obj;

	obj = new Node_Element();
	std::cout << obj;
	SAFE_DELETE(obj);

	std::cout << std::endl;

	obj = new Node_Element(new Element());
	std::cout << obj;
	SAFE_DELETE(obj)

	std::cout << std::endl;

	Node_Element *obj2 = new Node_Element(new Element_Integer(6));
	std::cout << obj2;	

	std::cout << std::endl;

	obj2->set_Element(new Element_String("Hello World"));
	std::cout << obj2;
	SAFE_DELETE(obj2);

	std::cout << std::endl;


	system("Pause");
   }