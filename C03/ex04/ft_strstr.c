/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:51:49 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/19 00:01:23 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		while ((str[i] == to_find[i] && to_find[i] != '\0'))
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (NULL);
}

// int main()
// {
//     char haystack[] = "Once upon a time, there lived a dragon.";
//     char needle[] = "dragon";
//     char *result;

//     result = ft_strstr(haystack, needle);

//     if (result) {
//         printf("Substring found: %s\n", result);
//     } else {
//         printf("Substring not found.\n");
//     }
//     return 0;
// }
