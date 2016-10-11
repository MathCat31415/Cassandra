#pragma once

#include "Extern\easylogging++.h"


namespace Cassandra
{

	#define SAFE_DELETE(x) if(x){x->shutdown();delete x; x=nullptr;};
	#define SAFE_DELETE_VECTOR(x) for(unsigned int i = 0; i<x.size();i++)SAFE_DELETE(x[i]); x.clear();


	#define SAFE_PRINT(obj,os) if(obj)obj->print(os);else os<<"<NULL>";


	class Settings
	{
	private:

	public:
		Settings() { ; }
		~Settings() { ; }


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


