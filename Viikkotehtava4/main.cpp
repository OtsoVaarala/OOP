#include <iostream>
#include "asiakas.h"


using namespace std;

int main()
{
    Asiakas a("Jari", 500);
    Asiakas b("Kari", 500);
    a.showSaldo();
    b.showSaldo();
    a.talletus(500);
    a.showSaldo();
    a.tiliSiirto(100, b);
    b.showSaldo();
    b.nosto(25);
    b.showSaldo();
    b.tiliSiirto(50, a);
    a.showSaldo();
    return 0;
}
