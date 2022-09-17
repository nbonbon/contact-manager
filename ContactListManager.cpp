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