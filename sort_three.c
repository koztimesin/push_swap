/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:39:40 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/22 16:21:04 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_max(t_list *stack_a)
{
	t_list	*temp;
	t_list	*result;

	temp = stack_a;
	result = temp;
	while (temp)
	{
		if (ft_atoi(temp->content) > ft_atoi(result->content))
			result = temp;
		temp = temp->next;
	}
	return (result);
}

void	ft_sort_three(t_list **stack_a)
{
	if (!(ft_max(*stack_a)->next))
	{
		if (ft_atoi((*stack_a)->content) > ft_atoi((*stack_a)->next->content))
			ft_sa(stack_a);
	}
	else if (ft_max(*stack_a) == *stack_a)
	{
		ft_ra(stack_a);
		ft_sort_three(stack_a);
	}
	else
	{
		ft_rra(stack_a);
		ft_sort_three(stack_a);
	}
}
