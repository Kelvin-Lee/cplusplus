#include <iostream>
#include <string>
#include "CatalogEntry.h"
#include "Receipt.cpp"
#include "Purchase.cpp"


int main()
{

    std::cout << "Hello World!" << std::endl;

    Purchase a ("apple", 99);
    Purchase b ("banana" , 5);
    Purchase c ("cranberry", 1);
    Purchase d ("dragonfruit", 100);

    std::cout << a.printPurchase() << std::endl;
    std::cout << b.printPurchase() << std::endl;
    std::cout << c.printPurchase() << std::endl;
    std::cout << std::endl;

    a.buyMore();
    b.buyMore(3);
    c.buyMore(5);

    std::cout << a.printPurchase() << std::endl;
    std::cout << b.printPurchase() << std::endl;
    std::cout << c.printPurchase() << std::endl;
    std::cout << std::endl;

    Receipt r;

    r.addPurchase(a);
    r.addPurchase(b);
   // r.addPurchase(c);
   // r.addPurchase(d);

   
    std::cout << "Check r" << std::endl;
    r.printReceipt();
    std::cout << std::endl;

    Receipt s;

   // s.addPurchase(a);
    s.addPurchase(b);
    s.addPurchase(c);
    s.addPurchase(d);

    std::cout << "Check s" << std::endl;
    s.printReceipt();
    std::cout << std::endl;


    s = s + r;

    std::cout << "Check s (= s + r)" << std::endl;
    s.printReceipt();
    std::cout << std::endl;

    Catalog_Entry A = {"banana", 32};
    Catalog_Entry B = {"kiwi", 41};
    Catalog_Entry C = {"mango", 97};
    Catalog_Entry D = {"papaya", 254};
    Catalog_Entry E = {"pineapple", 399};

    Catalog_Entry Catalog[5];

    Catalog[0] = A;
    Catalog[1] = B;
    Catalog[2] = C;
    Catalog[3] = D;
    Catalog[4] = E;
    for (unsigned short i = 0; i < 5; i++)
    {
        std::cout << Catalog[i].name << " has a price of " << 
	    Catalog[i].price << std::endl;
    }

    return 0;

}
