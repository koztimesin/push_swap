/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:22:08 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/27 15:38:17 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_bubble_sort(int	*arr, int *i)
{
	int	temp;

	temp = 0;
	if (arr[*i] > arr[*i + 1])
	{
		temp = arr[*i];
		arr[*i] = arr[*i + 1];
		arr[*i + 1] = temp;
		*i = -1;
	}
}

void	ft_find_integers(int *min, int *mid, int *max, t_list *stack)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	size = ft_lstsize(stack);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (i < size && stack)
	{
		arr[i++] = ft_atoi(stack->content);
		stack = stack->next;
	}
	i = -1;
	while (++i < size - 1)
		ft_bubble_sort(arr, &i);
	if (min)
		*min = arr[0];
	if (max)
		*max = arr[size - 1];
	if (mid)
		*mid = arr[size / 2];
	free(arr);
}
