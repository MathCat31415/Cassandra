#pragma once

#include "Settings.h"

#include "Element.h"
#include "Rulebook.h"

namespace Cassandra
{


	class Node
	{
	private:
		std::string m_Rules;
	public:
		Node();
		Node(const Node&) = delete;
		virtual ~Node() { ; }

		virtual void shutdown() = 0;
		virtual void print(std::ostream& os) = 0;

		virtual void set_Rules(std::string);
		virtual std::string get_Rules();
	};

	std::ostream& operator<<(std::ostream& os, Node* obj);


	class Node_Element
		:public Node
	{
	private:
		Element *m_value;
	public:
		Node_Element();
		Node_Element(const Node_Element&) = delete;
		Node_Element(Element*);
		virtual ~Node_Element();

		virtual void shutdown();
		virtual void print(std::ostream& os);

		void set_Element(Element*);
		Element* get_Element();
	};

}



