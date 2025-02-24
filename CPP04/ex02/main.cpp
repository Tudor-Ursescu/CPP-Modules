/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:54:49 by turescu           #+#    #+#             */
/*   Updated: 2025/02/23 10:59:07 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        Animal* d = new Dog();
        d->makeSound();
        delete d;
    }
    // {
    //     Animal meta;
    // }
    return 0;
}

//simple test that shows how it is imposible now to instantiate an Animal instance