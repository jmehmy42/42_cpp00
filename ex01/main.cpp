/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-06 08:41:46 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-06 08:41:46 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook ph_book;
    std::string input;
    std::cout << "Enter a command ADD, SEARCH, EXIT : ";
    while (std::getline(std::cin, input))
    {
        if (input == "ADD")
        {
            ph_book.addContact();
            std::cout << "---------------------------" << std::endl;
            std::cout << "Enter a command ADD, SEARCH, EXIT : ";
        }
        else if (input == "SEARCH")
        {
            ph_book.searchContact();
            std::cout << "---------------------------" << std::endl;
            std::cout << "Enter a command ADD, SEARCH, EXIT : ";
        }
        else if (input == "EXIT")
        {
            std::cout << "Exiting Phonebook!" << std::endl;
            break;
        }
        else if (!input.empty())
            std::cout << "Incorrect command!" << std::endl;
    }
    return (0);
}
