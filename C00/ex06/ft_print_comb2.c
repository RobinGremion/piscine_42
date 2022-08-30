/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:51:14 by robingremio       #+#    #+#             */
/*   Updated: 2022/08/18 19:05:55 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}


void	ft_print_comb2(void)
{
	int nb;
	int nb2;

	nb = 0;
	nb2 = 0;
	while(nb2 <= 99)
	{
		while(nb < 99)
		{
			if (nb <= 9)
				ft_putchar('0');
			ft_putnbr(nb);
			ft_putchar(' ');
			if(nb2 <= 9)
				ft_putchar('0');
			ft_putnbr(nb2);
			ft_putchar(' ');
			nb ++;
		}
		nb2 ++;
		nb = 0;
	}
}

int	main(void)
{
	ft_print_comb2();
}