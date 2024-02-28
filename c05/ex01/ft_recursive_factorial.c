/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:55:57 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:36:14 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb <= -1)
    {
        return (0);
    }
    else if (nb <= 1)
    {
        return (1);
    }
    else if (nb > 0)
    {
        nb *= ft_recursive_factorial(nb - 1);
    }
    return (nb);
}
