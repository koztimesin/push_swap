/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:31:07 by ksaffron          #+#    #+#             */
/*   Updated: 2022/03/04 20:24:50 by ksaffron         ###   ########.fr       */
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
int		ft_is_stack_sorted(t_list **stack_a);

#endif
