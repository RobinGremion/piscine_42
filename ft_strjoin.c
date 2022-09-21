/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:27:33 by robingremio       #+#    #+#             */
/*   Updated: 2022/09/21 22:28:06 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		indextab;

	tab = malloc(sizeof(strs));
	i = 0;
	indextab = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			tab[indextab++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			tab[indextab++] = sep[j++];
		}
		i++;
	}
	tab[indextab] = '\0';
	return (tab);
}
/*
int	main(void)
{
	char	*tab[3];
	tab[0] = "Jean ";
	tab[1] = " Pierre ";
	tab[2] = " Pernault ";
	printf("%s", ft_strjoin(3, tab, "-"));
	return (0);
}*/
