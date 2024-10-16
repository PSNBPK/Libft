/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: patboonp <patboonp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 12:13:44 by patboonp      #+#    #+#                 */
/*   Updated: 2024/10/08 12:47:29 by patboonp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	return(0);
}
