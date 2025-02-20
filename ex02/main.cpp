/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:34:48 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/20 23:33:39 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    //test basic ClapTrap
    ClapTrap robot("ARTURITO");
    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);

    //test basic ScavTrap
    ScavTrap scav("BENDER");
    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    //test constructor destructor order
    std::cout << "Creating ScavTrap" << std::endl;
    ScavTrap scav2("CP3O");
    std::cout << "Destroying ScavTrap" << std::endl;

    //test basic FragTrap
    FragTrap frag("WALLE");
    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(25);
    frag.highFivesGuys();

    //test constructor destructor order
    std::cout << "Creating FragTrap" << std::endl;
    FragTrap Frag2("EVE");
    std::cout << "Destroying FragTrap" << std::endl;
    
    return 0;
}