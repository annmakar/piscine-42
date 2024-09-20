/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:11:51 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/16 21:20:38 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
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
//     char *test1 = "HeLlo12!$@#$";
//     char *test2 = "rtrtr\n";

//     if (ft_str_is_printable(test1)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     if (ft_str_is_printable(test2)) {
//         write(1, "1", 1);
//     } else {
//         write(1, "0", 1);
//     }

//     return 0;
// }
