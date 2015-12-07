#include "Receipt.h"

// Constructor
Receipt::Receipt()
{
    m_purchases = new (std::vector <Purchase>);
    m_totalcost = 0;
}

Receipt::Receipt(const Receipt &r)
{

    m_purchases = new (std::vector <Purchase>);
    m_totalcost = 0;

    if (m_purchases != NULL)
    {
	for (unsigned int i = 0; i < r.m_purchases->size(); i++)
	{
	    addPurchase(r.m_purchases->at(i));
	}

    }

}

// Getters

const unsigned short Receipt::getTotalcost()
{
    return m_totalcost;
}

// IO
const void Receipt::printReceipt()
{
    for (unsigned int i = 0; i < m_purchases->size(); i++)
    {
        std::cout << m_purchases->at(i).printPurchase() << std::endl;
    }
}


// Misc.

unsigned short Receipt::addPurchase(Purchase p)
{

    if (hasPurchased(p))
    {
   	getPurchase(p)->buyMore(p.getQuantity());     
        m_totalcost += p.getTotalcost();
    }

    else
    {
        m_purchases->push_back(p);
        m_totalcost += p.getTotalcost();
    }
    return m_totalcost;

}



Receipt& Receipt::operator=(const Receipt& r)
{
    if (this == &r)
    {
    	std::cout << "LOL" << std::endl;
        return *this;
    }

    if (r.m_purchases != NULL)
    {
        delete m_purchases;
        m_purchases = new (std::vector <Purchase>);
	
	for (unsigned int i = 0; i < r.m_purchases->size(); i++)
	{
	    addPurchase(r.m_purchases->at(i));
	}

    }


    return *this;

}

Receipt& Receipt::operator+(const Receipt& r)
{
    for (unsigned int i = 0; i < r.m_purchases->size(); i++)
	{
	    addPurchase(r.m_purchases->at(i));
        }

    return *this;
}

/* --------------------- Private --------------------- */

Purchase* Receipt::getPurchase(Purchase p)
{
    for (unsigned short i = 0; i < m_purchases->size(); i++)
    {
        if ((*m_purchases).at(i).getProduct() == p.getProduct())
	{
	    return &((*m_purchases).at(i));
	}
    }

}

const bool Receipt::hasPurchased(Purchase p)
{
    for (unsigned short i = 0; i < m_purchases->size(); i++)
    {
        if ((*m_purchases).at(i).getProduct() == p.getProduct())
	{
	    return true;
	}
    }

    return false;
}

