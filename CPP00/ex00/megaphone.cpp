/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:16:56 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/03 13:16:24 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for(int i = 1; av[i]; i++) {
            for (int j = 0; av[i][j]; j++)
                av[i][j] = toupper(av[i][j]);
            std::cout << av[i];
        }
        std::cout << '\n';
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
    return (0);
}