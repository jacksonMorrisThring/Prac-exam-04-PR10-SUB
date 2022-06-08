#include "RecordStore.h"
#include "Amoeba.h"
#include <iostream>
using namespace std;

int main(){
    Amoeba A1("84 Margaret Street North Adelaide");
    cout << A1.get_address() <<"     ...     "<< A1.get_storeID() << endl;


    return 0;
}