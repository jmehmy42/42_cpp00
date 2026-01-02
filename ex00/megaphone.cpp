/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-24 15:37:46 by jmehmy            #+#    #+#             */
/*   Updated: 2025-12-24 15:37:46 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static void ft_upper(const std::string &str)
{
    size_t i;

    i = 0;
    while(i < str.length())
    {
        std::cout << (char)std::toupper(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while( i < ac)
        {
            ft_upper(av[i]);
            if (i < ac - 1)
                std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;    
    return(0);
}
