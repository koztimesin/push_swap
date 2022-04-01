/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_node_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:14:32 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 17:42:26 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate_node(t_list **head)
{
	t_list	*temp;

	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	ft_lstadd_back(head, ft_lstnew(ft_strdup(temp->content)));
	ft_lstclear(&temp, free);
}

void	ft_ra_b(t_list **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_rotate_node(stack_a);
}

void	ft_rb_b(t_list **stack_b)
{
	if (*stack_b && (*stack_b)->next)
		ft_rotate_node(stack_b);
}

void	ft_rr_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && (*stack_a)->next && *stack_b && (*stack_b)->next)
	{
		ft_rotate_node(stack_a);
		ft_rotate_node(stack_b);
	}
}
