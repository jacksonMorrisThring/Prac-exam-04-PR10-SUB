#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"
#include <iostream>
#include "RecordStores.h"
using namespace std;


void RecordStores::sort(Amoeba **store, int n)  // sorts the array of n Amoeba pointers in // ascending order base on their storeID
{
    bool flag = true;
    int begin = 0;
    int finish = n-1;
    while (flag)
    {
        flag = false;
        for (int i = begin; i<finish; i++)
        {
            if (store[i] -> get_storeID() > store[i+1] -> get_storeID()){
                //swap(store[i] -> get_storeID(), store[i+1] -> get_storeID());
                Amoeba *store1Temp = store[i];
                Amoeba *store2Temp = store[i+1];
                store[i+1] = store1Temp;
                store[i] = store2Temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
        flag = false;
        finish--;

        for (int i = finish - 1; i >= begin; i--)
        {
            if (store[i] -> get_storeID() > store[i+1] -> get_storeID())
            {
            //swap(list[i], list[i+1]);
            Amoeba *store1Temp = store[i];
            Amoeba *store2Temp = store[i+1];
            store[i+1] = store1Temp;
            store[i] = store2Temp;
            flag = true;
            }
        }
        begin++;
    }   
}