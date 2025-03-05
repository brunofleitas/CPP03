/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 23:03:58 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/22 02:20:25 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    m_hitpoints = m_inicialHitPoints;
    m_energy_points = m_inicitalEnergyPoints;
    m_attack_damage = m_inicialAttackDamage;
    std::cout << "FragTrap " << m_name << " was created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << m_name << " was copied." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << m_name << " was destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << m_name << " high fives guys." << std::endl;
}