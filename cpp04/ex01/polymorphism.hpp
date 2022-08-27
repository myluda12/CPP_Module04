#ifndef POLYMORPHISM_HPP
# define POLYMORPHISM_HPP

# include <iostream>
# include <string>

//Brain
class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		Brain &		operator=( Brain const & rhs );
		std::string ideas[100];

};
//Animal 

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();
        virtual void makeSound() const;
		Animal &		operator=( Animal const & rhs );
        std::string getType();

	protected:
        std::string type;

};

//Cat

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		 virtual ~Cat();
        void  makeSound() const;
		Cat &		operator=( Cat const & rhs );
		std::string getType();

	private:
		Brain* brain;


};

//Dog
class Dog : public Animal
{

	public:

		Dog();
		
		Dog( Dog const & src );
		virtual ~Dog();
        void makeSound() const;
		Dog &		operator=( Dog const & rhs );
		std::string getType();

	private:
		Brain* brain;


};




#endif