/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:31:39 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/04 20:27:19 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stack_a)
{
	t_list	*head;

	if ((*stack_a) && (*stack_a)->next)
	{
		head = *stack_a;
		*stack_a = (*stack_a)->next;
		head->next = (*stack_a)->next;
		(*stack_a)->next = head;
		write(1, "sa\n", 3);
	}
}

// void	ft_sb(t_list **stack_b)
// {
// 	t_list	*head;

// 	if ((*stack_b) && (*stack_b)->next)
// 	{
// 		head = *stack_b;
// 		*stack_b = (*stack_b)->next;
// 		head->next = (*stack_b)->next;
// 		(*stack_b)->next = head;
// 		write(1, "sb\n", 3);
// 	}
// }

// void	ft_ss(t_list **stack_a, t_list **stack_b)
// {
// 	ft_sa(stack_a);
// 	ft_sb(stack_a);
// }
