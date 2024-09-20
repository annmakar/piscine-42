/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:41:00 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/26 20:38:39 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;

	index = 2;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

// int    main(void)
// {
// 	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
// 	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
// 	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
// 	printf("sqrt of %d is %d\n", 25, ft_sqrt(25));
//         return (0);
// }
