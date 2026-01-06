/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-06 08:42:01 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-06 08:42:01 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
}

static std::string format_str(const std::string &str)
{
    if(str.length () > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

void Contact::display_contact()
{
    std::cout << "First Name: "<< first_name << std::endl;
    std::cout << "Last Name: "<< last_name << std::endl;
    std::cout << "Nick Name: "<< nickname << std::endl;
    std::cout << "Phone No.: "<< phone_no << std::endl;
    std::cout << "Darkest Secret: "<< secret << std::endl;
}

void PhoneBook::addContact()
{
    int index;
    index = count % 8; 
    contacts[index].setContact();
    count++;
    std::cout << "Contact added to phonebook successfully" << std::endl;
}

void PhoneBook::searchContact()
{
    int i;
    int index;
    int total;
    std::string input;

    i = 0;
    if(count < 8)
        total = count;
    else
        total = 8;
    std::cout << std::setw(10) << "Index" << "|"
            << std::setw(10) << "First Name" <<  "|"
            << std::setw(10) << "Last Name" <<  "|"
            << std::setw(10) << "Nickname" << std::endl;
    while (i < total)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << format_str(contacts[i].get_first_name()) << "|"
                  << std::setw(10) << format_str(contacts[i].get_last_name()) << "|"
                  << std::setw(10) << format_str(contacts[i].get_nickname()) << std::endl;
        i++;
    }
    std::cout << "Enter index of the contact: ";
    while(std::getline(std::cin, input))
    {

        if( input.length() != 1 || !(isdigit(input[0])))
        {
            std::cout << "Wrong index : ";
            continue;
        }
        index = input[0] - '0';
        if( index < 0 || index >= total)
        {
            std::cout << "Wrong index : ";
            continue;
        }
        contacts[index].display_contact();
        break;
    }
}
