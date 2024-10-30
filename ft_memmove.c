/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 16:29:17 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/29 15:40:20 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (s <= d)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		while (n-- > 0)
			*(d++) = *(s++);
	return (dst);
}
