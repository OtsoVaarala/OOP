#include "italianchef.h"


ItalianChef::ItalianChef(string itName) : Chef(itName){
    flour = 0;
    water = 0;
    cout << "ITALIAN CHEF " << chefName << " CONSTRUCTOR" << endl;
    cout << "----------------------" << endl;
}

int ItalianChef::makePizza(){
    int pizza = 0;
    while(flour >= 5 && water >= 5){
        flour = flour - 5;
        water = water - 5;
        pizza++;
    }
    cout << "Pizzas made by chef " << chefName << ": " << pizza << endl;
    cout << "Unused materials: " << water << " water and " << flour << " flour." << endl;
    cout << "----------------------" << endl;
    return pizza;
}

bool ItalianChef::askSecret(string secret, int sec, int ret){
    water = sec;
    flour = ret;
    if(secret != password){
        cout << "Wrong password." << endl;
        return 0;
    }
    else {
        cout << "Correct password!" << endl;
        makePizza();
        return 1;
    }

}

ItalianChef::~ItalianChef(){
    cout << "ITALIAN CHEF " << chefName << " DESTRUCTOR" << endl;
}
