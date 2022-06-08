#ifndef AMOEBATICKETS_H
#define AMOEBATICKETS_H

#include <string>
#include "Amoeba.h"

class AmoebaTickets : public Amoeba {
public:
    AmoebaTickets();            // just use the corresponding base class constructor
    AmoebaTickets(std::string n);  // creates the record store with name n 
                          // also call the parent class constructor
                          // with an empty address string.
    int ticketsSold;          // and number of tickets sold so far should be initialised to zero

    void sellTicket();        // increments the number of tickets sold  
    int get_ticketsSold();        // gets the number of tickets sold
};

#endif


