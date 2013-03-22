#include <stdio.h>
#include "nl.h"

geheel_getal hoofdfunctie(geheel_getal aantal_argumenten, karakter wijzer wijzer argumenten)
{
    geheel_getal teller;
    druk_in_vorm("Hallo wereld!\n");
    als (aantal_argumenten is_groter_dan 1)
        druk_in_vorm("Dit zijn de argumenten die je meegegeven hebt:\n");
    doe_iets_en_zolang_iets_geldt_doe_iets_anders(teller wordt 1; teller is_kleiner_dan aantal_argumenten; verhoog teller)
    {
        druk_in_vorm("Argument %d: '%s'\n", teller, argumenten[teller]);
    }
    geef 0 terug;
}
