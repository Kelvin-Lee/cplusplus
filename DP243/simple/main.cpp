#include <iostream>
#include <math.h>
#define TARGET (500)

// REDDIT.COM/DAILYPROGRAMMER
// #243 Intermediate: "Jenny's Fruit Basket"

/* This only solve the sample input, but is not generalised at all.
 * Luckily, we only have to check 900 different combinations of
 * coefficients, which is apparently really fast/small :D 
 */

struct s_CatalogEntry
{
    std::string fruit;
    unsigned short price;
};

int main()
{

s_CatalogEntry A = {"banana", 32};
s_CatalogEntry B = {"kiwi", 41};
s_CatalogEntry C = {"mango ", 97};
s_CatalogEntry D = {"papaya", 254};
s_CatalogEntry E = {"pineapple", 399};

unsigned short maxes[5];

maxes[0] = floor(TARGET/A.price);
maxes[1] = floor(TARGET/B.price);
maxes[2] = floor(TARGET/C.price);
maxes[3] = floor(TARGET/D.price);
maxes[4] = floor(TARGET/E.price);

for (unsigned int a = 0; a < maxes[0] + 1; a++)
{
    for (unsigned int b = 0; b < maxes[1] +1 ; b++)
    {
        for (unsigned int c = 0; c < maxes[2] + 1; c++)
	{
            for (unsigned int d = 0; d < maxes[3] +1; d++)
	    {
                for (unsigned int e = 0; e < maxes[4] +1; e++)
		{
		    if (a * A.price +
		        b * B.price +
		        c * C.price +
		        d * D.price +
		        e * E.price 
			== TARGET)
			{
			    std::cout << a << " " << A.fruit << ", " <<
			        b << " " << B.fruit << ", " <<
				c << " " << C.fruit << ", " <<
				d << " " << D.fruit << ", " <<
				e << " " << E.fruit << ". " << std::endl;
			}

		}
            }
	}
    }
}
	


return 0;

}
