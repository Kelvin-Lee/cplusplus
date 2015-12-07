#include "Firefighter.h"


Firefighter::Firefighter(unsigned short age /* = 30 */, std::string name /* = "ANON" */)
    : Person(age, name) , m_badgeNumber (s_badge + 2)
    {

    }

const std::string Firefighter::doJob()
{
    return "I am a firefighter! Wee woo lots of water!";
}

const std::string Firefighter::reportID()
{
    /* Unfortunately, MINGW has a bug related to 'to_String' */
    std::stringstream ss;
    ss << m_badgeNumber;
    return "My badge number is #" + ss.str() + ".";
}
