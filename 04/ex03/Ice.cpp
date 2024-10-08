#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"

// Constructors / Destructors
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice& rhs): AMateria(rhs)
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

// Operator overload
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

Ice&	Ice::operator=(const Ice& rhs)
{
	AMateria::operator=(rhs);

	return (*this);
}

// Function member
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

AMateria*	Ice::clone(void) const
{
	AMateria*	cloned = new Ice();

	return (cloned);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
		<< '*' << std::endl;
	return ;
}
