#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog& rhs);
		~Dog(void);

		Dog&	operator=(const Dog& rhs);

		void	makeSound(void) const;
	private:
		Brain*	_brain;
};

#endif
