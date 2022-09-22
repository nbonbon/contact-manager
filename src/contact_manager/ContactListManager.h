#include <string>
#include <vector>
#include "Contact.h"

#ifndef CONTACTLISTMANAGER_H
#define CONTACTLISTMANAGER_H

class ContactListManager
{
    private:
        std::vector<Contact> list;
    public:
        ContactListManager();
        ContactListManager(std::vector<Contact> list);
        void SetList(std::vector<Contact> list);
        std::vector<Contact> GetList();
        void AddContact(Contact contact);
        bool DeleteContactByName(std::string name);
};

#endif