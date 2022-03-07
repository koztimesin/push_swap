/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:30:57 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/07 21:09:06 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_a_size;
	t_list	*temp;

	stack_a = NULL;
	stack_b = NULL;
	ft_input_into_stack(&stack_a, argc, argv);
	temp = stack_a;
	stack_a_size = ft_lstsize(stack_a);
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
	printf("-----------------------------------\n");
	ft_ra(&stack_a);
	while (stack_a)
	{
		printf("%s\n", stack_a->content);
		stack_a = stack_a->next;
	}
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	ft_lstclear(&temp, free);
}

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;
// 	int		stack_a_size;

// 	stack_a = NULL;
// 	stack_b = NULL;
// 	ft_input_into_stack(&stack_a, argc, argv);
// 	stack_a_size = ft_lstsize(stack_a);
// 	if (!ft_is_stack_sorted(&stack_a))
// 		if (stack_a_size == 2)
// 			ft_sa(&stack_a);
// 	ft_lstclear(&stack_a, free);
// }
