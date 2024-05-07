/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:38:58 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:33 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*new_str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	new_str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < len_s1)
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		new_str[len_s1++] = s2[i++];
	new_str[len_s1] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	char *s1 = "katalya ";
// 	char *s2 = "lanaelle";
// 	char *str = ft_strjoin(s1, s2);
// 	printf("%s", str);
// 	return (0);
// }