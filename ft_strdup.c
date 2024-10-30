/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 16:58:54 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/29 15:25:08 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(s1);
	dest = (char *)malloc(sizeof(*s1) * i + 1);
	if (dest == 0)
	{
		return (NULL);
	}
	ft_memcpy(dest, s1, i);
	dest[i] = '\0';
	return (dest);
}
