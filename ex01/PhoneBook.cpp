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
    cout << "search";
}

void PhoneBook::SelectContact()
{
    cout << "select";
}
