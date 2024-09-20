/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:26:03 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/19 21:04:54 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = 0;
	if (!dest || !src)
		return (0);
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	if (i == size)
		return (size + j);
	while (src[l] != '\0' && (i + l) < (size - 1))
	{
		dest[l + i] = src[l];
		l++;
	}
	if (i + l < size)
		dest[i + l] = '\0';
	return (j + i);
}

// int main()
// {
//     char dest[20] = "Hello, ";
//     char src[] = "World!";
//     unsigned int size = sizeof(dest);

//     unsigned int result = ft_strlcat(dest, src, size);

//     printf("Concatenated string: %s\n", dest);
//     printf("Total length: %u\n", result);

//     return 0;
// }
