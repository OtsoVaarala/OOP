#include "luottotili.h"

Luottotili::Luottotili(string name, double limit) : Pankkitili(name){
    luottoRaja = limit;
    cout << "LUOTTOTILI " << name << " CONSTRUCTOR" << endl;
    cout << "LUOTTORAJA: " << luottoRaja << endl;
}

bool Luottotili::deposit(double depo){
    if (depo <= 0){
        cout << "Error. Give a positive number to deposit to credit account." << endl;
        return false;
    }

    if (saldo + depo > 0){
        cout << "Error. Deposit larger than credit debt." << endl;
        return false;
    }

    saldo = saldo + depo;
    cout << depo << " credit debt paid. Current credit debt: " << saldo << endl;
    return true;
}

bool Luottotili::withdraw(double withd){
    if(withd <= 0){
        cout << "Error. Give a positive number to withdraw from credit account." << endl;
        return false;
    }

    if(saldo - withd < -luottoRaja){
        cout << "Error. Credit limit reached." << endl;
        cout << "Your credit limit is: " << -luottoRaja << endl;
        cout << "Current balance of credit account: " << saldo << endl;
        return false;
    }

    saldo = saldo - withd;
    cout << withd << " withdrawn from credit account." << endl;
    cout << "Current balance of credit account: " << saldo << endl;
    return true;
}
