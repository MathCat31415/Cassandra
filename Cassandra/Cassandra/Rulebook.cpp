#include "Rulebook.h"



namespace Cassandra
{

	RULES_MAP Rulebook::s_Rules;
	Rulebook::_init Rulebook::s_initializer;

	Rules * Rulebook::get_Rules(std::string rulename)
	{
		RULES_ITERATOR it = s_Rules.find(rulename);
		if (it == s_Rules.end())
			return nullptr;
		return it->second;
	}

	bool Rulebook::delete_Rules(std::string rulename)
	{
		RULES_ITERATOR it = s_Rules.find(rulename);
		if (it != s_Rules.end())
		{
			delete_Rules(it);
			return true;
		}
		return false;
	}

	void Rulebook::delete_Rules(RULES_ITERATOR it)
	{
		if (it->second != nullptr)
			SAFE_DELETE(it->second);
		s_Rules.erase(it);
	}


	Rulebook::_init::_init()
	{
		s_Rules.emplace("Real", new Rules_Real());
	}

	Rulebook::_init::~_init()
	{
		RULES_ITERATOR it = s_Rules.begin();
		while (it != s_Rules.end())
		{
			delete_Rules(it);
			it = s_Rules.begin();
		}
	}

}

