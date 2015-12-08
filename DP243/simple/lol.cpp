#include <iostream>
#define TARGET (500)

struct s_Purchase
{
    std::string fruit;
    unsigned short price;
    unsigned short quantity;
    unsigned short cost;

};

struct s_CatalogEntry
{
    std::string fruit;
    unsigned short price;
};

void printPurchase (s_Purchase p)
{
    std::cout << "You have bought " << p.quantity <<
        " units of " << p.fruit << " at a price of " <<
        p.price << ", costing you " << p.cost << std::endl; 
};

int main()
{

s_Purchase a = {"banana", 32, 0, 0};
s_CatalogEntry A = {"banana", 32};

s_Purchase b = {"kiwi", 41, 0, 0};
s_CatalogEntry B = {"kiwi", 41};

s_Purchase c = {"mango ", 97, 0, 0};
s_CatalogEntry C = {"mango ", 97};

s_Purchase d = {"papaya", 254, 0, 0};
s_CatalogEntry D = {"papaya", 254};

s_Purchase e = {"pineapple", 399, 0, 0};
s_CatalogEntry E = {"pineapple", 399};

s_Purchase purchases[5] = {a, b, c, d, e};

for (unsigned int i = 0; i < 5; i++)
{
    printPurchase(purchases[i]);
}




return 0;

}
