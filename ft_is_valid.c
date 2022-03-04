/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:18:52 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/04 16:33:01 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_valid(int argc, char **argv)
{
	int	len;
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		ft_error();
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		if (!(len))
			ft_error();
		j = 0;
		while (argv[i][j])
		{
			if ((!ft_isdigit(argv[i][j]) && argv[i][j] != ' ' &&
			argv[i][j] != '-') || (argv[i][j] != ' ' &&
			argv[i][j + 1] == '-') || (argv[i][j] == '-' &&
			!ft_isdigit(argv[i][j + 1])))
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_check_duplicate(t_list **stack_a)
{
	t_list	*temp;
	t_list	*musor;

	temp = *stack_a;
	while (temp)
	{
		musor = temp->next;
		while (musor)
		{
			if (ft_atoi(temp->content) == ft_atoi(musor->content))
				ft_error();
			musor = musor->next;
		}
		temp = temp->next;
	}
}

void	ft_check_range(t_list **stack_a)
{
	t_list	*temp;
	int		num;
	int		num_length;

	temp = *stack_a;
	while (temp)
	{
		num_length = 0;
		num = ft_atoi(temp->content);
		if (num == 0)
			num_length++;
		if (num < 0)
			num_length++;
		while (num)
		{
			num /= 10;
			num_length++;
		}
		if ((int)ft_strlen(temp->content) != num_length)
			ft_error();
		temp = temp->next;
	}
}
