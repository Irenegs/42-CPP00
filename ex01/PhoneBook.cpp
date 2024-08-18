#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
    size = 0;
}

int PhoneBook::AddContact()
{
    if ((*this).size < 8)
    {
        (*this).contacts[size].Init();
        (*this).size++;
    }
    else
    {
        for (int i = 0; i < 7; i++)
            (*this).contacts[i] = (*this).contacts[i + 1];
        (*this).contacts[7].Init();
    }
    return 1;
}

void PhoneBook::Search()
{
    if ((*this).size == 0)
    {
        cout << "Phonebook is empty." << endl;
        return ;
    }
    (*this).showContacts();
    for (int i = 0; i < (*this).size; i++)
        (*this).contacts[i].display();
    int index = (*this).getIndex();
    cout << "The contact information is" << endl;
    (*this).contacts[index - 1].display();
}

int PhoneBook::getIndex()
{
    cout << "Please, select a contact to display:" << endl;
    char *str_index;
    cin >> str_index;
    cin.sync();
    cout << "strlen_strindex: "<< strlen(str_index) << endl;
    int index = atoi(str_index);
    while (index <= 0 || index > size)
    {
        cout << "Please, choose a valid index: 1 to " << (*this).size << endl;
        fgets(str_index, 4, stdin);
        index = atoi(str_index);
        cout << "Index:" << index << endl;
    }
    return (index);
}

void PhoneBook::showContacts()
{
    cout << "The contacts in the phonebook are:" << endl;
}