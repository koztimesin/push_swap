/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:59:43 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/11 16:32:57 by ksaffron         ###   ########.fr       */
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

// t_list	*ft_mid_node(t_list **stack_a)
// {
// 	t_list	*mid;
// 	t_list	*temp;

// 	temp = *stack_a;
// 	mid = *stack_a;
// 	while (trash && trash->next)
// 	{
// 		temp = temp->next;
// 		trash = trash->next->next;
// 	}
// 	return (temp);
// }

// void	ft_push_all_into_b(t_list **stack_a, t_list **stack_b, int median)
// {
// 	t_list	*min;
// 	t_list	*max;
// 	t_list	*avg;
// 	t_list	*head;
// 	int		i;

// 	i = 1;
// 	head = *stack_a;
// 	min = *stack_a;
// 	avg = *stack_a;
// 	max = ft_lstlast(*stack_a);
// 	while (i++ <= median)
// 		avg = avg->next;
// 	while ()
// }
