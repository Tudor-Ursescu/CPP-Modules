/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:32:44 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:57:05 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac == 2){
        Harl harl;
        harl.complain(av[1]);
    }
    else
        std::cout << RED << "Wrong ammount of arguments!" << RESET << '\n';
}