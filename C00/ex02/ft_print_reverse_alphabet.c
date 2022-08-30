/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:47:30 by robingremio       #+#    #+#             */
/*   Updated: 2022/08/18 11:23:08 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	int		i;

	letter = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &letter, 1);
		i++;
		letter --;
	}
}
