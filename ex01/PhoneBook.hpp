#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
  public:
    int size;
    Contact contacts[8];
    PhoneBook();
    int AddContact();
    void Search();
    void SelectContact();

};

#endif