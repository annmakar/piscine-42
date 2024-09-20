/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:28:26 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/23 14:39:11 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

// int	main()
// {
// 	printf("%d", ft_strncmp("Hello", "Hellh", -5));
// 	printf("\n%d", ft_strncmp("Hello", "He", 5));
// 	printf("\n%d", ft_strncmp("He", "Hello", 15));
// 	printf("\n%d", ft_strncmp("Hello", "Hello", 4));
// 	return (0);
// }
