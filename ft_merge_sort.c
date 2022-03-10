/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:44:49 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/10 22:52:19 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_split_list(t_list *src, t_list **head, t_list **end)
{
	t_list	*ptr1;
	t_list	*ptr2;

	ptr2 = src;
	ptr1 = src->next;
	while (ptr1)
	{
		ptr1 = ptr1->next;
		if (ptr1)
		{
			ptr2 = ptr2->next;
			ptr1 = ptr1->next;
		}
	}
	*head = src;
	*end = ptr2->next;
	ptr2->next = NULL;
}

t_list	*ft_merge_sort_list(t_list *lst1, t_list *lst2)
{
	t_list	*result;

	result = NULL;
	if (lst1 == NULL)
		return (NULL);
	else if (lst2 == NULL)
		return (lst2);
	if (ft_atoi(lst1->content) <= ft_atoi(lst2->content))
	{
		result = lst1;
		result->next = ft_merge_sort_list(lst1->next, lst2);
	}
	else
	{
		result = lst2;
		result->next = ft_merge_sort_list(lst1, lst2->next);
	}
	return (result);
}

void	ft_merge_sort(t_list **stack)
{
	t_list	*head;
	t_list	*lst1;
	t_list	*lst2;

	head = *stack;
	if (head == NULL || head->next == NULL)
		return ;
	ft_split_list(head, &lst1, &lst2);
	ft_merge_sort(&lst1);
	ft_merge_sort(&lst2);
	*stack = ft_merge_sort_list(lst1, lst2);
}
