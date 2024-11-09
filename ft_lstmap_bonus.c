/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:50:53 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/09 16:03:46 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	head = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		if (!(new_lst->next))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
		new_lst = new_lst->next;
	}
	new_lst->next = NULL;
	return (head);
}

// void	print_list(t_list *list)
// {
// 	t_list	*dup;

// 	dup = list;
// 	while (dup)
// 	{
// 		printf("%s\n", (char *)(dup->content));
// 		dup = dup->next;
// 	}
// }

// void *f(void *data) {
//     char *input = (char *)data; // Conversion du pointeur void en char*
//     char *result = malloc(ft_strlen(input) + 1);
//     int i = 0;

//     while (input[i]) {
//         result[i] = ft_toupper(input[i]); // Conversion en majuscule
//         i++;
//     }
//     result[i] = '\0'; // Terminaison de la chaîne
//     return ((void *)result); // Renvoie le résultat
// }

// void	fdel(void *str)
// {
// 	free((char *)str);
// }
// int    main()
// {
// 	t_list *start = ft_lstnew("e");
// 	t_list *test1 = ft_lstnew("d");
// 	t_list *test2 = ft_lstnew("c");
// 	t_list *test3 = ft_lstnew("b");
// 	t_list *test4 = ft_lstnew("a");
//     	ft_lstadd_front(&start, test1);
//     	ft_lstadd_front(&start, test2);
//     	ft_lstadd_front(&start, test3);
//     	ft_lstadd_front(&start, test4);
// 	t_list* l = ft_lstmap(start, &f, &fdel);
// 	print_list(l);
// 	ft_lstclear(&l, fdel);
//     	return (0);
// }