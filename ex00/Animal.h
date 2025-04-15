/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:34:13 by hladeiro          #+#    #+#             */
/*   Updated: 2025/04/15 20:41:20 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Animal {
	protected:
		std::string type;
	public:
		Animal(std::string t);
		Animal(void);
		Animal(const Animal& other);
		Animal operator=(const Animal& other);
		virtual void makeSound(void);
		std::string getType(void);
};
