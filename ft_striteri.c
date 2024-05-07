/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:48:32 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/03 19:07:00 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	func(int i, char *c)
{
	if (c[i] >= 'a' && c[i] <= 'z')
	{
		c[i] = c[i] - 32;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int main()
// {
//     char s[] = "love katalya";
//     ft_striteri(s, func);
//     printf("%s", s);
//     return (0);
// }