/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:59:43 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/05 14:41:13 by ksaffron         ###   ########.fr       */
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
