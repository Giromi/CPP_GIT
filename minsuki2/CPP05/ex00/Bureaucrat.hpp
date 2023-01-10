/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:57:47 by minsuki2          #+#    #+#             */
/*   Updated: 2023/01/10 16:21:06 by minsuki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# define MSG_BREAUCRAT			"[Bureaucrat] "
# define MSG_D_CONSTRUCT		"Default Constructor"
# define MSG_C_CONSTRUCT		"Copy Constructor"
# define MSG_C_A_OPERATE		"Copy assignment operator"
# define MSG_DESTRCUT			"Destructor"
# define MSG_GRADE				", Bureaucrat grade "

# include <iostream>
# include <exception>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string& name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator=(const Bureaucrat& obj);
		~Bureaucrat(void);
		const std::string&	getName(void) const;
		const int&			getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);

		class GradeTooHighException : public std::exception {
			public:
				const char* what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what(void) const throw();
		};
	private:
		std::string				name_;
		int						grade_;
		static const int		max_grade = 1;
		static const int		min_grade = 150;
		void		checkException(void) const;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif

