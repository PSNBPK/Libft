/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/10 16:27:15 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/16 13:34:00 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *tmp_ptr;

    tmp_ptr = (char *) s;

    while (n > 0)
    {
        *(tmp_ptr++) = 0;
        n--;
    }
}
