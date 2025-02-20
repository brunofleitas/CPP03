/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:22:59 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/20 22:55:20 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    m_hitpoints = 100;
    m_energy_points = 50;
    m_attack_damage = 20;
    std::cout << "ScavTrap " << m_name << " was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << m_name << " was copied." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << m_name << " was destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if ((m_hitpoints == 0) || (m_energy_points == 0))
    {
        std::cout << "ScavTrap " << m_name << " can;t attack it doesn't have enough hitpoints or energy points." << std::endl;
    }
    else
    {
        m_energy_points -= 1;
        std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << m_name << " is now in Gate" << std::endl;
}