#pragma once

#include <string>
#include <iostream>
#include <thread>
#include <chrono>

class Dog
{

private:

	std::string     d_name;

	int             d_age;

	bool            d_isAlive;

	void keepBarking();

	void keepChangingAge();

	Dog() = delete;

public:

	Dog(const std::string& name) :
		d_name(name),
		d_age(0),
		d_isAlive(true)
	{}

	Dog(std::string&& name) :
		d_name(name),
		d_age(0),
		d_isAlive(true)
	{}

	~Dog() {}




	void startBarking();

	
	void startAging();

};

