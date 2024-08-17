#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class Contact 
{
  public:
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;
    Contact();
  void Init();
	void display();

  private:
	string getattribute(string attribute);
};

#endif
