/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:20:29 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 18:26:45 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap_bonus.h"

static int	ft_is_stack_sorted_pb(t_list *stack_a)
{
	t_list	*temp;

	while (stack_a)
	{
		temp = stack_a->next;
		while (temp)
		{
			if (ft_atoi(stack_a->content) > ft_atoi(temp->content))
				return (0);
			temp = temp->next;
		}
		stack_a = stack_a->next;
	}
	return (1);
}

static void	ft_action(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strncmp(str, "sa\n", ft_strlen(str)))
		ft_sa_b(stack_a);
	else if (!ft_strncmp(str, "sb\n", ft_strlen(str)))
		ft_sb_b(stack_b);
	else if (!ft_strncmp(str, "ss\n", ft_strlen(str)))
		ft_ss_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "pa\n", ft_strlen(str)))
		ft_pa_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "pb\n", ft_strlen(str)))
		ft_pb_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "ra\n", ft_strlen(str)))
		ft_ra_b(stack_a);
	else if (!ft_strncmp(str, "rb\n", ft_strlen(str)))
		ft_rb_b(stack_b);
	else if (!ft_strncmp(str, "rr\n", ft_strlen(str)))
		ft_rr_b(stack_a, stack_b);
	else if (!ft_strncmp(str, "rra\n", ft_strlen(str)))
		ft_rra_b(stack_a);
	else if (!ft_strncmp(str, "rrb\n", ft_strlen(str)))
		ft_rrb_b(stack_b);
	else if (!ft_strncmp(str, "rrr\n", ft_strlen(str)))
		ft_rrr_b(stack_a, stack_b);
	else
		ft_error();
}

static void	ft_read(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (!str)
			return ;
		if (!str || *str == '\n')
			ft_error();
		else
			ft_action(stack_a, stack_b, str);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_b;
	t_list	*stack_a;

	stack_a = NULL;
	stack_b = NULL;
	ft_input_into_stack(&stack_a, argc, argv);
	ft_read(&stack_a, &stack_b);
	if (ft_is_stack_sorted_pb(stack_a))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
}
