/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:23:38 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 14:19:26 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>


class Zombie {
private:
    std::string name;

public:
    Zombie( std::string name );
    ~Zombie();
    void announce(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name);

#endif
