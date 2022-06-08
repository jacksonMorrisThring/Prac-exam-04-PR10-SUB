#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"
#include <iostream>
#include "RecordStores.h"
using namespace std;

int main(){
    Amoeba A1("84 Margaret Street North Adelaide");
    Amoeba A2("ajhfbfln");
    Amoeba A3("enjf3infe");


    RecordStores();

    Amoeba **ptr;
    ptr[0] =&A1;
    ptr[1] = &A2;
    ptr[2] = &A3;

    ptr = new Amoeba*[3];

    sort(ptr, 5);
    return 0;
}