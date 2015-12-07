#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person{

public:
   
   Person(unsigned short age = 0, std::string name = "ANON");

   const unsigned short getAge();

   const std::string getName();

   virtual const std::string doJob();

   virtual const std::string reportID();


private:
   unsigned short m_age;
   std::string m_name;

};

#endif
