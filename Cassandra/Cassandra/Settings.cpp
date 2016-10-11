#include "Settings.h"


//#include "Extern\easylogging++.h"

INITIALIZE_EASYLOGGINGPP

namespace Cassandra
{

	Settings::_init Settings::s_initializer;

	Settings::_init::_init()
	{
		LOG(INFO) << "---Settings_init Constructor () ---";
	}

	Settings::_init::~_init()
	{
		;
	}

	


}
