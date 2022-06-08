//#include "RecordStore.h"
#include "Amoeba.h"
#include <iostream>
using namespace std;

int Amoeba::amoebaBranch = 0;

Amoeba::Amoeba(std::string a){
    this -> name = "Amoeba";
    this -> address = a;
    this -> sales = 0;
    this -> storeID = amoebaBranch;
    amoebaBranch++;
}


void Amoeba::set_storeID(int ID){
    this -> storeID = ID;
}
int Amoeba::get_storeID(){
    return storeID;
}

void Amoeba::get_amoebaBranch(int branch){
    this -> amoebaBranch = branch;
}
int Amoeba::get_amoebaBranch(){
    return amoebaBranch;
}

int Amoeba::get_excessSales(){
    if (sales <= 1000){
        return 0;
    }
    else{
        return sales;
    }
}  