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

Object::Object() {}
Object::~Object() {}

Toy::Toy(std::string title) : Object(), title_(title) {}
Toy::~Toy() {}

void	Toy::isTaken() {}

Teddy::Teddy(std::string title) : Toy(title) { std::cout<<"Boom"<<std::endl }
Teddy::~Teddy() {}

void	Teddy::isTaken() {
	std::cout << "gra hu" << std::endl ;
}

LittlePony::LittlePony(std::string title) : Toy(title) {}
LittlePony::~LittlePony() {}

void	LittlePony::isTaken() {
	std::cout << "yo man" << std::endl ;
}

std::string		Toy::getName() {
	return this->name_;
}

Object		**MyUnitTests() {
	Object**	toys;

	toys = new Object*[2];
	toys[0] = new Teddy("pof");
	toys[1] = new LittlePony("paf");
	return (toys);
}

int		main() {
	Object**	toys = MyUnitTests();

	toys[0].getName();

	return 0;
}
