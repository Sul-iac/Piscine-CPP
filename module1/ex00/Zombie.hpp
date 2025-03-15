#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		Zombie();
		~Zombie();
	private:
		std::string name;
		void announce ( void );
};


#endif