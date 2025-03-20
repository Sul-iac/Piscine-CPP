#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie();
		Zombie(const std::string &name);
		~Zombie();
		void		announce (void);
		void		setNames(std::string &name);
		
	private:
		std::string _name;
};
	
Zombie*		zombieHorde(int N, std::string name);

#endif