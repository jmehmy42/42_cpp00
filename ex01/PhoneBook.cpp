/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-24 15:38:05 by jmehmy            #+#    #+#             */
/*   Updated: 2025-12-24 15:38:05 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
    oldest = 0;
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
    if(count < 8)
        index = count;
    else
        index = oldest;
    contacts[index].setContact();
    if(count < 8)
        count++;
    else
        oldest = (oldest + 1) % 8;
    std::cout << "Contact added phonebook successfully" << std::endl;
}

void PhoneBook::searchContact()
{
    int i;
    int index;

    i = 0;
    std::cout << std::setw(10) << "Index" << "|"
            << std::setw(10) << "First Name" <<  "|"
            << std::setw(10) << "Last Name" <<  "|"
            << std::setw(10) << "Nickname" << std::endl;
    while (i < count)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << format_str(contacts[i].get_first_name()) << "|"
                  << std::setw(10) << format_str(contacts[i].get_last_name()) << "|"
                  << std::setw(10) << format_str(contacts[i].get_nickname()) << std::endl;
        i++;
    }

    std::cout << "Enter index of the contact: ";
    std::cin >> index;
    std::cin.ignore();

    if(index < 0 || index >= count)
        std::cout << "invalid index"<<std::endl;
    else
        contacts[index].display_contact();
}
