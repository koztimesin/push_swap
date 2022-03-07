/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:14:32 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/07 21:07:14 by ksaffron         ###   ########.fr       */
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

void	ft_ra(t_list **stack_a)
{
	if (*stack_a && (*stack_a)->next)
	{
		ft_rotate_node(stack_a);
		write(1, "ra\n", 3);
	}
}

void	ft_rb(t_list **stack_b)
{
	if (*stack_b && (*stack_b)->next)
	{
		ft_rotate_node(stack_b);
		write(1, "rb\n", 3);
	}
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && (*stack_a)->next && *stack_b && (*stack_b)->next)
	{
		ft_rotate_node(stack_a);
		ft_rotate_node(stack_b);
		write(1, "rr\n", 3);
	}
}
