/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:24:10 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:10:58 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <string>
# include <fstream> //for file operations

# define RED "\033[31m"
# define BLUE "\033[34m"
# define RESET "\033[0m"
# define YELLOW "\033[33m"

class File {
private:
    std::string name;
    std::string s1;
    std::string s2;
public:
    File(const std::string& name, const std::string& s1, const std::string& s2);
    File();
    ~File();
    
    const std::string& getFileName() const;
    const std::string& getS1() const;
    const std::string& getS2() const;
    void processFile() const;
private:
    std::string replaceOccurrences(const std::string& content, const std::string& from, const std::string& to) const;
};
#endif