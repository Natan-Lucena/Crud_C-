#include <string>
#include "Contact.h"
#include "PhoneBook.h"
#include <iostream>

using namespace std;

PhoneBook::PhoneBook(){
    first = NULL;
    last = NULL;
}
void PhoneBook::createContact(string name, string phone){
    Contact *newContact = new Contact(name, phone);
    if(first == NULL){
        first = newContact;
        last = newContact;
    }else{
        last->setNext(newContact);
        last = newContact;
    }
}

void PhoneBook::readContact(string name){
    Contact *current = first;
    while(current != NULL){
        if(current->getName() == name){
            cout << "Name: " << current->getName() << endl;
            cout << "Phone: " << current->getPhone() << endl;
            return;
        }
        current = current->getNext();
    }
    cout << "Contact not found" << endl;
}
void PhoneBook::updateContact(string name, string phone){
    Contact *current = first;
    while(current != NULL){
        if(current->getName() == name){
            current->setPhone(phone);
            return;
        }
        current = current->getNext();
    }
    cout << "Contact not found" << endl;
}
void PhoneBook::deleteContact(string name){
    Contact *current = first;
    Contact *previous = NULL;
    while(current != NULL){
        if(current->getName() == name){
            if(previous == NULL){
                first = current->getNext();
            }else{
                previous->setNext(current->getNext());
            }
            delete current;
            return;
        }
        previous = current;
        current = current->getNext();
    }
    cout << "Contact not found" << endl;
}