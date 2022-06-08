#ifndef RECORDSTORES_H
#define RECORDSTORES_H

#include "Amoeba.h"
#include <string>

class RecordStores {
public:
    static void sort(Amoeba **store, int n);  // sorts the array of n Amoeba pointers in 
                                              // ascending order base on their storeID
};
#endif


