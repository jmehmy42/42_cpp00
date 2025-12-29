/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-24 15:39:23 by jmehmy            #+#    #+#             */
/*   Updated: 2025-12-24 15:39:23 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int count;
        int oldest;
    public:
        PhoneBook();
        void addContact();
        void searchContact();
};



#endif