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

static void ft_upper(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        std::cout << str[i];
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
