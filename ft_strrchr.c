/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:52:55 by aramos            #+#    #+#             */
/*   Updated: 2024/12/03 11:19:03 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *const	ptr = s;

	if (s == NULL || c < 0)
		return (NULL);
	if (c == 0 && s[ft_strlen(s)] == '\0')
		return ((char *)(s + ft_strlen(s)));
	s += ft_strlen(s);
	while (s >= ptr)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
//
//int	main(void)
//{
//	const char	s[] = "murcielago gris";
//
//	printf("%s", ft_strrchr(s, (int)'i'));
//	return (0);
//}
