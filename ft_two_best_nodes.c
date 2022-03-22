/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_best_nodes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:55:53 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/22 18:25:22 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_same_rotates(t_list **stack_a, t_list **stack_b, t_list *node, t_list *best_node)
{
	if (rr_actions(stack_b, node) < rrr_actions(stack_b, node))
	{
		if (ft_lstsize(best_node) > ft_lstsize(stack_a) / 2
			|| rr_actions(*stack_a, best_node) < rr_actions(*stack_b, node))
			ft_rr(stack_a, stack_b);
	}
	else
	{
		if (ft_lstsize(best_node) > ft_lstsize(stack_a) / 2
			|| rrr_actions(*stack_a, best_node) < rrr_actions(*stack_b, node))
				ft_rrr(stack_a, stack_b);
	}
	return (0);
}

void	ft_two_nodes(t_list **stack_a, t_list **stack_b, t_list *node)
{
	t_list	*best;

	best = get_best_node(stack_a, stack_b);
	while (best != *stack_a && best != *stack_b)
	{
		if (ft_same_rotates(stack_a, stack_b, node, best))
			continue ;
		break ;
	}
	while (best != *stack_a)
	{
		if (rr_actions(stack_a, node) > rrr_actions(stack_a, node))
			ft_rra(stack_a);
		else
			ft_ra(stack_a);
	}
	while (best != *stack_b)
	{
		if (rr_actions(stack_b, node) > rrr_actions(stack_b, node))
			ft_rrb(stack_b);
		else
			ft_rb(stack_b);
	}
}
