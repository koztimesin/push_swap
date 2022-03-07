/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_nodes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:31:39 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/07 19:35:06 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap_nodes(t_list **head)
{
	t_list	*temp;

	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
}

void	ft_sa(t_list **stack_a)
{
	if ((*stack_a) && (*stack_a)->next)
	{
		ft_swap_nodes(stack_a);
		write(1, "sa\n", 3);
	}
}

void	ft_sb(t_list **stack_b)
{
	if ((*stack_b) && (*stack_b)->next)
	{
		ft_swap_nodes(stack_b);
		write(1, "sb\n", 3);
	}
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && *stack_b && (*stack_a)->next && (*stack_b)->next)
	{
		ft_swap_nodes(stack_a);
		ft_swap_nodes(stack_b);
		write(1, "ss\n", 3);
	}
}
