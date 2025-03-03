/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalZoo.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:49:15 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 09:36:59 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Animal** animalZoo( int N ) {
    if (N <= 0) {
        std::cout << "Insuficient animals!" << std::endl;
        return NULL;
    }
    Animal** zoo = new Animal*[N];
    for (int i = 0; i < N / 2; i++) {
        zoo[i] = new Dog();
    }
    for (int i = N / 2; i < N; i++) {
        zoo[i] = new Cat();
    }
    return zoo;
}

void freeZoo(Animal **zoo, int N) {
    if ( N <= 0) {
        std::cout << RED << "Incorrect ammount of animalls passed" << RESET << std::endl;
    }
    for (int i = 0; i < N; i++) { // we need to first delete all the instances
        delete zoo[i];            // pointed by the pointers in the array
    }
    delete[] zoo; // delete zoo woild delete only the firs ponter to zoo
                 // and delete[] zoo deletes the whole array of pointers
}