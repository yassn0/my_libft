/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:56:49 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/09 12:04:58 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *start = ft_lstnew("a");
//     t_list *new = ft_lstnew("b");
//     ft_lstadd_front(&start, new);
//     printf("%s\n", (char*)start->content);
//     free(start);
//     return (0);
// }