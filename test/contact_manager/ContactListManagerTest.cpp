#include <gtest/gtest.h>
#include <vector>
#include "ContactListManager.h"

TEST(ContactListManagerTest, AddContact_shouldAddAContactToTheList) 
{
  ContactListManager listManager;

  Contact contact(std::string("john doe"), std::string("888-888-8888"));
  listManager.AddContact(contact);
  
  std::vector<Contact> contactList = listManager.GetList();
  EXPECT_EQ(contactList.size(), 1);
  EXPECT_EQ(contactList.at(0).GetName(), "john doe");
  EXPECT_EQ(contactList.at(0).GetPhoneNumber(), "888-888-8888");
}

TEST(ContactListManagerTest, DeleteContactByName_shouldDeleteAContactFromTheList) 
{
  ContactListManager listManager(std::vector<Contact>( {
    Contact(std::string("john doe"), std::string("888-888-8888")),
    Contact(std::string("jane doe"), std::string("888-888-8881"))
  }));

  listManager.DeleteContactByName("john doe");
  
  std::vector<Contact> contactList = listManager.GetList();
  EXPECT_EQ(contactList.size(), 1);
  EXPECT_EQ(contactList.at(0).GetName(), "jane doe");
  EXPECT_EQ(contactList.at(0).GetPhoneNumber(), "888-888-8881");
}