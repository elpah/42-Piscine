
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:52:48 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/22 00:09:40 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    unsigned int result;

    if (nb < 1)
        return (0);
    result = 1;
    while (result * result < (unsigned int)nb)
    {
        result++;
    }
    if (result * result == (unsigned int)nb)
        return (result);
    else
        return (0);
}
