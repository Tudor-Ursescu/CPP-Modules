/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:54:49 by turescu           #+#    #+#             */
/*   Updated: 2025/03/03 09:41:02 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j; // should not create a leak
        delete i;
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
    }
    {
        int N = 10;
        Animal **zoo = animalZoo(N);
        if (zoo != NULL){
            for (int i = 0; i < N; i++) {
                zoo[i]->makeSound();
            }
            freeZoo(zoo, N);
        }
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
        std::cout << DEEP_GREEN << "............................." << RESET << std::endl;
    }
    {
        //this is a tester intended to show that the copies are not shallow
        //meaning that different dogs have individual brains, not just pointers to the same one 
        Dog originalDog;
        originalDog.getBrain()->setIdea(0, "I feel quite hungry");
        Dog newDog(originalDog);

        std::cout << "OriginalDog idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
        std::cout << "NewDog idea: " << newDog.getBrain()->getIdea(0) << std::endl;

        newDog.getBrain()->setIdea(0, "I should get some rest");

        std::cout << "After change: " << std::endl;
        std::cout << "OriginalDog idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
        std::cout << "NewDog idea: " << newDog.getBrain()->getIdea(0) << std::endl;
    }
    // Dog basic;
    // Dog tmp = basic;
    return 0;
}