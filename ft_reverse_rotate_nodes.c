/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_nodes.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:55:56 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/09 17:48:48 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reverse_rotate_nodes(t_list **head)
{
	t_list	*new;
	t_list	*temp;

	new = *head;
	temp = NULL;
	while (new->next)
	{
		temp = new;
		new = new->next;
	}
	temp->next = NULL;
	new->next = *head;
	*head = new;
}

void	ft_rra(t_list **stack_a)
{
	if (*stack_a && (*stack_a)->next)
	{
		ft_reverse_rotate_nodes(stack_a);
		write (1, "rra\n", 4);
	}
}

void	ft_rrb(t_list **stack_b)
{
	if (*stack_b && (*stack_b)->next)
	{
		ft_reverse_rotate_nodes(stack_b);
		write (1, "rrb\n", 4);
	}
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && (*stack_a)->next && *stack_b && (*stack_b)->next)
	{
		ft_reverse_rotate_nodes(stack_a);
		ft_reverse_rotate_nodes(stack_b);
		write (1, "rrr\n", 4);
	}
}
