#include <iostream>
#include <string>
#include <vector>
#include "CatalogEntry.h"
#include "Receipt.cpp"
#include "Purchase.cpp"

#define TARGET (500)

/*
struct Catalog_Entry
{
    std::string name;
    unsigned short price;
};
*/

void solve(Receipt r, std::vector<Catalog_Entry> c);

unsigned short count = 0;

int main()
{


Catalog_Entry A = {"apple" , 59};
Catalog_Entry B = {"banana" , 32};
Catalog_Entry C = {"coconut" , 155};
Catalog_Entry D = {"grapefruit" , 128};
Catalog_Entry E = {"jackfruit" , 1100};
Catalog_Entry F = {"kiwi" , 41};
Catalog_Entry G = {"lemon" , 70};
Catalog_Entry H = {"mango" , 97};
Catalog_Entry I = {"orange" , 73};
Catalog_Entry J = {"papaya" , 254};
Catalog_Entry K = {"pear" , 37};
Catalog_Entry L = {"pineapple" , 399};
Catalog_Entry M = {"watermelon" , 500};

std::vector<Catalog_Entry> c;
c.push_back(A);
c.push_back(B);
c.push_back(C);
c.push_back(D);
c.push_back(E);
c.push_back(F);
c.push_back(G);
c.push_back(H);
c.push_back(I);
c.push_back(J);
c.push_back(K);
c.push_back(L);
c.push_back(M);

Receipt r;

solve(r, c);

std::cout << count  << " solutions." << std::endl;

return 0;

}


void solve(Receipt r, std::vector<Catalog_Entry> c )
{

    if (r.getTotalcost() == TARGET)
    {
        count++;
	std::cout << "-----------Success!----------" << std::endl;
        r.printReceipt();
	std::cout << "-----------------------------" << std::endl;
	std::cout << std::endl;
        return;
    }

    else if (r.getTotalcost() > TARGET)
    {
        return;
    }

    else
    {
        unsigned short whilecount = 0;
        while (!c.empty())
        {    
            Purchase p = Purchase(c.back().name, c.back().price);
	    Receipt rr = r;
            rr.addPurchase(p);
            solve(rr, c);
	    c.pop_back();
        }
    }

    return;

}

