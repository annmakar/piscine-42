/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 01:57:24 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/27 07:23:04 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		i++;
	}
	len += str_len(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	**strs;
// 	char	*separator;
// 	char	*result;
// 	int	size;

// 	size = 3;
// 	strs[0] = "Hello";
// 	strs[1] = "friend,";
// 	strs[2] = "you are awesome";
// 	separator = "....";
// 	result = ft_strjoin(size, strs, separator);
// 	printf("%s\n", result);
// 	free(result);
// }
