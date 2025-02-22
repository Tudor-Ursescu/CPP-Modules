/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalZoo.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:49:15 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 15:09:51 by turescu          ###   ########.fr       */
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