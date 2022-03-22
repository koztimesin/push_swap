/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:41:25 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/22 16:59:21 by ksaffron         ###   ########.fr       */
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
