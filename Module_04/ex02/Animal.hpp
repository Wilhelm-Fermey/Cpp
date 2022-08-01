#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"


class AAnimal
{
    public:
        AAnimal(void);
        AAnimal & operator=(AAnimal const &rhs);
        AAnimal(AAnimal const &src);
        ~AAnimal(void);

        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
    protected:
        std::string _type;

    private:
};

class Dog : public AAnimal
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

class Cat : public AAnimal
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
