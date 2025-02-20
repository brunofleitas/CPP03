/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 23:36:03 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 00:20:03 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string m_name;
    public:
        //Default Constructor
        DiamondTrap();
        //Parameterized Constructor
        DiamondTrap(std::string name);
        //Copy Constructor
        DiamondTrap(const DiamondTrap& other);
        //Assignment Operator
        DiamondTrap& operator=(const DiamondTrap& other);
        //Destructor
        ~DiamondTrap();
        //Member functions
        void whoAmI();
};

#endif