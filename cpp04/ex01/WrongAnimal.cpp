#include "WrongAnimal.hpp"
#include "polymorphism.hpp"

// ---------------------------------------------------------------------------------------------------------//
												// WrongAnimal FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

WrongAnimal::WrongAnimal() 
{
	type = "WrongAnimal";
    std::cout << "Default WrongAnimal Constractor called" << std::endl;
}

 WrongAnimal::WrongAnimal( const WrongAnimal & src )
 {
	 type = src.type;
     std::cout << "Copy WrongAnimal Constractor called" << std::endl;
 }

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destroctor called" << std::endl;
}

std::string WrongAnimal::getType()
{
    return type;
}

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}


// ---------------------------------------------------------------------------------------------------------//
												// WrongCat FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

WrongCat::WrongCat() 
{
	type = "WrongCat";
    std::cout << "Default WrongCat Constractor called" << std::endl;
}

 WrongCat::WrongCat( const WrongCat & src )
 {
	 type = src.type;
     std::cout << "Copy WrongCat Constractor called" << std::endl;
 }

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destroctor called" << std::endl;
}

std::string WrongCat::getType()
{
    return type;
}

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}

// ---------------------------------------------------------------------------------------------------------//
												// WrongDog FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

WrongDog::WrongDog() 
{
	type = "WrongDog";
    std::cout << "Default WrongDog Constractor called" << std::endl;
}

 WrongDog::WrongDog( const WrongDog & src )
 {
	 type = src.type;
     std::cout << "Copy WrongDog Constractor called" << std::endl;
 }

void	WrongDog::makeSound() const
{
	std::cout << "WrongDog sound" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog Destroctor called" << std::endl;
}

std::string WrongDog::getType()
{
    return type;
}

WrongDog &				WrongDog::operator=( WrongDog const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}
