/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:34 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 17:41:39 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.h"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog(void);
		void makeSound(void) const;
};
