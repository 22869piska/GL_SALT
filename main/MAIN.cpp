

#include"PUBL.hpp"

main_* m;


int main()
{
	m = new main_;

	m->START();





	//---

	m->~main_();
	m = nullptr;
	//delete m;
	return 0;
}