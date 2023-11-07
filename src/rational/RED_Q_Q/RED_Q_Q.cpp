#include "RED_Q_Q.h"

#include "../../natural/GCF_NN_N/GCF_NN_N.h"
#include "../../integer/ABS_Z_N/ABS_Z_N.h"
#include "../../integer/DIV_ZZ_Z/DIV_ZZ_Z.h"

Rational* RED_Q_Q::get(Rational* operationObject) const {
    Integer p = operationObject->getNumerator();
    ABS_Z_N abs;
    Natural* pNatural = abs.get(&p); // = *p.getNatural();
    Natural q = operationObject->getDenominator();

    GCF_NN_N find_d;
    Natural* d = find_d.get(&pNatural, &q);
    DIV_ZZ_Z div;
    p = *div.get(&p, &d);
    q = *div.get(&q, &d);

    return new Rational(p, q);;
}
