#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "CONSTRUCTOR " << nimi << endl;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi << " received message: " << viesti << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}
