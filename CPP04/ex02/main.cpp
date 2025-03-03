/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:54:49 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 09:59:19 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        Animal* d = new Dog();
        Animal* c = new Cat();
        c->makeSound();
        d->makeSound();
        delete d;
        delete c;
    }
    // {
    //     Animal meta;
    // }
    return 0;
}

//simple test that shows how it is imposible now to instantiate an Animal instance