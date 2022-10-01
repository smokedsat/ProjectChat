#include "User.h"


void User::setName(const char* name) {	_name = name;};
void User::setLogin(const char* login) { _login = login; };
void User::setPassword(const char* password) { _password = password; }

std::string User::getName() { return _name; };
std::string User::getLogin() { return _login; }
std::string User::getPassword() { return _password; };

void User::getUser()
{
	std::cout << "Name:	" << _name << std::endl
		<< "Login :	" << _login << std::endl
		<< "Password:	" << _password << std::endl
		<< "Id:	" << _id << std::endl;
};