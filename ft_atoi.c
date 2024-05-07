/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:20:47 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/11 19:47:53 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] >= 9 && (str[i] <= 13 || str[i] == 32))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

// int main()
// {
//     char str[] = "-+1234ab567";
//     int j;
//     j = ft_atoi(str);
//     printf("%d\n", j);
//     return (0);
// }
