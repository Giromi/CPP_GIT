/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchang <hchang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:28:41 by hchang            #+#    #+#             */
/*   Updated: 2022/10/27 11:20:19 by hchang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_HPP_
# define PHONE_BOOK_HPP_

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <sstream>


class PhoneBook
{
    private:
        int		_addIdx;
		int		_searchIdx;
        Contact contact[8];
    public:
		PhoneBook();
		~PhoneBook();
		void	print(void);
        void	add(void);
        void	search(void);
		void	searchprint(void);
		void	exit(void);
};

# endif