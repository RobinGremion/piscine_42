/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:50:47 by robingremio       #+#    #+#             */
/*   Updated: 2022/08/30 23:55:52 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				countsrc;
	int				countdst;
	char			*d;

	d = dest;
	i = 0;
	countsrc = 0;
	countdst = 0;
	while (dest[countdst] != '\0')
		countdst ++;
	while (src[i] != '\0' && i < nb)
	{
		d[countdst] = src [i];
		i ++;
		countdst ++;
	}
	d[countdst] = '\0';
	return (d);
}
