/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 16:42:43 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/29 15:02:14 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			sc;

	sc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == sc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == sc)
		return ((char *) &s[i]);
	return (NULL);
}
