#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {
	public:
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& origin);
		~ClapTrap(void);

		ClapTrap&	operator=(const ClapTrap& origin);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		ClapTrap(void);

		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_energy_pts;
		unsigned int	_attack_dmg;

		bool	_do_action(unsigned int cost, const char *action);
};

#endif
