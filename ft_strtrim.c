/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:36:31 by ksonu             #+#    #+#             */
/*   Updated: 2018/03/04 23:10:34 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s);
	while (s[len] == '\0' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (s[i] == '\0' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		len--;
	}
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	while (*s)
		str[j++] = s[i++];
	return (str);
}
