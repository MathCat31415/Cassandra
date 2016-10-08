#pragma once

#define SAFE_DELETE(x) if(x){x->shutdown();delete x; x=nullptr;};
#define SAFE_DELETE_VECTOR(x) for(unsigned int i = 0; i<x.size();i++)SAFE_DELETE(x[i]); x.clear();


#define SAFE_PRINT(obj,os) if(obj)obj->print(os);else os<<"<NULL>";
