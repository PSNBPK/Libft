/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 17:09:57 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/29 14:30:18 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	const char	*nbr;

	len = ft_nbrlen(n);
	str = malloc(sizeof(char) * (len + 1));
	nbr = "0123456789";
	if (!str)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--len] = nbr[n % 10];
		else
			str[--len] = nbr[n % 10 * -1];
		n /= 10;
	}
	return (str);
}
