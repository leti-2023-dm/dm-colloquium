#include "NZER_N_B.h"

Natural* NZER_N_B::get(Natural* obj) const{
    if(obj->len() == 1 && obj->get(0) == 0)
        return new Natural("0");
    return new Natural("1");
}