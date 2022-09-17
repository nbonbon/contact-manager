#include "Contact.h"

Contact::Contact(std::string name, std::string phoneNumber) 
{
    this->name = name;
    this->phoneNumber = phoneNumber;
}

std::string Contact::GetName()
{
    return this->name;
}

void Contact::SetName(std::string name)
{
    this->name = name;
}

std::string Contact::GetPhoneNumber()
{
    return this->phoneNumber;
}

void Contact::SetPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}