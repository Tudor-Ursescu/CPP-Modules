/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:23:31 by tursescu          #+#    #+#             */
/*   Updated: 2025/02/06 12:12:11 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(const std::string& name, const std::string& s1, const std::string& s2)  {
    this->name = name;
    this->s1 = s1;
    this->s2 = s2;
    std::cout << BLUE << "File Class initialized" << RESET << '\n'; 
}

File::File() : name(""), s1(""), s2("") {
    std::cout << YELLOW << "Default constructor called" << RESET << '\n';
}

File::~File() {
    std::cout << RED << "File Class destroyed" << RESET << '\n';
}

const std::string& File::getFileName() const { return (name); }

const std::string& File::getS1() const { return (s1); }

const std::string& File::getS2() const { return (s2); }

std::string File::replaceOccurrences(const std::string& content, const std::string& from, const std::string& to) const {
    if (from.empty())
        return content; //if s1 empty, no need for change the outcome
    
    std::string result;
    std::string::size_type pos = 0;
    std::string::size_type foundPos;
    std::string::size_type fromLen = from.length();

    // append everything before the match and the replacement string
    while ((foundPos = content.find(from, pos)) != std::string::npos) {
        result.append(content, pos, foundPos - pos);
        result.append(to);
        pos = foundPos + fromLen; // and move past the matched substring
    }
    
    //append the remaining part of the string
    result.append(content, pos, content.length() - pos);
    return result;
}

void File::processFile() const {
    std::ifstream inputFile(name.c_str());
    // permissions edge case handler
    if (!inputFile) {
        std::cerr << "Error: could not open the file " << name << "Check file permissions.\n";
        return ;
    }
    // if (!inputFile.is_open()) {
    //     std::cerr << "Error: could not open file for reading. Check file permissions.\n";
    // }
    //read the file content into a string
    std::string content;
    std::string line;
    while (std::getline(inputFile, line)) {
        content += line + '\n'; //add newline manually bcs getline removes them
    }
    inputFile.close(); // close input file
    
    // replace s1 with s2
    std::string updatedContent = replaceOccurrences(content, s1, s2);
    
    //now we write the updated version to <filename>.replace 
    std::ofstream outputFile((name + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Could not open the file" << name << '\n';
        return ;
    }
    outputFile << updatedContent;
    //close the output file
    outputFile.close();
    if (outputFile.is_open()) {
        std::cerr << "Error: Could not create or write to the output file. Check file permissions.\n";
        return ;
    }
    else if (s1 == s2)
        std::cout << "No changes made... s1 and s2 are identical\n";
    else if (content.empty()) {
        std::cout << "File is empty.\n" << "Output written to " << name + ".replace" << '\n';
    }
    else
        std::cout << "File processing complete.\n" << "Output written to " << name + ".replace" << '\n';
}

