/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:20:39 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 17:42:00 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "./get_next_line/get_next_line.h"
# include "./libft/libft.h"

void	ft_sa_b(t_list **stack_a);
void	ft_sb_b(t_list **stack_b);
void	ft_ss_b(t_list **stack_a, t_list **stack_b);
void	ft_ra_b(t_list **stack_a);
void	ft_rb_b(t_list **stack_b);
void	ft_rr_b(t_list **stack_a, t_list **stack_b);
void	ft_rra_b(t_list **stack_a);
void	ft_rrb_b(t_list **stack_b);
void	ft_rrr_b(t_list **stack_a, t_list **stack_b);
void	ft_pa_b(t_list **stack_a, t_list **stack_b);
void	ft_pb_b(t_list **stack_a, t_list **stack_b);

#endif
