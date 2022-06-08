#ifndef AMOEBA_H
#define AMOEBA_H

#include <string>
#include "RecordStore.h"

class Amoeba : public RecordStore {
private:
    static int amoebaBranch;
protected:
    int storeID;                 // unique id for the store
public:
    Amoeba(std::string a);
    Amoeba();

    void set_storeID(int ID);
    int get_storeID();

    void get_amoebaBranch(int branch);
    int get_amoebaBranch();

    virtual int get_excessSales();  // return the number of record sales above a given store target

};

#endif


