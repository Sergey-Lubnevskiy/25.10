#pragma once
#include<iostream>
#include"MyInterface.h"
using namespace std;

class Animal : public IAnimal
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() = default;
	Animal(string n, double k, string cont)
	{
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
	//virtual void Eat() = 0;
	//virtual void Move() = 0;	
};

class gull : public Animal, public IFly
{
public:
	gull() = default;
	gull(string n, double k, string cont) :Animal(n, k, cont) {}

	

	virtual void Eat()
	{
		cout << "gull eats: fish, insects ,feed = 10 tea spoon per day"<<endl;
	}
	virtual void Move()
	{
		cout << "gull moves by 90km per hour"<<endl;
	}

	virtual void Fly()
	{
		cout << "gull fly by 110km per hour"<< endl;
	}

};

class crocodile : public Animal
{
public:
	crocodile() = default;
	crocodile(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "crocodile eats: meat, fish = 1000g per 1day"<<endl;
	}
	virtual void Move()
	{
		cout << "crocodile moves by 24km per hour"<<endl;
	}
};

class elephant : public Animal
{
public:
	elephant() = default;
	elephant(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "elephant eats: leaves, hay = 30kg per day"<<endl;
	}
	virtual void Move()
	{
		cout << "elephant moves by 50km per hour"<< endl;
	}
};

class octopus : public Animal, public ISwim
{
public:
	octopus() = default;
	octopus(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "octopus eats: fish 659g per day"<<endl;
	}
	virtual void Move()
	{
		cout << "octopus moves by 440m per hour"<<endl;
	}
	virtual void Swim()
	{
		cout << "octopus swim by 40km per hour"<<endl;
	}
};

class Dog : public Animal, public IAnimal
{
public:
	Dog() = default;
	Dog(string n, double k, string cont) :Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Dog eats: meat, fish, feed = 500 per day"<<endl;
	}
	virtual void Move()
	{
		cout << "Dog moves by 38km per hour"<<endl;
	}
};