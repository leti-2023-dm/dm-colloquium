#include "GCF_NN_N.h"

Natural* GCF_NN_N::get(Natural* firstOperand, Natural* secondOperand) const {
    Natural first = *firstOperand;
    Natural second = *secondOperand;
    std::pair<Natural, Natural> pair = std::make_pair(first, second);
    NZER_N_B nzerResult;
    MOD_NN_N modResult;
    while (nzerResult.get(&pair.first)->get(0) != 0 && nzerResult.get(&pair.second)->get(0) != 0){
        pair = std::make_pair(pair.second, *modResult.get(&pair.first, &pair.second));
    }
    first = pair.first;
    second = pair.second;
    COM_NN_D comResult;
    size_t compare = comResult.get(&first, &second)->get(0);
    if (compare == 2 || compare == 0){
        return new Natural(first);
    }
    if (compare == 1){
        return new Natural(second);
    }
}
