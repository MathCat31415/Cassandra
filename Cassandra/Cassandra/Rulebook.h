#pragma once

#include "Rules.h"
#include "Settings.h"

#include <map>

namespace Cassandra
{
	typedef std::map<std::string, Rules*> RULES_MAP;
	typedef RULES_MAP::iterator RULES_ITERATOR;

	class Rulebook
	{
	private:
		static RULES_MAP s_Rules;

	public:
		Rulebook() { ; }
		~Rulebook() { ; }

		static Rules* get_Rules(std::string);
		static bool delete_Rules(std::string);

	private:
		static void delete_Rules(RULES_ITERATOR it);




	public:

		class _init
		{
		public:
			_init();
			~_init();
		};

	private:
		static _init  s_initializer;

	};




}


