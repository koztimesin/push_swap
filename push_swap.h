/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:31:07 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/11 17:31:17 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	ft_error(void);
void	ft_input_into_stack(t_list **stack_a, int argc, char **argv);
void	ft_is_valid(int argc, char **argv);
void	ft_check_duplicate(t_list **stack_a);
void	ft_check_range(t_list **stack_a);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
int		ft_is_stack_sorted(t_list **stack_a);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
t_list	*ft_mid_node(t_list **stack_a);
void	ft_merge_sort(t_list **stack);
t_list	*ft_mid_node(t_list **stack_a);
void	ft_push_all_into_b(t_list **stack_a, t_list **stack_b);

#endif
