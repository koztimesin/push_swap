/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_nodes_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:55:56 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 17:42:33 by ksaffron         ###   ########.fr       */
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

void	ft_rra_b(t_list **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_reverse_rotate_nodes(stack_a);
}

void	ft_rrb_b(t_list **stack_b)
{
	if (*stack_b && (*stack_b)->next)
		ft_reverse_rotate_nodes(stack_b);
}

void	ft_rrr_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && (*stack_a)->next && *stack_b && (*stack_b)->next)
	{
		ft_reverse_rotate_nodes(stack_a);
		ft_reverse_rotate_nodes(stack_b);
	}
}
