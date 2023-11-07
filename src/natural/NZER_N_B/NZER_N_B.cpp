#include "NZER_N_B.h"

Natural* NZER_N_B::get(Natural* obj) const {
    if (obj->len() == 1 && obj->get(0) == 0){
        return new Natural("0");
    }
    else {
        return new Natural("1");
    }
}

bool NZER_N_B::get_bool(Natural* obj) const {
    // if (obj == 0) return 0; else return 1;
    return !(obj->len() == 1 && obj->get(0) == 0);
}
