/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 22:32:20 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/17 23:44:59 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Brain{
	private:
		std::string ideas[100];
		int i;
	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);
		Brain& operator=(const Brain& other);
		void	printIdeas(void)const;
		void	setIdeas(std::string idea);
};
