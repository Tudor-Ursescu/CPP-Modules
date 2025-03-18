/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 14:57:48 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/18 18:05:20 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();
    AForm* makeForm(const std::string& name, const std::string& target);
    class NonExistentFormExceptiom : public std::exception {
        public:
            const char *what() const throw();
    };
};


#endif