/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:02:25 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/16 22:05:14 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char input[] = "HelGHJlo, WoRRTGrld!";

//     printf("Original: %s\n", input);

//     ft_strlowcase(input);

//     printf("Uppercase: %s\n", input);

//     return (0);
// }
