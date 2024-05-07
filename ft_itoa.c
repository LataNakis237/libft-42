/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:42:26 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/03 19:10:24 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lennub(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = ft_lennub(n);
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	if (0 == n)
		ptr[0] = '0';
	else if (n < 0)
		ptr[0] = '-';
	while (n != 0)
	{
		if (n < 0)
			ptr[--i] = (~(n % 10) + 1) + 48;
		else
			ptr[--i] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}

// int main()
// {
//     int nb = -2844;
//     int i = ft_lennub(nb);
//     printf("%d\n", i);

//     char *result = ft_itoa(nb);
//     printf("%s\n", result);
//     return (0);
// }