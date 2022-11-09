/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:13 by minsuki2          #+#    #+#             */
/*   Updated: 2022/11/09 19:11:28 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# define	MSG_SOUND		"BraiiiiiiinnnzzzZ..."
# define	MSG_DESTROY		"is gone"
# define	MSG_ENDL		'\n'

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	private:
		std::string name_;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
