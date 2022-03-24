/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:59:43 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/24 16:21:06 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_stack_sorted(t_list *stack_a)
{
	t_list	*temp;

	while (stack_a)
	{
		temp = stack_a->next;
		while (temp)
		{
			if (ft_atoi(stack_a->content) > ft_atoi(temp->content))
				return (0);
			temp = temp->next;
		}
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_push_all_into_b(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		max;
	int		mid;
	int		size;

	size = ft_lstsize(*stack_a);
	ft_find_integers(&min, &mid, &max, *stack_a);
	while (size > 2)
	{
		if (ft_atoi((*stack_a)->content) != min
			&& ft_atoi((*stack_a)->content) != max)
		{
			if (ft_atoi((*stack_a)->content) > mid)
			{
				ft_pb(stack_a, stack_b);
				ft_rb(stack_b);
			}
			else
				ft_pb(stack_a, stack_b);
			size--;
		}
		else
			ft_ra(stack_a);
	}
}

void	ft_final(t_list **stack_a)
{
	int		min;

	if (!ft_is_stack_sorted(*stack_a))
	{
		ft_find_integers(&min, NULL, NULL, *stack_a);
		if (ft_lstsize(ft_min(*stack_a)) > ft_lstsize(*stack_a) / 2)
			while (ft_atoi((*stack_a)->content) != min)
				ft_ra(stack_a);
		else
			while (ft_atoi((*stack_a)->content) != min)
				ft_rra(stack_a);
	}
}

void	ft_push_all_into_a(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b)
	{
		ft_two_nodes(stack_a, stack_b,
			get_best_node(stack_a, stack_b));
		ft_pa(stack_a, stack_b);
	}
}
