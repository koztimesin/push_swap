/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_into_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:07:47 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/19 19:45:59 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**ft_free_space(char **dest)
{
	int	j;

	j = 0;
	while (dest[j])
		free(dest[j++]);
	free(dest);
	return (NULL);
}

void	ft_input_into_stack(t_list **stack_a, int argc, char **argv)
{
	int		i;
	int		j;
	char	**temp;

	ft_is_valid(argc, argv);
	i = 0;
	while (++i < argc)
	{
		temp = ft_split(argv[i], ' ');
		j = -1;
		while (temp[++j])
			ft_lstadd_back(stack_a, ft_lstnew(ft_strdup(temp[j])));
		ft_free_space(temp);
	}
	ft_check_duplicate(stack_a);
	ft_check_range(stack_a);
}
