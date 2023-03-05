#include <stdio.h>
#include <iostream>

using namespace std;


class Animal
{
public:
	void animal()
	{

		cout << "I am animal.";

	}

};


class Dog : public Animal
{
public:
	void bark()
	{

		cout << "I can bark.";

	}

};





int yyy()
{
	Animal animal1;
	Dog dog1;

	dog1.animal();
	cout << endl;
	dog1.bark();

	return 0;
}