#include <string>

#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
    private:
        std::string name;
        std::string phoneNumber;
    public:
        Contact(std::string name, std::string phoneNumber);
        void SetName(std::string name);
        std::string GetName();
        void SetPhoneNumber(std::string phoneNumber);
        std::string GetPhoneNumber();
};

#endif