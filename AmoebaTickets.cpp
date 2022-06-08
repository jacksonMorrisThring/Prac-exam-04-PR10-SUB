//#include "RecordStore.h"
#include "AmoebaTickets.h"
#include <iostream>
using namespace std;

AmoebaTickets::AmoebaTickets(){
    ticketsSold = 0;
    this -> name = "?";
}
AmoebaTickets::AmoebaTickets(string n){
    this -> name = n;
    ticketsSold = 0;
}


void AmoebaTickets::sellTicket(){
    ticketsSold++;

} 
int AmoebaTickets::get_ticketsSold(){
    return ticketsSold;
}