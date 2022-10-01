#include "User.h"

int main()
{
	User A("Semen", "smokedsat", "semik16156", 1);
	User B("Dmitriy", "nnnnahui", "DT0709", 2);
	User* C = new User("Ilia", "ilidiance", "Ilia1998", 3);
	A.getUser();
	B.getUser();
	C->getUser();
	A.setLogin("semen");
	A.setName("Semik");
	A.setPassword("SemEN123");
	// УДалить из класса
	A.getUser();
	delete C;
}