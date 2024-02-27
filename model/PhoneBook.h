#include <string>
#include "Contact.h"
#ifndef PHONEBOOK_H
#define PHONEBOOK_H
using namespace std;

class PhoneBook{
    private:
        Contact *first;
        Contact *last;
    public:
        PhoneBook();
        void createContact(string name, string phone);
        void readContact(string name);
        void updateContact(string name, string phone);
        void deleteContact(string name);
};
#endif