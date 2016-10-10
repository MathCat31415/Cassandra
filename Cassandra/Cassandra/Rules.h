#pragma once


namespace Cassandra
{

	class Rules
	{
	public:
		Rules();
		Rules(const Rules&) = delete;
		virtual ~Rules();

		virtual void shutdown() { ; }
	};



	class Rules_Real :
		public Rules
	{
	public:
		Rules_Real();
		Rules_Real(const Rules_Real&) = delete;
		virtual ~Rules_Real();
	};




}



