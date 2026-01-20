#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name){
    chefName = name;
    cout << "CHEF " << chefName << " CONSTRUCTOR" << endl;
    cout << "----------------------" << endl;
}

int Chef::makeSalad(int matSalad){
    int saladMat = matSalad;
    int salad = 0;
    cout << "Materials for salad: " << saladMat << endl;

    while(saladMat >= 5){
        saladMat = saladMat - 5;
        salad++;
    }
    cout << "Salads made by chef " << chefName << ": " << salad << endl;
    cout << "Unused salad materials: " << saladMat << endl;
    cout << "----------------------" << endl;
    return salad;
}

int Chef::makeSoup(int matSoup){
    int soupMat = matSoup;
    int soup = 0;
    cout << "Materials for soup: " << soupMat << endl;

    while(soupMat >= 3){
        soupMat = soupMat - 3;
        soup++;
    }
    cout << "Soups made by chef " << chefName << ": " << soup << endl;
    cout << "Unused soup materials: " << soupMat << endl;
    cout << "----------------------" << endl;
    return soup;
}

Chef::~Chef(){
    cout << "CHEF " << chefName << " DESTRUCTOR" << endl;
}
