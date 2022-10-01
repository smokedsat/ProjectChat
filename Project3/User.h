#pragma once
#include <iostream>

enum id
{
	zero = 0,
	first = 1,
	second,
	third,
	fourth,
	fifth,
	sixth,
	seventh,
	eigth,
	nineth,
	tenth
};

class User
{
private:
	std::string _name;
	std::string _login;
	std::string _password;
	const int _id;
public:
	User(std::string name, std::string login, std::string password, int id) : _name(name), _login(login), _password(password) , _id(id)
	{
	};
	void setName(const char* name);
	void setLogin(const char* login);
	void setPassword(const char* password);
	std::string getName();
	std::string getLogin();
	std::string getPassword();

	//Is only for test:
	void getUser();
};

