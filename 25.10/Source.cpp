#include"Animal.h"
using namespace std;

int main()
{
	Animal* ptr = new gull("white", 5, "sea");
	ptr->Eat();
	ptr->Move();
	gull* p = static_cast<gull*>(ptr);
	p->Fly();
	p->Print();
	delete ptr;
	

	ptr = new crocodile("Guappo", 25, "swamp");
	ptr->Eat();
	ptr->Move();
	crocodile* p1 = static_cast<crocodile*>(ptr);
	p1->Print();
	delete ptr;
	

	ptr = new elephant("Jambo", 950, "circus");
	ptr->Eat();
	ptr->Move();
	elephant* p2 = static_cast<elephant*>(ptr);
	p2->Print();
	delete ptr;
	

	ptr = new octopus("Skippy", 7, "ocean");
	ptr->Eat();
	ptr->Move();
	octopus* p3 = static_cast<octopus*>(ptr);
	p3->Swim();
	p3->Print();
	delete ptr;
	

	ptr = new Dog("Pes", 15, "Home");
	ptr->Eat();
	ptr->Move();
	Dog* p4 = static_cast<Dog*>(ptr);
	p4->Move();
	p4->Print();
	delete ptr;
	
}