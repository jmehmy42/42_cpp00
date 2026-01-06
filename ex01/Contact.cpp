/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-06 08:41:19 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-06 08:41:19 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

std::string Contact::get_first_name() const
{
    return first_name;
}

std::string Contact::get_last_name() const
{
    return last_name;
}

std::string Contact::get_nickname() const
{
    return nickname;
}

static bool validate_phone(std::string &input)
{
    size_t i;

    i = 0;
    if (input.empty() || input.length() != 9 || input[0] == '0')
        return false ;
    while( i < input.length())
    {
        if(input[i] < '0' || input[i] > '9')
            return false;
        i++;    
    }
    return true;
}

static bool validate_input(const std::string &input)
{
    size_t i;
    bool letter;

    i = 0;
    letter = false;
    if(input.empty())
        return false;
    while( i < input.length())
    {
        if(isalpha(input[i]))
            letter = true;
        else if(input[i] != ' ' && input[i] != '\t')
            return false;
        i++;
    }
    return letter;
}

static void set_var(std::string &var, const std::string &msg)
{
    std::string input;
    
    while(true)
    {
        std::cout << "Enter " << msg << ": ";
        std::getline(std::cin, input);
        if(!validate_input(input))
            std::cout << msg << " Can't be empty or invalid characters." << std::endl;
        else
        {
            var = input;
            break;
        }   
    }
}

static void set_phone(std::string &var, const std::string &msg)
{
    std::string input;

    while(true)
    {
        std::cout << "Enter " << msg << ": ";
        std::getline(std::cin, input);
        if(!validate_phone(input))
        {
            std::cout << msg << " must be digit or max 9 characters." << std::endl;
        }
        else
        {
            var = input;
            break;
        }
    }
}

void Contact::setContact()
{
    set_var(first_name, "First Name");
    set_var(last_name, "Last Name");
    set_var(nickname, "Nickname");
    set_var(secret, "Darkest secret");
    set_phone(phone_no, "Phone Number");
}