#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

# define ERR_USAGE "usage: ./btc <data-base file name>"
# define ERR_FILE_OPENING "Error: cannot open user date-base!"

int	main(int argc, char *argv[])
{
	BitcoinExchange	btc("data.csv");
	std::ifstream	user_db;

	if (argc != 2)
		return (std::cout << ERR_USAGE << std::endl, 0);
	user_db.open(argv[1], std::ifstream::in);
	if (user_db.fail() || user_db.bad())
		return (std::cout << ERR_FILE_OPENING << std::endl, 0);
	btc.parseFile('|', user_db, &BitcoinExchange::compareDB);
	return (0);
}
