/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 00:43:04 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/19 00:47:24 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		count ++;
		str++;
	}
	return (count);
}

// int main() {
//     char str[] = "Hello, World!";
//     unsigned int length = ft_strlen(str);

//     printf("Length of the string \"%s\" is: %u\n", str, length);

//     return 0;
// }
