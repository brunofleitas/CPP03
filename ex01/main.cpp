/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:34:48 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/20 22:59:15 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ClapTrap robot("ARTURITO");
    
    //test basic functionality
    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);

    ScavTrap scav("BENDER");
    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    //test constructor destructor order
    std::cout << "Creating ScavTrap" << std::endl;
    ScavTrap scav2("CP3O");
    std::cout << "Destroying ScavTrap" << std::endl;
    
    return 0;
}