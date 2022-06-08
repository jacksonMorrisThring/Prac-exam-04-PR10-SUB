#include "RecordStore.h"
#include <iostream>
using namespace std;


RecordStore::RecordStore(){
    this -> name = "?";
    this -> address = "?";
    this -> sales = 0;

}
RecordStore::RecordStore(string n, string a, int s){
    this -> name = n;
    this -> address = a;
    this -> sales = s;
}

    

void RecordStore::set_address(std::string a){
    address = a;
}
std::string RecordStore::get_address(){
    return address;
}

void RecordStore::set_name(std::string name){
    this -> name = name; 
}
std::string RecordStore::get_name(){
    return name;
}

void RecordStore::set_sales(int sales){
    if (sales < 0){
        this -> sales = 0;
    }
    else{
        this -> sales = sales;
    }

}
int RecordStore::get_sales(){
    if (sales < 0){
        return 0;
    }
    else{
        return sales;
    }
}