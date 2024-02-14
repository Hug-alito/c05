/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:49:09 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/14 16:49:15 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb = 4;
	int	r;
	r = ft_sqrt(nb);
	printf("%d", r);
}
*/
int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
			{
				return (n);
			}
			n++;
		}
	}
	return (0);
}
