/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 23:03:49 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/20 23:46:38 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        //Default Constructor
        FragTrap();
        //Parameterized Constructor
        FragTrap(std::string name);
        //Copy Constructor
        FragTrap(const FragTrap& other);
        //Assignment Operator
        FragTrap& operator=(const FragTrap& other);
        //Destructor
        virtual ~FragTrap();
        //Member functions
        void highFivesGuys(void);
};

#endif