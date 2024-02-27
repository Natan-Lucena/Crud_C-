#include <string>
#include "Contact.h"

using namespace std;

Contact::Contact(string name, string phone){
    this->name = name;
    this->phone = phone;
    this->next = NULL;
}
string Contact::getName(){
    return name;
}
string Contact::getPhone(){
    return phone;
}
void Contact::setName(string name){
    this->name = name;
}
void Contact::setPhone(string phone){
    this->phone = phone;
}
void Contact::setNext(Contact *next){
    this->next = next;
}
Contact *Contact::getNext(){
    return next;
}