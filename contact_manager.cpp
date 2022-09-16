#include <iostream>
#include <string>

#define PROJECT_NAME "contact-manager"

static void usage()
{
    std::cerr << "Usage: contact-manager <option(s)> \n"
              << "Options:\n"
              << "\t-h,--help\t\tShow this usage message\n"
              << std::endl;
}

int main(int argc, char **argv) 
{
    if(argc == 1)
    {
        std::cerr << "No args" << std::endl;
    }

    for(int i = 1; i < argc; i++)
    {
        if(std::string(argv[i]) == "-h" || std::string(argv[i]) == "--help" || std::string(argv[i]) == "-?")
        {
            usage();
        }
    }
    return 0;
}