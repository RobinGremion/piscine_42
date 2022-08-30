/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:41:01 by robingremio       #+#    #+#             */
/*   Updated: 2022/08/17 15:46:53 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;
	int		i;

	letter = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &letter, 1);
		i++;
		letter ++;
	}
}
