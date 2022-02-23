/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:18:52 by ksaffron          #+#    #+#             */
/*   Updated: 2022/02/23 16:18:19 by ksaffron         ###   ########.fr       */
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
			if (!((ft_isdigit(argv[i][j])) || argv[i][j] == ' ' ||
			(argv[i][j] == '-' && ft_isdigit(argv[i][j + 1]))))
				ft_error();
			j++;
		}
		i++;
	}
}
