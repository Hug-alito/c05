/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrischma <hrischma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:43:44 by hrischma          #+#    #+#             */
/*   Updated: 2024/02/14 16:48:50 by hrischma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	int	index = 6;
	int	r;
	r = ft_fibonacci(index);
	printf("%d", r);
}
*/
int	ft_fibonacci(int index)
{
	int	f;

	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else if (index > 1)
	{
		f = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (f);
	}
	else
	{
		return (-1);
	}
}
