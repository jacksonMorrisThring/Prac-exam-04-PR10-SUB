#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include <iostream>
using namespace std;

int main(){
    AmoebaTickets A1("Tickets Store");
    cout << A1.get_name() <<"     ...     "<< A1.get_storeID() << endl;


    return 0;
}