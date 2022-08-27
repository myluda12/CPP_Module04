#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include "polymorphism.hpp"

# include <iostream>
# include <string>

//WrongAnimal 

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();
        void makeSound() const;
		WrongAnimal &		operator=( WrongAnimal const & rhs );
        std::string getType();

	protected:
        std::string type;

};

//WrongCat

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();
        virtual void  makeSound() const;
		WrongCat &		operator=( WrongCat const & rhs );
		std::string getType();


};

//WrongDog
class WrongDog : public WrongAnimal
{

	public:

		WrongDog();
		WrongDog( WrongDog const & src );
		~WrongDog();
        virtual void makeSound() const;
		WrongDog &		operator=( WrongDog const & rhs );
		std::string getType();

};
#endif