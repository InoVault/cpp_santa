//
// toys.hh for toys in /home/pliot-_a/rendu/cpp_santa
// 
// Made by Adrien PLIOT
// Login   <pliot-_a@epitech.net>
// 
// Started on  Sat Jan 17 10:33:47 2015 Adrien PLIOT
// Last update Sat Jan 17 10:33:48 2015 Adrien PLIOT
//

#ifndef _TOYS_H_
# define _TOYS_H_

#include <iostream>
#include <string>

class	Object
{
public:
	Object();
	~Object();
};

class	Toy : public Object
{
public:
	Toy(std::string);
	virtual ~Toy();
	virtual void	isTaken();
protected:
	std::string		title_;
};

class	Teddy : public Toy
{
public:
	Teddy(std::string);
	virtual ~Teddy();
	virtual void	isTaken();
};

class	LittlePony : public Toy
{
public:
	LittlePony(std::string);
	virtual ~LittlePony();
	virtual void	isTaken();
};

Object		**MyUnitTests();

#endif
