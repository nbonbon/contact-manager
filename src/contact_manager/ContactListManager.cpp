#include <iterator>
#include "ContactListManager.h"

ContactListManager::ContactListManager() { }

ContactListManager::ContactListManager(std::vector<Contact> list)
{
    this->list = list;
}

std::vector<Contact> ContactListManager::GetList()
{
    return this->list;
}

void ContactListManager::SetList(std::vector<Contact> list)
{
    this->list = list;
}

void ContactListManager::AddContact(Contact contact)
{
    this->list.push_back(contact);
}

bool ContactListManager::DeleteContactByName(std::string name)
{
    for (auto iter = this->list.begin(); iter < this->list.end(); iter++)
    {
        if ((*iter).GetName() == name)
        {
            if(this->list.erase(iter) == this->list.end())
            {
                return false;
            }
            break;
        }
    }
    
    return true;
}