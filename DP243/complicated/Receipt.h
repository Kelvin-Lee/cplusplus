#ifndef RECEIPT_H
#define RECEIPT_H

#include "Purchase.h"
#include <vector>

/* A Receipt is a list of Purchases. It also has a total cost */

class Receipt
{
    
    public:

    	// Constructor
        Receipt();

	Receipt(const Receipt &r);

	// Getters

	// IO

	const void printReceipt();

	// Misc.

	unsigned short addPurchase(Purchase p);

	const unsigned short getTotalcost();

	Receipt& operator=(const Receipt& r);

	Receipt& operator+(const Receipt& r);


    private:
        std::vector <Purchase>* m_purchases;
	unsigned short m_totalcost;

	const bool hasPurchased (Purchase);

	/* unsigned short sumPurchases(); */

	Purchase* getPurchase(Purchase p);

};

#endif
