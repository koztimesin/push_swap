/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_node_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:41:53 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 17:42:37 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_node(t_list **src, t_list **dest)
{
	t_list	*temp;

	temp = *src;
	*src = (*src)->next;
	temp->next = NULL;
	ft_lstadd_front(dest, ft_lstnew(ft_strdup(temp->content)));
	ft_lstclear(&temp, free);
}

void	ft_pa_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_b)
		ft_push_node(stack_b, stack_a);
}

void	ft_pb_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		ft_push_node(stack_a, stack_b);
}
