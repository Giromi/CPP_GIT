/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:30:17 by minsuki2          #+#    #+#             */
/*   Updated: 2022/12/19 17:54:47 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

# define MSG_CONSTRUCT		"[Constructor]"
# define MSG_DESTRUCT		"[Destructor]"
# define MSG_ANNOUNCE		"[Announce]"
# define MSG_CLAPTRAP_BORN	"Seriously? Claptrap? You'vs heard about his weird Actions Skill, right? This is REALLY what you want?"
# define MSG_GONE			"hi is gone..."
# define MSG_CLAPTRAP		"ClapTrap"
# define MSG_GETRB			"getRawBits member function"
# define MSG_ATTACK			"attacks"
# define MSG_TAKE_DAMAGE	"is taken damage"
# define MSG_CAUSE			"causinig"
# define MSG_USE			"Using"
# define MSG_LEFT			"lefting"
# define MSG_INCREASE		"increasing"
# define MSG_HP				"HP"
# define MSG_P_O_D			"points of damage!"
# define MSG_P_O_H			"points of heal!"
# define MSG_NO_HP			"can not do anything because HP is 0!"
# define MSG_FULL_HP			"do not need to do because HP is FULL!"
# define MSG_NO_EP			"can not do anything because EP is 0!"
# define MSG_DIED			"is already dead..."
# define MSG_REPAIR			"is repaired"



class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		~ClapTrap(void);
		const std::string&		getName() const;
		const unsigned int&		getAttackDamage() const;
		void					attack(const std::string& target);
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
		void					checkStatus(void);

	private:
		const std::string		name_;
		unsigned int			health_point_;
		unsigned int			energy_point_;
		unsigned int			attack_damage_;
		static unsigned int		limit_hp_;
		static unsigned int		limit_ep_;
		static unsigned int		limit_ad_;
};

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#endif
