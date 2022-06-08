#ifndef RECORDSTORE_H
#define RECORDSTORE_H

#include <string>

class RecordStore {
protected:
    std::string name; 
    std::string address;           
    int sales;

public:
    RecordStore();
    RecordStore(std::string n, std::string a, int s);

    

    void set_address(std::string a); 
    std::string get_address();

    void set_name(std::string name);
    std::string get_name();

    void set_sales(int sales);
    int get_sales();

    virtual int get_excessSales() = 0;  // return the number of record sales above a given store target

};

#endif


