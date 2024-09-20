/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:42:09 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/27 01:34:15 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	i++;
	if (src == NULL)
	{
		dest = NULL;
		return (dest);
	}
	dest = (char *)malloc(i * sizeof(src));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char *str;
// 	char *word = "asfasfaf";
// 	str = ft_strdup(word);
// 	free(str);
// 	return (0);
// }
