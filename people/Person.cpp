#include "Person.h"

Person::Person(unsigned short age, std::string name)
{
    m_age = age;
    m_name = name;
}

const std::string Person::getName()
{
    return m_name;
}

const unsigned short Person::getAge()
{
    return m_age;
}

const std::string Person::doJob()
{
    return "I'm unemployed! Woooooo zzzzz...";
}

const std::string Person::reportID()
{
   return "My SSN IS ***-**-****! Lolz"; 
}
