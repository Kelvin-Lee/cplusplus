#include <iostream>
#include "Person.cpp"
#include "Police.cpp"
#include "Firefighter.cpp"

int main()
{

    Police Paul_Poop      ;
    Person Johnny_Mai     ;
    Person Kelvin_Lee     ;
    Person Alan_Pham      ;
    Firefighter Frank_Furt;

    Person* pPP = &Paul_Poop  ;
    Person* pJM = &Johnny_Mai ;
    Person* pAP = &Alan_Pham  ;
    Person* pKL = &Kelvin_Lee ;
    Person* pFF = &Frank_Furt ;

    Person* yellowPages[5];

    yellowPages[0] = pPP;
    yellowPages[1] = pJM;
    yellowPages[2] = pAP;
    yellowPages[3] = pKL;
    yellowPages[4] = pFF;

    // Not allowed in C++98 mode ]: /* for (Person* p : yellowPages) */
    for (unsigned short int i = 0; i < 5; i++)
    {
        std::cout << yellowPages[i]->doJob()    << std::endl;
        std::cout << yellowPages[i]->reportID() << std::endl;
	std::cout                               << std::endl;
    }

    std::cout << "Hello World!";

    return 0;
    
}
