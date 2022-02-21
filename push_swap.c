/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:30:57 by ksaffron          #+#    #+#             */
/*   Updated: 2022/02/21 17:30:06 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// int	*stack_a;
	// int	*stack_b;
	int	count = 0;
	if (argc != 1)
	{
		//ft_error();
		while (argv[count] != NULL)
		{
			count++;
		}
		printf("%d", count);
	}
	else
		write(1, "Error\n", 6);
}
