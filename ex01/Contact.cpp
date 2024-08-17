#include "Contact.hpp"

Contact::Contact(){}

void Contact::Init()
{
	(*this).first_name = getattribute("first name");
	(*this).last_name = getattribute("last name");
	(*this).nickname = getattribute("nickname");
	(*this).phone_number = getattribute("phone number");
	(*this).darkest_secret = getattribute("darkest_secret");
}

void Contact::display()
{
	cout << "First name: " << (*this).first_name << endl;
	cout << "Last name: " << last_name << endl;
	cout << "Nickname: " << nickname << endl;
	cout << "Phone number: " << phone_number << endl;
	cout << "Darkest secret: " << darkest_secret << endl;
}

string Contact::getattribute(string attribute){
	string input_line;
	cout << "Insert " << attribute << ":" << endl;
	getline(cin, input_line);
	while (input_line.length() == 0)
	{
		cout << "Please, insert information" << endl;
		getline(cin, input_line);
	}
	return input_line;
}
