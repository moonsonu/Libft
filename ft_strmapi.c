/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:25:40 by ksonu             #+#    #+#             */
/*   Updated: 2018/03/07 14:33:06 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		a;

	a = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (*s || *f)
	{
		if (str)
		{
			while (s[a])
			{
				str[a] = f(a, s[a]);
				a++;
			}
			str[a] = '\0';
		}
		return (str);
	}
	return (0);
}
