#include "WrongAnimal.hpp"
int main()
{
//  Animal* j = new Dog();
//  Animal* i = new Cat();
 
//  Animal *animal[4];
//  for (size_t i = 0; i < 4; i++)
//  {
// 	if (i % 2 == 0)
// 		animal[i] = new Dog();
// 	else
// 		animal[i] = new Cat();
//  }
 
// delete j;//should not create a leak
// delete i;
// for (size_t i = 0; i < 4; i++)
// {
// 	delete(animal[i]);
// }
// system("leaks Polymorphism");
Animal *a = new Dog();

delete a;

return (0);

}