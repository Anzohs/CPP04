/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:23 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 19:50:37 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.h"

class Animal{
	protected:
		std::string	type;
		Brain *brain;
	public:
		Animal(std::string t);
		virtual	~Animal(void);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual void	makeSound(void) const = 0;
		std::string getType(void) const;
		void setIdea(std::string idea);
		void printIdeas(void) const;
};
