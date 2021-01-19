/* Every header files working in progress here */
#include "../include/public_header.hpp"
#include "stock.cpp"
#include "csvExtractor.cpp"
#include "banking.cpp"
#include "player.cpp"
#include "transaction.cpp"
//#include "player.cpp"

int main(){
    /* Initializing Data */
    srand(time(NULL));

    Transaction* t = new Transaction(STOCK_BUY, 0);
    cout << *t << endl;
    delete t;
    t=NULL;

    return 0;
}
