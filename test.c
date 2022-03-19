/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:12:08 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/18 19:03:58 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mean(t_list *stack)
{
	t_list	*temp;
	int	mean;

	temp = stack;
	mean = 0;
	while (temp)
	{
		mean += ft_atoi(temp->content);
		temp = temp->next;
	}
	return (mean / ft_lstsize(stack));
}

static void	ft_hren(t_list **stack_a, t_list **stack_b, int mean)
{
	int	min;

	ft_find_integers(&min, NULL, NULL, *stack_b);
	ft_pb(stack_a, stack_b);
	if (ft_lstsize(stack_b) > 1)
	{
		if (ft_atoi((*stack_b)->content) < min)
			ft_rb(stack_b);
		else if (ft_atoi((*stack_b)->content) < mean)
			ft_rb(stack_b);
	}
}

void	hz(t_list **stack_a, t_list **stack_b, int mean)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size > 3)
	{
		if (ft_atoi((*stack_a)->content) <= ft_mean(stack_a))
			ft_hren(stack_a, stack_a, mean);
		else
			ft_ra(stack_a);
		hz(stack_a, stack_b, mean);
	}
}
