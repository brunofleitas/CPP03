/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:22:44 by bfleitas          #+#    #+#             */
/*   Updated: 2025/03/05 00:51:44 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        static unsigned int const m_inicialHitPoints = 100;
        static unsigned int const m_inicitalEnergyPoints = 50;
        static unsigned int const m_inicialAttackDamage = 20;
    public:
        //Default Constructor
        ScavTrap();
        //Parameterized Constructor
        ScavTrap(std::string name);
        //Copy Constructor
        ScavTrap(const ScavTrap& other);
        //Assignment Operator
        ScavTrap& operator=(const ScavTrap& other);
        //Destructor
        virtual ~ScavTrap();
        //Member functions
        void attack(const std::string& target);
        void guardGate();
};

#endif