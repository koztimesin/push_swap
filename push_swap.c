/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:30:57 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/24 16:04:52 by ksaffron         ###   ########.fr       */
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
			ft_sort_five(&stack_a, &stack_b);
		}
		else
		{
			ft_push_all_into_b(&stack_a, &stack_b);
			ft_push_all_into_a(&stack_a, &stack_b);
		}
		ft_final(&stack_a);
	}
	ft_lstclear(&stack_a, free);
}
