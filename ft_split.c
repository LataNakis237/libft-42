/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:25:52 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 18:12:17 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// All split above
static unsigned int	word_lenght(char const *s, unsigned int i, char c)
{
	int	word;

	word = 0;
	while (s[i + word] != '\0' && s[i + word] != c)
		word++;
	return (word);
}

static unsigned int	word_counter(char const *s, char c)
{
	unsigned int	counter;
	unsigned int	i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

void	word_writer(char const *s, unsigned int i, char *ptr, char c)
{
	unsigned int	j;

	j = 0;
	while (j < word_lenght(s, i, c))
	{
		ptr[j] = s[i + j];
		j++;
	}
	ptr[j] = '\0';
}

void	*memory_free(char **ptr, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < i)
	{
		free(ptr[j]);
		j++;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_counter(s, c))
	{
		while (s[j] == c)
			j++;
		ptr[i] = (char *)malloc((word_lenght(s, j, c) + 1) * sizeof(char));
		if (!ptr[i])
			return (memory_free(ptr, i));
		word_writer(s, j, ptr[i], c);
		j += word_lenght(s, j, c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

// int	main(void)
// {
// 	char *str = "katalya, is, a, girl";
// 	char c = ',';
// 	int i = ft_split(str, c);
// 	printf("%d", i);
// 	return (0);
// }