/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 22:50:25 by ksonu             #+#    #+#             */
/*   Updated: 2018/03/05 00:49:44 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		itoa_len(int n)
{
	int		len;
	int		negative;

	len = 1;
	negative = 0;
	if (n < 0)
	{
		n *= -1;
		negative = 1;
	}
	len += negative;
	while (n /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char	*rc;
	int		len;
	int		c;

	c = n;
	len = itoa_len(n);
	rc = (char *)malloc(sizeof(char) * len);
	rc[len] = '\0';
	if (n < 0)
		n *= -1;
	while (len--)
	{
		rc[len] = n % 10 + '0';
		n /= 10;
	}
	if (c < 0)
		rc[0] = '-';
	return (rc);
}
