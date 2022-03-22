/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:41:25 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/22 16:45:12 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr_actions(t_list *stack, t_list *node)
{
	return (ft_lstsize(stack) - ft_lstsize(node));
}

int	rrr_actions(t_list *stack, t_list *node)
{
	return (ft_lstsize(stack));
}
