/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:35:45 by robingremio       #+#    #+#             */
/*   Updated: 2022/08/30 11:17:55 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	sizetemp;

	i = 0;
	temp = 0;
	sizetemp = size;
	size --;
	while (i < (sizetemp / 2))
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size --;
		i ++;
	}
}
