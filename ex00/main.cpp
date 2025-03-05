/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:34:48 by bfleitas          #+#    #+#             */
/*   Updated: 2025/03/05 00:47:01 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    
    //test basic functionality
    std::cout << "\nTest basic ClapTrap" << std::endl;
    ClapTrap robot("ARTURITO");
    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);
    
    //test energy points and no energy points left
    std::cout << "\nTest energy points and no energy points left" << std::endl;
    for (int i = 0; i < 10; i++)
        robot.attack("Enemy");
    
    //test taking lethal damage
    std::cout << "\nTest taking lethal damage" << std::endl;
    robot.takeDamage(20);
    robot.takeDamage(20);

    //no hit points left
    std::cout << "\nNo hit points left" << std::endl;
    robot.beRepaired(5);
    
    return 0;
}