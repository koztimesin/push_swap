/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:18:52 by ksaffron          #+#    #+#             */
/*   Updated: 2022/02/23 20:39:16 by ksaffron         ###   ########.fr       */
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

void	ft_check_duplicates(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[++j])
			if ((ft_atoi(argv[i]) == ft_atoi(argv[j]) && i != j))
				ft_error();
	}
}

static long	ft_new_atoi(char *argv)
{
	long		num;
	int			minus;
	int			i;

	i = 0;
	minus = 1;
	if (argv[i] == '-')
	{
		minus = -1;
		i++;
	}
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		num = (num * 10) + (argv[i] - '0');
		i++;
	}
	return (num * minus);
}

void	ft_check_range(char **argv)
{
	int		i;
	long	num;

	i = 0;
	while (argv[++i])
	{
		num = ft_new_atoi(argv[i]);
		if (num > 2147483647 || num < -2147483648)
			ft_error();
	}
}
