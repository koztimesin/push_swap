/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hrenznaet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:57:48 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/19 21:19:36 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_min(t_list *stack_a)
{
	t_list	*temp;
	t_list	*result;

	temp = stack_a;
	result = temp;
	while (temp)
	{
		if (ft_atoi(temp->content) < ft_atoi(result->content))
			result = temp;
		temp = temp->next;
	}
	return (result);
}

t_list	*ft_max(t_list *stack_a)
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
