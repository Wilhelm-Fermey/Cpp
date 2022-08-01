#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain & operator=(Brain const & rhs);
        Brain(Brain const & src);
        ~Brain(void);
        std::string getIdeas(int i) const;
    private:
        std::string _ideas[100];
};

#endif
