/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:26:43 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/14 13:26:44 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb = 0;
	int	r = ft_iterative_factorial(nb);
	printf("%d", r);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
