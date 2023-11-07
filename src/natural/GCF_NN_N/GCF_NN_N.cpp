#include "GCF_NN_N.h"

#include "../NZER_N_B/NZER_N_B.h"
#include "../MOD_NN_N/MOD_NN_N.h"
#include "../COM_NN_D/COM_NN_D.h"
#include <sstream>

Natural* GCF_NN_N::get(Natural* firstOperand, Natural* secondOperand) const {
    Natural first = *firstOperand;
    Natural second = *secondOperand;
    std::pair pair = std::make_pair(first, second);

    NZER_N_B nzer;
    MOD_NN_N mod;
    while (nzer.get_bool(&pair.first) && nzer.get_bool(&pair.second)){
        // (a;b) = (b; a mod b);
        pair = std::make_pair(pair.second, *mod.get(&pair.first, &pair.second));
    }
    first = pair.first;
    second = pair.second;

    COM_NN_D compere;
    size_t com = compere.get(&first, &second)->get(0);
    if (com == 2 || com == 0){
        return new Natural(first);
    }
    if (com == 1){
        return new Natural(second);
    }
}
