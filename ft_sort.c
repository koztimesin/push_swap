/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:59:43 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/11 18:06:22 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_stack_sorted(t_list **stack_a)
{
	t_list	*temp;

	while (*stack_a)
	{
		temp = (*stack_a)->next;
		while (temp)
		{
			if (ft_atoi((*stack_a)->content) > ft_atoi(temp->content))
				return (0);
			temp = temp->next;
		}
		*stack_a = (*stack_a)->next;
	}
	return (1);
}

t_list	*ft_mid_node(t_list **stack_a)
{
	t_list	*mid;
	t_list	*temp;

	temp = *stack_a;
	mid = *stack_a;
	while (temp && temp->next)
	{
		mid = mid->next;
		temp = temp->next->next;
	}
	return (mid);
}

void	ft_push_all_into_b(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		max;
	int		mid;
	t_list	*head;
	t_list	*temp;

	head = *stack_a;
	ft_merge_sort(stack_a);
	temp = *stack_a;
	min = ft_atoi((*stack_a)->content);
	max = ft_atoi(ft_lstlast(*stack_a)->content);
	mid = ft_atoi(ft_mid_node(stack_a)->content);
	while (temp)
	{
		if (ft_atoi(temp->content) < mid)
			ft_pb(&temp, stack_b);
		else if (ft_atoi(temp->content) > mid)
		{
			ft_pb(&temp, stack_b);
			ft_rb(stack_b);
		}
		temp = temp->next;
	}
}
