#include <iostream>
#include <string>
#include "model/PhoneBook.h"
#include "model/Contact.h"

using namespace std;

int main(){
    int option;
    PhoneBook *phoneBook = new PhoneBook();

    do{
        cout << "1. Create contact" << endl;
        cout << "2. Read contact" << endl;
        cout << "3. Update contact" << endl;
        cout << "4. Delete contact" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> option;
        cout << endl;
        if(option == 1){
            string name;
            string phone;
            cout << "Name: ";
            cin >> name;
            cout << "Phone: ";
            cin >> phone;
            phoneBook->createContact(name, phone);
        }else if(option == 2){
            string name;
            cout << "Name: ";
            cin >> name;
            phoneBook->readContact(name);
        }else if(option == 3){
            string name;
            string phone;
            cout << "Name: ";
            cin >> name;
            cout << "Phone: ";
            cin >> phone;
            phoneBook->updateContact(name, phone);
        }else if(option == 4){
            string name;
            cout << "Name: ";
            cin >> name;
            phoneBook->deleteContact(name);
        }

    }while(option != 5);
}