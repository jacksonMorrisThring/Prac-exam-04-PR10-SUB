#include "RecordStore.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"
#include "Amoeba.h"
#include <iostream>
using namespace std;

StoreChain::StoreChain(){
    AmoebaTickets at1("Store1");
    AmoebaTickets at2("Store2");

    Amoeba a1("Perth");
    Amoeba a2("Adelaide");
    Amoeba a3("Darwin");

    this -> ptr = new RecordStore*[5];

    ptr[0] = &at1;
    ptr[1] = &a1;
    ptr[2] = &a2;
    ptr[3] = &a3;
    ptr[4] = &at2;
}


RecordStore** StoreChain::get_chain(){
    return ptr;
}      // returns the array of pointers to the five record stores