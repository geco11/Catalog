#include <iostream>
#include"Controller.h"
int main()
{
	Controller controller;
	Collection coll;
	coll.setName("USA commemorative silver dollar");
	auto x=controller.search(coll);

	std::cout << "hello";
}