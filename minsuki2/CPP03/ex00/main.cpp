/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:13:18 by minsuki2          #+#    #+#             */
/*   Updated: 2022/12/16 18:34:29 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	ctBot("cl4p-Tp");

	ctBot.attack("hello");
	ctBot.checkStatus();

	ctBot.takeDamage(3);
	ctBot.checkStatus();

	for (int i = 0; i < 2; ++i) {
		ctBot.beRepaired(2);
		ctBot.checkStatus();
	}
	ctBot.beRepaired(UINT_MAX);
	ctBot.checkStatus();

	for (int i = 0; i < 10; ++i) {
		ctBot.attack("nice");
		ctBot.checkStatus();
	}

	ctBot.takeDamage(8);
	ctBot.checkStatus();

	ctBot.attack("nice");
	ctBot.checkStatus();

	ctBot.takeDamage(UINT_MAX);
	ctBot.checkStatus();

	ctBot.beRepaired(UINT_MAX);
	ctBot.checkStatus();

	ctBot.takeDamage(3);
	ctBot.checkStatus();

	ctBot.beRepaired(3);
	ctBot.checkStatus();

	return 0;
}
