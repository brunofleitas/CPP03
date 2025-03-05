/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:35:05 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 16:20:52 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string m_name;
        unsigned int m_hitpoints;
        unsigned int m_energy_points;
        unsigned int m_attack_damage;
    public:
        //Default Constructor
        ClapTrap();
        //Parameterized Constructor
        ClapTrap(std::string name);
        //Copy Constructor
        ClapTrap(const ClapTrap& other);

        //Assignment Operator
        ClapTrap& operator=(const ClapTrap& other);
        
        //Destructor
        virtual ~ClapTrap();

        //Member functions
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //Getters
        std::string getName() const;
        unsigned int getHitpoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;
};

#endif