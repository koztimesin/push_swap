/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:41:25 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/22 17:12:48 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr_actions(t_list *stack, t_list *node)
{
	return (ft_lstsize(stack) - ft_lstsize(node));
}

int	rrr_actions(t_list *stack, t_list *node)
{
	return (ft_lstsize(stack));
}

t_list	*best_node(t_list **stack_a, t_list *node)
{
	t_list	*temp;

	if (ft_atoi((*stack_a)->content) > ft_atoi(node->content)
		&& ft_atoi(ft_lstlast(*stack_a)->content) < ft_atoi(node->content))
		return (*stack_a);
	temp = *stack_a;
	while (temp->next)
	{
		if (ft_atoi(temp->content) < ft_atoi(node->content)
			&& ft_atoi(temp->next->content) > ft_atoi(node->content))
			break ;
		temp = temp->next;
	}
	if (temp->next)
		return (temp->next);
	else
		return (temp);
}

static int	actions_sum(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int		a_actions;
	int		b_actions;
	t_list	*a_node;

	a_node = best_node(stack_a, node);
	if (rrr_actions(*stack_b, node) < rr_actions(*stack_b, node))
		b_actions = rrr_actions(*stack_b, node);
	else
		b_actions = rr_actions(*stack_b, node);
	if (b_actions > rrr_actions(*stack_a, a_node)
		|| b_actions > rr_actions(*stack_a, a_node))
		return (b_actions);
	if (rrr_actions(*stack_a, a_node) < rr_actions(*stack_a, a_node))
		a_actions = rrr_actions(*stack_a, a_node);
	else
		a_actions = rr_actions(*stack_a, a_node);
	return (a_actions + b_actions);
}
