/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:07:08 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/16 20:33:49 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main() {
//     char *test1 = "Hello";
//     char *test2 = "";

//     if (ft_str_is_alpha(test1)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     if (ft_str_is_alpha(test2)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     return 0;
// }
