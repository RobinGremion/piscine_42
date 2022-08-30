/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robingremion <robingremion@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 00:08:31 by robingremio       #+#    #+#             */
/*   Updated: 2022/08/31 00:31:48 by robingremio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_countstr(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		returnvalue;
	char		*d;

	d = dst;
	j = ft_countstr(src);
	k = 0;
	while (dst[k] != '\0')
		k ++;
	if (dstsize > k)
		returnvalue = k + j;
	else
		returnvalue = dstsize + j;
	if (dstsize == 0)
		return (j);
	i = 0;
	while (k + 1 < dstsize && src[i++] != '\0')
	{
		d[k] = src[i];
		k ++;
	}
	d[k] = '\0';
	return (returnvalue);
}
