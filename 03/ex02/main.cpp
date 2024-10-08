#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap John("John");
	ScavTrap Eddie = John;

	Eddie.attack("your mom");

	John.attack("a grandma");
	John.attack("a grandma");
	John.attack("a grandma");
	John.takeDamage(5);
	John.beRepaired(5);
	John.attack("a grandma");
	John.attack("a grandma");
	John.attack("a grandma");
	John.attack("a grandma");
	John.takeDamage(9);
	John.attack("a grandma");
	John.attack("a grandma");
	John.attack("a grandma");
	John.attack("a grandma");
	John.beRepaired(20);
	John.takeDamage(4);
	John.attack("a grandma");
	John.takeDamage(100);
	John.guardGate();
	John.guardGate();

	ScavTrap	Liam("Liam");

	ClapTrap	Eduardo = Liam;
	Eduardo.attack("a random guy");

	FragTrap	Someone("Someone");

	Someone.attack("an other person");
	Someone.highFivesGuys();
	Someone.takeDamage(-1);
	Someone.highFivesGuys();

	return (0);
}
