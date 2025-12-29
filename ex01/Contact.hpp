/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-24 15:39:06 by jmehmy            #+#    #+#             */
/*   Updated: 2025-12-24 15:39:06 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <cctype>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_no;
        std::string secret;
    public:
        Contact();
        void setContact();
        void display_contact();
        void print_full();
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nickname() const;
};

#endif