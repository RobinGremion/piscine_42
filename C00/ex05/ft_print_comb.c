/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:06:14 by robingremio       #+#    #+#             */
/*   Updated: 2022/08/18 18:49:30 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_loop(char c, char d, char u)
{
	ft_putchar((char) c);
	ft_putchar((char) d);
	ft_putchar((char) u);
	if (c != '7' || d != '8' || u != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		ft_print_loop (c, d, u);
		if (d == '8' && u == '9')
		{
			c = c + 1;
			d = '2';
			u = '3';
		}
		else if (u == '9')
		{
			d = d + 1;
			u = d + 1;
		}
		else
			u = u + 1;
	}
}
