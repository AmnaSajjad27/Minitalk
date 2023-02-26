/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:41:20 by ajordan-          #+#    #+#             */
/*   Updated: 2023/02/25 15:25:17 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The tolower() function converts an upper-case letter to the corresponding 
*	lower-case letter.  The argument must be representable as an unsigned char 
*	or the value of EOF.
*	PARAMETERS
*	#1. The character to convert.
*	RETURN VALUES
*	If the argument is an upper-case letter, the tolower() function returns the 
*	corresponding lower-case letter if there is one; otherwise, the argument 
*	is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
