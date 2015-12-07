#ifndef FIREFIGHTER_H
#define FIREFIGHTER_H

#include <string>
#include <sstream>

class Firefighter : public Person
{

    private:
        const unsigned short m_badgeNumber;
	static unsigned short s_badge;

    public:
        Firefighter(unsigned short age = 30, std::string name = "ANON");
	
	virtual const std::string doJob();

	virtual const std::string reportID();

};

unsigned short Firefighter::s_badge = 200;

#endif
