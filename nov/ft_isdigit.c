/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmannage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:18:11 by nmannage          #+#    #+#             */
/*   Updated: 2024/11/26 14:06:43 by nmannage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int c)
{
	char	a;

	a = (char)c;
	if (a >= '0' && a <= '9')
		return (2048);
	return (0);
}
//
//int	main(void)
//{
//	printf("%d", ft_isdigit('6'));
//	return (0);
//}