/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:23 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 00:20:25 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.h"

class Animal{
	protected:
		std::string	type;
		Brain *brain;
	public:
		virtual	~Animal(void);
		Animal(std::string t);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		void	makeSound(void) const;
		std::string getType(void) const;
		void setIdea(std::string idea);
		void printIdeas(void) const;
};
