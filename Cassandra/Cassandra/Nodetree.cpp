#include "Nodetree.h"

namespace Cassandra
{

	std::ostream & operator<<(std::ostream & os, Node * obj)
	{
		obj->print(os);
		return os;
	}

	Node_Element::Node_Element()
	{
		m_value = nullptr;
	}

	Node_Element::Node_Element(Element *value)
	{
		m_value = value;
	}

	Node_Element::~Node_Element() 
	{
		shutdown();
	}

	void Node_Element::shutdown()
	{
		SAFE_DELETE(m_value);
	}

	void Node_Element::print(std::ostream & os)
	{
		SAFE_PRINT(m_value, os);
	}

	void Node_Element::set_Element(Element *value)
	{
		SAFE_DELETE(m_value);
		m_value = value;
	}

	Element * Node_Element::get_Element()
	{
		return m_value;
	}


	Node::Node()
	{
		m_Rules = "Real";
		LOG(DEBUG) << "Node created at " << (int)this;
	}

	Node::~Node()
	{
		LOG(DEBUG) << "Node deleted at " << (int)this;
	}

	void Node::set_Rules(std::string rules)
	{
		m_Rules = rules;
	}

	std::string Node::get_Rules()
	{
		return m_Rules;
	}

}
