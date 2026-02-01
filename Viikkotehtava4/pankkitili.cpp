#include "pankkitili.h"

Pankkitili::Pankkitili(string name){
    omistaja = name;
    saldo = 0;
    cout << "PANKKITILI " << name << " CONSTRUCTOR" << endl;
}

double Pankkitili::getBalance(){
    cout << "Saldo is: " << saldo << endl;
    return saldo;
}

bool Pankkitili::deposit(double depo){
    if (depo <= 0){
        cout << "Error. Give a positive number to deposit to bank account." << endl;
    return false;
    }
    saldo = saldo + depo;
    cout << depo << " deposited to bank account." << endl;
    return true;
}

bool Pankkitili::withdraw(double withd){
    if(withd <= 0){
        cout << "Error. Give a positive number to withdraw from bank account." << endl;
    return false;
    }

    if (withd > saldo){
        cout << "Error. Not enough balance to withdraw." << endl;
        cout << "Your balance is: " << saldo << endl;
    return false;
    }
    saldo = saldo - withd;
    cout << withd << " withdrawn from the bank account." << endl;
    return true;
}
