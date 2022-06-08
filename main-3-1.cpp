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

    

    cout << ((AmoebaTickets *)a_ptr[0]) -> get_name() << endl;
    // cout << ((Amoeba *)a_ptr[1]) -> get_name() << endl;
    // cout << ((Amoeba *)a_ptr[2]) -> get_name() << endl;
    // cout << ((Amoeba *)a_ptr[3]) -> get_name() << endl;
    cout << ((AmoebaTickets *)a_ptr[4]) -> get_name() << endl;
    //cout << ((a_ptr[1] -> get_name() << endl;

    return 0;
}