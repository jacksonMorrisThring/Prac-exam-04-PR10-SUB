#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"
#include <iostream>
using namespace std;

int main(){
    StoreChain chain;

    RecordStore** a_ptr;
    a_ptr = chain.get_chain();

    cout << a_ptr[0] -> get_name() << endl;

    return 0;
}