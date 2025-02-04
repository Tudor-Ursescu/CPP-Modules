/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:24:10 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/04 18:17:24 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <string>
# include <fstream> //for file operations

class File {
private:
    std::string name;
    std::string s1;
    std::string s2;
public:
    File(const std::string& name, const std::string& s1, const std::string& s2);
    ~File();
    
    const std::string& getFileName() const;
    const std::string& getS1() const;
    const std::string& getS2() const;
    void processFile() const;
private:
    std::string replaceOccurrences(const std::string& content, const std::string& from, const std::string& to) const;
};
#endif