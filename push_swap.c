/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:30:57 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/24 15:19:18 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	ft_input_into_stack(&stack_a, argc, argv);
	if (!(ft_is_stack_sorted(stack_a)))
	{
		if (ft_lstsize(stack_a) == 3)
			ft_sort_three(&stack_a);
		else if (ft_lstsize(stack_a) == 5)
		{
			ft_push_all_into_b(&stack_a, &stack_b);
			if ((stack_a) == ft_min(stack_a))
				ft_rr(&stack_a, &stack_b);
			ft_sort_five(&stack_b);
			while (stack_b)
				ft_pa(&stack_a, &stack_b);
			ft_rra(&stack_a);
		}
		else
		{
			ft_push_all_into_b(&stack_a, &stack_b);
			while (stack_b)
			{
				ft_two_nodes(&stack_a, &stack_b, get_best_node(&stack_a, &stack_b));
				ft_pa(&stack_a, &stack_b);
			}
		}
		ft_final(&stack_a);
	}
	ft_lstclear(&stack_a, free);
}
