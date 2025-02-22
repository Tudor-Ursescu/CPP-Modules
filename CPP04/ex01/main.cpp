/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:54:49 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 15:16:18 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    // {
    //     const Animal *j = new Dog();
    //     const Animal *i = new Cat();
    //     delete j; // should not create a leak
    //     delete i;
    // }
    {
        int N = 10;
        Animal **zoo = animalZoo(N);
        if (zoo != NULL){
            for (int i = 0; i < N; i++) {
                zoo[i]->makeSound();
            }
            for (int i = 0; i < N; i++) {
                delete zoo[i];
            }
            delete[] zoo;
        }
    }
    return 0;
}