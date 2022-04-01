/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_nodes_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:31:39 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 17:42:20 by ksaffron         ###   ########.fr       */
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

void	ft_sa_b(t_list **stack_a)
{
	if ((*stack_a) && (*stack_a)->next)
		ft_swap_nodes(stack_a);
}

void	ft_sb_b(t_list **stack_b)
{
	if ((*stack_b) && (*stack_b)->next)
		ft_swap_nodes(stack_b);
}

void	ft_ss_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && *stack_b && (*stack_a)->next && (*stack_b)->next)
	{
		ft_swap_nodes(stack_a);
		ft_swap_nodes(stack_b);
	}
}
