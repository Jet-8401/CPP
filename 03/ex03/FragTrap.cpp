#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

// Constructor / Desctructor
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;

	this->_announce();
	std::cout << "Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;

	this->_announce();
	std::cout << "String constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& rhs): ClapTrap(rhs)
{
	*this = rhs;

	this->_announce();
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	this->_announce();
	std::cout << "Default destructor called" << std::endl;
	return ;
}

// Operator overload
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	this->_name = rhs._name;
	this->_hit_pts = rhs._hit_pts;
	this->_attack_dmg = rhs._attack_dmg;
	this->_energy_pts = rhs._energy_pts;

	return (*this);
}

// Member function
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

void	FragTrap::_announce(void)
{
	std::cout << "\x1B[34m[ FragTrap ] \x1b[0m\x1b[3m("
		+ this->_name + ") \x1b[23m";
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	this->_announce();
	if (!this->_do_action(0, "to ask for a highfive..."))
		return ;

	std::cout << "High five guys ?! (*everyone accepts*)\n- YEAH !"
		<< std::endl;
	return ;
}
