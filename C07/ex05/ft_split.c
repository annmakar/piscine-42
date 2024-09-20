/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 07:22:32 by annmakar          #+#    #+#             */
/*   Updated: 2024/06/27 08:51:56 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	check_sep(char c, char *sep)
{
	int	l;

	l = 0;
	while (sep[l] != '\0')
	{
		if (sep[l] == c)
			return (1);
		l++;
	}
	return (0);
}

int	get_n_words(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (!check_sep(str[i], charset) \
		&& (check_sep(str[i + 1], charset) || str[i + 1] == '\0'))
			c++;
		i++;
	}
	return (c);
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(n + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_copy_words(char *str, char *seps, int words)
{
	int		i;
	int		j;
	int		start;
	char	**copy;

	copy = (char **)malloc((words + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0' && j < words)
	{
		while (check_sep(str[i], seps) && str[i] != '\0')
			i++;
		start = i;
		while (!check_sep(str[i], seps) && str[i] != '\0')
			i++;
		if (i > start)
		{
			copy[j] = ft_strndup(str + start, i - start);
			j++;
		}
	}
	copy[j] = NULL;
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**s;

	words = get_n_words(str, charset);
	s = ft_copy_words(str, charset, words);
	return (s);
}
