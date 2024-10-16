/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 13:21:50 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/10 16:18:09 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp_ptr;

    tmp_ptr = (unsigned char *) b;

    while (len > 0)
    {
        *(tmp_ptr++) = (unsigned char) c;
        len--;
    }
    return(b);
}