#include "polymorphism.hpp"



// ---------------------------------------------------------------------------------------------------------//
												// Animal FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//
Animal::Animal()
{
    std::cout << "Default Animal Constractor called" << std::endl;
}

 Animal::Animal( const Animal & src )
 {
     std::cout << "Copy Animal Constractor called" << std::endl;
	 type = src.type;
 }

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destroctor called" << std::endl;
}

std::string Animal::getType()
{
    return type;
}

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}

// ---------------------------------------------------------------------------------------------------------//
												// Dooog FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

Dog::Dog()
{   
    type = "Dog";
    std::cout << "Default Dog Constractor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "bark" << std::endl;
}

 Dog::Dog( const Dog & src )
 {
	 type = src.type;
     std::cout << "Copy Dog Constractor called" << std::endl;
 }
 
std::string Dog::getType()
{
    return type;
}

Dog::~Dog()
{
    std::cout << "Dog Destroctor called" << std::endl;
}

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}


// ---------------------------------------------------------------------------------------------------------//
												// Caaat FUNCTIONSSS
// ---------------------------------------------------------------------------------------------------------//

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default Cat Constractor called" << std::endl;
}

 Cat::Cat( const Cat & src )
{
	type = src.type;
     std::cout << "Copy Cat Constractor called" << std::endl;
 }

void  Cat::makeSound() const
{
    std::cout << "miaw" << std::endl;
}

std::string Cat::getType()
{
    return type;
}


Cat::~Cat()
{
    std::cout << "Cat Destroctor called" << std::endl;
}

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		type = rhs.type;
	}
	return *this;
}