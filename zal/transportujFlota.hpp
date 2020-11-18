#pragma once

#include "include/Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia{};
    unsigned int suma = 0;
    unsigned int zaglowce = 0;

    if (towar == 0)
        return 0;
    do
    {
        Statek* s1 = stocznia();
        if (dynamic_cast<Zaglowiec*> (s1) != nullptr)
            zaglowce++;

        int ladunek = s1->transportuj();
        suma += ladunek;
        delete s1;
    } while (suma <= towar);
    
}
