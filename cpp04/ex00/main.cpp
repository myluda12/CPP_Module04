#include "polymorphism.hpp"
#include "WrongAnimal.hpp"
int main()
{
     Animal* meta = new Animal();
     Animal* j = new Dog();
     Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
   std::cout << "_____________________Wrong sh*t______________________________" << std::endl;

    WrongAnimal* peta = new WrongAnimal();
     WrongAnimal* k = new WrongDog();
     WrongAnimal* p = new WrongCat();
    std::cout << k->getType() << " " << std::endl;
    std::cout << p->getType() << " " << std::endl;
    k->makeSound(); //will output the cat sound!
    p->makeSound();
    peta->makeSound();
return 0;
}
