#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas(string n, double l) : nimi(n), kayttotili(n), luottotili(n, l){
    cout << "ASIAKAS " << nimi << " CONSTRUCTOR" << endl;
}

string Asiakas::getNimi(){
    cout << "Name of the client is " << nimi << "." << endl;
    return nimi;
}

void Asiakas::showSaldo(){
    cout << "-------------------------" << endl;
    cout << "Client: " << nimi << endl;
    cout << "Balance: ";
    kayttotili.getBalance();
    cout << "Credit: ";
    luottotili.getBalance();
    cout << "-------------------------" << endl;
}

bool Asiakas::talletus(double sum){
    return kayttotili.deposit(sum);
}

bool Asiakas::nosto(double sum){
    return kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum){
    return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum){
    return luottotili.withdraw(sum);
}

bool Asiakas::tiliSiirto(double sum, Asiakas& receiver){
    if(sum <= 0){
        cout << "Error. Amount to transfer must be positive." << endl;
        return false;
    }

    if(!kayttotili.withdraw(sum)){
        cout << "Error. Not enough balance to make transfer." << endl;
        return false;
    }

    receiver.kayttotili.deposit(sum);
    cout << "Transfer completed." << endl;
    cout << sum << " transfered from " << nimi << " to " << receiver.nimi << endl;
    return true;
}
