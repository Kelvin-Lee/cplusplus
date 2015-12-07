#ifndef POLICE_H
#define POLICE_H

#include <string>
#include <sstream>

class Police : public Person
{

    private:
        unsigned short m_badgeNumber;
	static unsigned short s_badge; //1


    public:
        Police(unsigned short age = 30, std::string name = "ANON");
	    //: Person(age, name), m_badgeNumber(s_badge++){};
   
   	virtual const std::string doJob();

	virtual const std::string reportID();
	
};

unsigned short Police::s_badge = 101;


#endif

//1 : Static member variable; all police officers will have a rank > 101
//2 : Intialization list
