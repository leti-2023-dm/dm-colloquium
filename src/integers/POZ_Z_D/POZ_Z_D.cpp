#ifndef POZ_Z_D_cpp
#define POZ_Z_D_cpp
#include "POZ_Z_D.h"

Integer* POZ_Z_D::get(Integer* obj) const
{
	if (obj->len() == 1 && obj->get(0) == 0) {
		return new Integer("0");
	}
	if (obj->hasSign()) {
		return new Integer("1");
	}
	return new Integer("2");
}

#endif 

