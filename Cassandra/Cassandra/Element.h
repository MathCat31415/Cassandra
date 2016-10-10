#pragma once

#include "Settings.h"

#include <iostream>
#include <string>



namespace Cassandra
{
	class Element
	{
	public:
		Element();
		Element(const Element&) = delete;
		virtual ~Element();

		virtual void shutdown();
		virtual void print(std::ostream& os);
	};

	std::ostream& operator<<(std::ostream& os, Element* obj);



	class Element_Integer :
		public Element
	{
	private:
		int m_value;

	public:
		Element_Integer();
		Element_Integer(int value);
		Element_Integer(const Element_Integer&) = delete;
		virtual ~Element_Integer();

		virtual void print(std::ostream& os);

	};

	class Element_String :
	public Element
	{
	private:
		std::string m_value;

	public:
		Element_String();
		Element_String(std::string value);
		Element_String(const Element_Integer&) = delete;
		virtual ~Element_String();

		virtual void print(std::ostream& os);

	};

	





}






