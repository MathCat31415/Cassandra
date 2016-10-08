#pragma once

#include "Makros.h"

#include "Element.h"

namespace Cassandra
{


	class Node
	{
	public:
		Node() { ; }
		Node(const Node&) = delete;
		virtual ~Node() { ; }

		virtual void shutdown() = 0;
		virtual void print(std::ostream& os) = 0;
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



