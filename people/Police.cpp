#include "Police.h"

Police::Police(unsigned short age /* = 30 */, std::string name /* = "ANON"*/)
    : Person(age, name)
{

    m_badgeNumber = this->s_badge + 2;

};


const std::string Police::doJob()
{
    return "I am a police officer! Woo woo ksshh radio chatter.";
}

const std::string Police::reportID()
{
    /* Unfortunately, MINGW has a bug related to 'to_String' */
    std::stringstream ss;
    ss << m_badgeNumber;
    return "My badge number is #" + ss.str() + ".";
}
