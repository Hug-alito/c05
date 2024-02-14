/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:02:57 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/14 17:03:09 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int 	nb = 7;
	int	r;
	
	r = ft_is_prime(nb);
	printf("%d", r);

}
*/
int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (n <= nb / 2)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}
