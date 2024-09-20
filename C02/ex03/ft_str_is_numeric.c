/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:36:47 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/16 20:41:16 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
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
//     char *test1 = "1256";
//     char *test2 = "dfdg444";

//     if (ft_str_is_numeric(test1)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     if (ft_str_is_numeric(test2)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     return 0;
// }
