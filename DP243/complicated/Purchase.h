#ifndef PURCHASE_H
#define PURCHASE_H

#include <string>

/* A Purchase is described by its product/fruit, and the amount of
 * that product bought. I've decided that a single Purchase shoud only
 * have one type of product in it; thus, the product is const. This is
 * useful, since we can now save the unit price of the product, and
 * allow Purchase to do its own math when adding more of that product.
 */

class Purchase
{
    public:
    
        // Constructor
        Purchase(std::string product, unsigned short product_price,
	    unsigned short quantity = 1);

	// Getters
        const std::string getProduct();

	const unsigned short getQuantity();

	const unsigned short getProductprice();

	const unsigned short getTotalcost();

	// IO

	const std::string printPurchase();

	// Misc.
	void buyMore(unsigned short count = 1);

	Purchase& operator=(const Purchase& p);

    private:
        std::string m_product;
	unsigned short m_productprice;
	unsigned short m_quantity;
	unsigned short m_totalcost;

};

#endif
