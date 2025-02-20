/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:34:48 by bfleitas          #+#    #+#             */
/*   Updated: 2025/02/20 18:17:05 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap robot("ARTURITO");
    
    //test basic functionality
    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);
    
    //test energy points and no energy points left
    for (int i = 0; i < 10; i++)
        robot.attack("Enemy");
    
    //test taking lethal damage
    robot.takeDamage(20);

    //no hit points left
    robot.beRepaired(5);
    
    return 0;
}