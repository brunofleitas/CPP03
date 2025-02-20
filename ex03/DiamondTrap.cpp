/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 23:35:51 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/21 00:08:42 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->m_name = name;
    m_hitpoints = FragTrap::m_hitpoints;
    m_energy_points = ScavTrap::m_energy_points;
    m_attack_damage = FragTrap::m_attack_damage;
    std::cout << "DiamondTrap " << m_name << " was created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    this->m_name = other.m_name;
    std::cout << "DiamondTrap " << m_name << " was copied." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->m_name = other.m_name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << m_name << " was destroyed." << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << m_name << ", second name " << ClapTrap::m_name << "." << std::endl;
}