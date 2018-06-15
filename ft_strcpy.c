/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkwanaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:23:01 by lmkwanaz          #+#    #+#             */
/*   Updated: 2018/05/28 08:43:08 by lmkwanaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int l;

	l = 0;
	while (src[l] != '\0')
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	return (dst);
}
