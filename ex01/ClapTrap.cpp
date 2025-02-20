/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:35:18 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/20 18:14:11 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitpoints(10), m_energy_points(10), m_attack_damage(0)
{
    std::cout << "ClapTrap " << m_name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : m_name(other.m_name), m_hitpoints(other.m_hitpoints), m_energy_points(other.m_energy_points), m_attack_damage(other.m_attack_damage)
{
    std::cout << "ClapTrap " << m_name << " was copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        m_name = other.m_name;
        m_hitpoints = other.m_hitpoints;
        m_energy_points = other.m_energy_points;
        m_attack_damage = other.m_attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << m_name << " was destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if ((m_hitpoints == 0) || (m_energy_points == 0))
    {
        std::cout << "ClapTrap " << m_name << " can;t attack it doesn't have enough hitpoints or energy points." << std::endl;
    }
    else
    {
        m_energy_points -= 1;
        std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (m_hitpoints == 0)
    {
        std::cout << "ClapTrap " << m_name << " can't take damage, it's already dead." << std::endl;
    }
    else if (amount >= m_hitpoints)
    {
        m_hitpoints = 0;
        std::cout << "ClapTrap " << m_name << " took " << amount << " points of damage. He died." << std::endl;
    }
    else
    {
        m_hitpoints -= amount;
        std::cout << "ClapTrap " << m_name << " took " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (m_hitpoints == 0)
    {
        std::cout << "ClapTrap " << m_name << " can't be repaired, it's already dead." << std::endl;
    }
    else if (m_energy_points == 0)
    {
        std::cout << "ClapTrap " << m_name << " can't be repaired, it have 0 energy points." << std::endl;
    }
    else
    {
        m_hitpoints += amount;
        m_energy_points -= 1;
        std::cout << "ClapTrap " << m_name << " was repaired " << amount << " points!" << std::endl;
    }
}

