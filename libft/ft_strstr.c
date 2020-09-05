/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldediu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:01:57 by ldediu            #+#    #+#             */
/*   Updated: 2019/10/02 16:57:45 by ldediu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[n] && needle[n] && haystack[i])
		{
			i++;
			n++;
		}
		if (n == ft_strlen(needle))
			return ((char *)(haystack + i - n));
		i = i - n + 1;
		n = 0;
	}
	return (NULL);
}
