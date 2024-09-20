/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 00:59:02 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/20 01:20:30 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int len, char	*name[])
{
	len = 0;
	while (name[0][len] != '\0')
		len++;
	write(1, name[0], len);
	write(1, "\n", 1);
	return (0);
}
