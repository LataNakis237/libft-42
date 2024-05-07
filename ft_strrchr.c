/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:53:02 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:56 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			d;

	i = 0;
	d = c;
	res = NULL;
	while (s[i])
	{
		if (s[i] == d)
			res = ((char *)&s[i]);
		i++;
	}
	if (s[i] == d)
		res = ((char *)&s[i]);
	return (res);
}

// int main()
// {
//     char str[] = "hello";
//     char c = 'l';
//     char * result = ft_strrchr(str, c);
//     printf("%td\n", result - str);
//     return (0);
// }