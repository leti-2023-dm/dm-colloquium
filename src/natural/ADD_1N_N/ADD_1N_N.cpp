#include "ADD_1N_N.h"

Natural* ADD_1N_N::get(Natural* obj) const{
    bool flag = false;
    for(size_t i = 0; i < obj->len(); ++i){
        if(obj->get(i) == 9){
            obj->set(i, 0);
        } else{
            obj->set(i, obj->get(i) + 1);
            flag = true;
        }
    }
    if(flag)
        return new Natural(*obj); // not all digits are equal 9
    std::vector<uint8_t> result(obj->len(), 0);
    result.push_back(1);
    return new Natural(result);
}