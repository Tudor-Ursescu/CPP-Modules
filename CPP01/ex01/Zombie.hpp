/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:23:12 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:20:22 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define RED "\033[31m"
# define BLUE "\033[34m"
# define RESET "\033[0m"
# define YELLOW "\033[33m"


class Zombie {
private:
    std::string name;

public:
    Zombie( std::string name );
    Zombie();
    ~Zombie();
    void setName( std::string name );
    void getName();
    void announce(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );


#endif