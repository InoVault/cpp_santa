//
// toys.cpp for toys in /home/pliot-_a/rendu/cpp_santa
// 
// Made by Adrien PLIOT
// Login   <pliot-_a@epitech.net>
// 
// Started on  Sat Jan 17 10:33:41 2015 Adrien PLIOT
// Last update Sat Jan 17 10:33:42 2015 Adrien PLIOT
//

#include <iostream>
#include <string>

#include "toys.hh"

Toy::Toy(std::string title) : title_(title) {}
Toy::~Toy() {}

void	Toy::isTaken() {}

Teddy::Teddy(std::string title) : Toy(title) {}
Teddy::~Teddy() {}

void	Teddy::isTaken() {
	std::cout << "gra hu" << std::endl ;
}

LittlePony::LittlePony(std::string title) : Toy(title) {}
LittlePony::~LittlePony() {}

void	LittlePony::isTaken() {
	std::cout << "yo man" << std::endl ;
}

Object		**MyUnitTests() {
	Object*	toys[] = {
		new 
	}
	LittlePony		paf("rar");
}

int		main() {
	Object*	toys[] = MyUnitTests();


	LittlePony		paf("rar");

	paf.isTaken();

	return 0;
}
