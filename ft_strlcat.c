/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 23:31:39 by ksonu             #+#    #+#             */
/*   Updated: 2018/03/06 22:51:53 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;

	d = ft_strlen(dst);
	i = 0;
	if (dstsize > d)
	{
		while (src[i] != '\0')
		{
			if (i < dstsize)
			{
				dst[d] = src[i];
				d++;
			}
			i++;
		}
		return (dstsize - d - 1);
	}
	if (dstsize <= d)
		return (ft_strlen(src) + dstsize);
	return (0);
}
