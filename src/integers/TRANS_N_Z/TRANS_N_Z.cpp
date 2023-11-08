#ifndef MUL_ZM_Z_cpp
#define MUL_ZM_Z_cpp
#include "/MUL_ZM_Z.h"

Integer* MUL_ZM_Z::get(Integer* obj) const
{	
	Integer* res = new Integer(obj->toString());
	res->changeSign();
	return res;
}

#endif // !MUL_ZM_Z_cpp
