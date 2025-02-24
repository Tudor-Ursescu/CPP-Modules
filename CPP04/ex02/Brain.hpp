/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: turescu <turescu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:02:36 by turescu           #+#    #+#             */
/*   Updated: 2025/02/22 16:18:08 by turescu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &other);
    Brain(const std::string otherIdeas[100]);
    Brain &operator=(const Brain &other);
    ~Brain();
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};

#endif