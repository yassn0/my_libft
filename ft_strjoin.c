/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:15:15 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/08 14:57:09 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	new = malloc(len + 1 * sizeof(char));
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[len] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char	s1[10] = "sdfhuakfh";
// 	char	s2[10] = "swq";
// 	char	*new;

// 	new = ft_strjoin(s1, s2);
// 	printf("%s", new);
// }
