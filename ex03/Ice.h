/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:00:56 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/25 19:22:04 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

class Ice : public AMateria{
	public:
		Ice(void);
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		Ice* clone(void) const;
		~Ice(void);
		std::string getType() const;
};
