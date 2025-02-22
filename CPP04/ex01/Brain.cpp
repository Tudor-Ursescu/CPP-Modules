/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:10:17 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 13:42:18 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << YELLOW << "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << YELLOW << "Brain copy constructor called" << RESET << std::endl;
}

Brain::Brain(const std::string otherIdeas[100]) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = otherIdeas[i];
    }
    std::cout << YELLOW << "Brain parameter constructor called" << RESET << std::endl;
}
Brain& Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = other.ideas[i];
        } 
    }
    std::cout << YELLOW << "Brain copy assignment operator called" << RESET << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << YELLOW << "Brain destructor called" << RESET << std::endl;
}
