#include <string>
#ifndef CONTACT_H
#define CONTACT_H

using namespace std;

class Contact{
    private:
        string name;
        string phone;
        Contact *next;
        
    public:
        Contact(string name, string phone);
        string getName();
        string getPhone();
        void setName(string name);
        void setPhone(string phone);
        void setNext(Contact *next);
        Contact *getNext();
};
#endif