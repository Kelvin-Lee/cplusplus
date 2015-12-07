#include "Purchase.h"

/* Unfortunately, to_string doesnt work with MinGW. This is included
 * as a workaround 
 */

#include <sstream> 

// Constructor
Purchase::Purchase(std::string product, unsigned short product_price,
    unsigned short quantity) 
    : m_product (product), m_productprice (product_price),
    m_quantity (quantity)
{
    m_totalcost = product_price * quantity;
}

// Getters
const std::string Purchase::getProduct()
{
    return m_product;
}

const unsigned short Purchase::getQuantity()
{
    return m_quantity;
}

const unsigned short Purchase::getProductprice()
{
    return m_productprice;
}

const unsigned short Purchase::getTotalcost()
{
    return m_totalcost;
}

// IO

const std::string Purchase::printPurchase()
{
    /* Workaround, because std::to_string() is bugged for MinGW */
    std::ostringstream ss;
    ss << m_quantity << " " << m_product << "(" << m_totalcost << ")";
    return ss.str();
}

// Misc.
void Purchase::buyMore(unsigned short count)
{
    m_quantity  += count;
    m_totalcost += count * m_productprice;
}

Purchase& Purchase::operator=(const Purchase& p)
{
    this->m_product      = p.m_product;
    this->m_quantity     = p.m_quantity;
    this->m_productprice = p.m_productprice;
    this->m_totalcost    = p.m_totalcost;

    return *this;
}

