/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:51:37 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/24 16:12:43 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_min(t_list	*stack)
{
	t_list	*temp;
	t_list	*result;

	temp = stack;
	result = temp;
	while (temp)
	{
		if (ft_atoi(temp->content) < ft_atoi(result->content))
			result = temp;
		temp = temp->next;
	}
	return (result);
}

static void	ft_sort_b(t_list **stack)
{
	if (!(ft_min(*stack)->next))
	{
		if (ft_atoi((*stack)->content) < ft_atoi((*stack)->next->content))
			ft_sb(stack);
	}
	else if (ft_min(*stack) == (*stack))
	{
		ft_rb(stack);
		ft_sort_b(stack);
	}
	else
	{
		ft_rrb(stack);
		ft_sort_b(stack);
	}
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a) == ft_min(*stack_a))
		ft_rr(stack_a, stack_b);
	ft_sort_b(stack_b);
	while (*stack_b)
		ft_pa(stack_a, stack_b);
	ft_rra(stack_a);
}
