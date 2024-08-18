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

  private:
    int getIndex();
    void showContacts();
};

#endif
