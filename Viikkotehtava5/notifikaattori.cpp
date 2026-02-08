#include "notifikaattori.h"
#include <iostream>

using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "CONSTRUCTOR NOTIFICATOR" << endl;
}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;
}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    cout << "Deleting follower: " << poistSeur->getNimi() << endl;
    if (seuraajat == nullptr || poistSeur == nullptr)
        return;

    if (seuraajat == poistSeur){
        seuraajat = seuraajat->next;
        poistSeur->next = nullptr;
        return;
    }

    Seuraaja *alku = seuraajat;
    while(alku->next != nullptr){
        if(alku->next == poistSeur){
            alku->next = poistSeur->next;
            poistSeur->next = nullptr;
            return;
        }
    alku = alku->next;
    }
}

void Notifikaattori::tulosta()
{
    cout << "Followers: " << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        cout << "Follower " << alku->getNimi() << endl;
        alku = alku->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    cout << "Posting message: " << viesti << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        alku->paivitys(viesti);
        alku = alku->next;
    }
}
