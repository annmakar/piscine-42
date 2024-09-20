/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:01:09 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/18 18:04:15 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && (*s1 == *s2)))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int	main()
// {
// 	printf("%d", ft_strcmp("Hello", "Hello1"));
// 	printf("\n%d", ft_strcmp("Hello", "He"));
// 	printf("\n%d", ft_strcmp("He", "Hello"));
// 	printf("\n%d", ft_strcmp("Hello", "Hello"));
// return (0);
// }
