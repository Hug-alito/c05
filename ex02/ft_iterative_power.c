/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:51:30 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/14 14:51:31 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb = 2;
	int	power = 2;
	int	r = ft_iterative_power(nb, power);
	printf("%d", r);
}
*/
int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
