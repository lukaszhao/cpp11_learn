// cpp11_learn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Dog.h"


int main()
{
    
	Dog dog("Smokey");

	dog.startAging();
	dog.startBarking();

	while (true) {}
	
	return 0;
}

