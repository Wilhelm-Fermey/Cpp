#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"


class Animal
{
    public:
        Animal(void);
        Animal & operator=(Animal const &rhs);
        Animal(Animal const &src);
        ~Animal(void);

        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string _type;

    private:
};

class Dog : public Animal
{
    public :
        Dog(void);
        Dog & operator=(Dog const & rhs);
        Dog(Dog const &src);
        ~Dog();
        virtual void makeSound(void) const;
    private :
        Brain *brain;
};

class Cat : public Animal
{
    public:
        Cat(void);
        Cat & operator=(Cat const &rhs);
        Cat(Cat const &src);
        ~Cat(void);
        virtual void makeSound(void) const;

    private:
        Brain *brain;
};


#endif
