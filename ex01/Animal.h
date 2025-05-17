/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:23 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/17 21:25:25 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal{
	protected:
		std::string	type;
	public:
		Animal(void);
		~Animal(void);
		Animal(std::string t);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		void	makeSound(void) const;
		std::string getType(void) const;
};
