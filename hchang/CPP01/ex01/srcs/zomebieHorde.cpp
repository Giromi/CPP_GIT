/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zomebieHorde.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:58:16 by hchang            #+#    #+#             */
/*   Updated: 2022/11/01 12:05:44 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* z_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		z_horde[N].setZombieName(name);
	return (z_horde);
}
