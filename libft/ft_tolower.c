/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isalpha.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 15:22:58 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/15 15:56:08 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
