#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap {
	public:
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& rhs);
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap& rhs);

		void	highFivesGuys(void);

	private:
		FragTrap(void);

		void	_announce(void);
};

#endif
