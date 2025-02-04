/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:16:39 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 18:30:39 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av) {
    if (ac == 4) {
        File file(av[1], av[2], av[3]);
        file.processFile();
    }
    else
        std::cout << "Wrong amount of arguments inserted!\n"
                  << "Try *FileName, *string you want to replace, and *string you want to replace with." << std::endl;
}
