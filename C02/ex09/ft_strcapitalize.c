/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:06:35 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/17 18:53:29 by annmakar         ###   ########.fr       */
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
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is;

	i = 0;
	is = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is == 1)
				str[i] = str[i] - ('a' - 'A');
			is = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			is = 0;
		}
		else
		{
			is = 1;
		}
		i++;
	}
	return (str);
}

// int main()
// {
//     char input[] = "42mots quarante-deux; cinquante+et+un";

//     printf("Original: %s\n", input);

//     ft_strcapitalize(input);

//     printf("Uppercase: %s\n", input);

//     return (0);
// }
