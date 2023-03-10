/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalin-b <acalin-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:23:35 by acalin-b          #+#    #+#             */
/*   Updated: 2023/03/08 19:54:17 by acalin-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <unistd.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d ", ft_isascii('a'));
// 	printf("%d ", ft_isascii('1'));
// 	printf("%d ", ft_isascii('2'));
// 	printf("%d ", ft_isascii('='));
// 	return (0);
// }
