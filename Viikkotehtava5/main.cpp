#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Jari");
    Seuraaja *B = new Seuraaja("Kari");
    Seuraaja *C = new Seuraaja("Jesse");

    Notifikaattori *N = new Notifikaattori();
    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->tulosta();

    N->postita("gm");

    N->poista(B);

    N->postita("gn");


    return 0;
}
