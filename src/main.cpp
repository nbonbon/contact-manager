#include <iostream>
#include <string>
#include <vector>
#include "ContactListManager.h"
#include "Contact.h"

#define PROJECT_NAME "contact-manager"

ContactListManager contactListManager;

void usage()
{
    std::cerr << "Usage: contact-manager <option(s)> \n"
              << "Options:\n"
              << "\t-?\t\tShow this usage message\n"
              << "\t-a,--add\t\tAdd a contact\n"
              << "\t-d,--delete\t\tDelete a contact\n"
              << "\t-h,--help\t\tShow this usage message\n"
              << "\t-i,--interactive\t\tEnter interactive mode\n"
              << "\t-l,--list\t\tList all contacts\n"
              << std::endl;
}

void listContacts()
{
    std::vector<Contact> list = contactListManager.GetList();

    if (list.size() == 0)
    {
        std::cerr << "No contacts have been added." << std::endl;
        return;
    }

    std::cerr 
        << "##########################################\n"
        << "Contacts: \n" 
        << "------------------------------------------\n"
        << std::endl;
    for(size_t i = 0; i < list.size(); i++)
    {
        Contact contact = list.at(i);
         std::cerr 
              << "\t" << i << "\t-\t" << contact.GetName() 
              << ", " 
              << contact.GetPhoneNumber()
              << std::endl;
    }

        std::cerr 
        << "##########################################\n"
        << std::endl;
}

void addContact()
{
    std::string name;
    std::string phoneNumber;
    std::cout << "Contact Name: ";
    std::cin >> name;
    std::cout << "Phone Number: ";
    std::cin >> phoneNumber;
    Contact contact(name, phoneNumber);
    contactListManager.AddContact(contact);
}

void deleteContact()
{
    std::string name;
    std::cout << "Contact Name to delete: ";
    std::cin >> name;
    if (contactListManager.DeleteContactByName("name"))
    {
       std::cout << name << " deleted!"; 
    }
    else
    {
        std::cout << name << "does not exist.";
    }
}

void interactiveMode()
{
    std::string response;
    do
    {
        std::cout << "\n##########################################\n"
            << "What would you like to do:\n"
            << "\ta\t-\tAdd a contact\n"
            << "\td\t-\tDelete a contact\n"
            << "\tl\t-\tList all contacts\n"
            << "\tq\t-\tQuit\n"
            << "##########################################"
            << std::endl;
        std::cin >> response;

        if (response == "q")
        {
            continue;
        }
        else if (response == "a")
        {
            addContact();
        }
        else if (response == "d")
        {
            deleteContact();
        }
        else if (response == "l")
        {
            listContacts();
        }
    } while (response != "q");

    std::cerr 
    << "Goodbye!\n"
    << std::endl;
    
}

int main(int argc, char **argv) 
{
    if(argc == 1)
    {
        usage();
    }

    for(int i = 1; i < argc; i++)
    {
        if(std::string(argv[i]) == "-h" || std::string(argv[i]) == "--help" || std::string(argv[i]) == "-?")
        {
            usage();
        }
        else if(std::string(argv[i]) == "-l" || std::string(argv[i]) == "--list")
        {
            listContacts();
        }
        else if(std::string(argv[i]) == "-a" || std::string(argv[i]) == "--add")
        {
            addContact();
        }
        else if(std::string(argv[i]) == "-d" || std::string(argv[i]) == "--delete")
        {
            deleteContact();
        }
        else if(std::string(argv[i]) == "-i" || std::string(argv[i]) == "--interactive")
        {
            interactiveMode();
        }
        else
        {
            std::cerr << "Unrecognized option" << std::endl;
            usage();
        }
    }
    return 0;
}