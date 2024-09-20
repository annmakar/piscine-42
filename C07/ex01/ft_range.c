/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 00:10:31 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/27 01:34:32 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*ret;
	int	i;

	n = 0;
	i = max - min;
	if (min >= max)
		return (NULL);
	ret = malloc(i * sizeof(int));
	if (!ret)
		return (0);
	while (n < i)
	{
		ret[n] = min + n;
		n++;
	}
	return (ret);
}
