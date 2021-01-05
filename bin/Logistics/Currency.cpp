//
// Created by d0sag3 on 12/28/2020.
//

#include "Currency.h"

Currency::Currency(unsigned int p, unsigned int g, unsigned int s, unsigned int c) : platinum(p),
                                                                                     gold(g),
                                                                                     silver(s),
                                                                                     copper(c)
{

}

void Currency::addCurrency(Currency currency)
{
    platinum += currency.platinum;
    gold += currency.platinum;
    silver += currency.silver;
    copper += currency.copper;
}
