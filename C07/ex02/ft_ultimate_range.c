/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 01:33:20 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/27 01:56:03 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	i;
	int	*ret;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ret = malloc(size * sizeof(int));
	if (!ret)
		return (-1);
	while (i < size)
	{
		ret[i] = min + i;
		i++;
	}
	*range = ret;
	return (size);
}
