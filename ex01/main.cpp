#include "PhoneBook.hpp"

int main()
{
	PhoneBook mybook;

	cout << "Please, select an option: ADD, SEARCH, EXIT." << endl;
	string input_line;
	getline(cin, input_line);
	while (input_line.compare("EXIT") != 0)
	{
		if (input_line.compare("ADD") == 0)
			mybook.AddContact();
		else if (input_line.compare("SEARCH") == 0)
			mybook.Search();
		else
			cout << "Incorrect action. Please, choose between ADD, SEARCH and EXIT." << endl;
		cout << "Please, select an option: ADD, SEARCH, EXIT." << endl;
		getline(cin, input_line);
	}
	return 0;
}

/*
Ideas:
- maximum of tries adding contact
- revisar máxima longitud de input_string?
*/