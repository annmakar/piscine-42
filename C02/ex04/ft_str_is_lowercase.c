/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:06:05 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/16 21:07:25 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
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
//     char *test1 = "HeLlo";
//     char *test2 = "rtrtr";

//     if (ft_str_is_lowercase(test1)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     if (ft_str_is_lowercase(test2)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     return 0;
// }
