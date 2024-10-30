/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 16:54:29 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/29 15:42:50 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*array;
	size_t		s;

	if (count == 0 || size == 0)
		return (malloc(0));
	s = count * size;
	if (count != s / size)
		return (NULL);
	array = (void *)malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, count * size);
	return (array);
}
