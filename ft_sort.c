/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:59:43 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/14 18:37:31 by ksaffron         ###   ########.fr       */
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
		ft_ra(stack_a);
	}
}

static	void	ft_final(t_list **stack_a)
{
	int	min;

	ft_find_integers(&min, NULL, NULL, *stack_a);
	while (ft_atoi((*stack_a)->content) != min)
		ft_ra(stack_a);
}

void	ft_push_all_into_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;

	i = ft_lstsize(*stack_a) + ft_lstsize(*stack_b);
	j = 2;
	while (j != i)
	{
		if (ft_atoi((*stack_a)->content) > ft_atoi((*stack_b)->content)
			&& ft_atoi(ft_lstlast(*stack_a)->content) \
			< ft_atoi((*stack_b)->content))
		{
			ft_pa(stack_a, stack_b);
			j++;
		}
		else
			ft_ra(stack_a);
	}
	ft_final(stack_a);
}
