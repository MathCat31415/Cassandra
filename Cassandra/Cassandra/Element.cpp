#include "Element.h"


namespace Cassandra
{
	Element::Element(){	}

	Element::~Element(){	}

	void Element::shutdown(){	}

	void Element::print(std::ostream & os)
	{
		os << "< >";
	}


	Element_Integer::Element_Integer() : Element()
	{
		m_value = 0;
	}

	Element_Integer::Element_Integer(int value)
	{
		m_value = value;
	}



	Element_Integer::~Element_Integer(){	}

	void Element_Integer::print(std::ostream & os)
	{
		os << m_value;
	}




	std::ostream & operator<<(std::ostream & os, Element* obj)
	{
		obj->print(os);
		return os;
	}



	
	Element_String::Element_String()
	{
		m_value = "";
	}

	Element_String::Element_String(std::string value)
	{
		m_value = value;
	}

	Element_String::~Element_String(){ }

	void Element_String::print(std::ostream & os)
	{
		os << m_value;
	}

}
