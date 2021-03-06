/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:31:07 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 17:22:32 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

void	ft_error(void);
void	ft_input_into_stack(t_list **stack_a, int argc, char **argv);
void	ft_is_valid(int argc, char **argv);
void	ft_check_duplicate(t_list **stack_a);
void	ft_check_range(t_list **stack_a);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
int		ft_is_stack_sorted(t_list *stack_a);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_push_all_into_b(t_list **stack_a, t_list **stack_b);
void	ft_push_all_into_a(t_list **stack_a, t_list **stack_b);
void	ft_find_integers(int *min, int *mid, int *max, t_list *stack);
void	ft_sort_three(t_list **stack_a);
int		rr_actions(t_list *stack, t_list *node);
int		rrr_actions(t_list *stack, t_list *node);
t_list	*best_match(t_list **stack_a, t_list *node);
t_list	*get_best_node(t_list **stack_a, t_list **stack_b);
void	ft_two_nodes(t_list **stack_a, t_list **stack_b, t_list *node);
void	ft_final(t_list **stack_a);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
t_list	*ft_min(t_list *stack);

#endif
