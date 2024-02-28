/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:49:48 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:41:59 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
    {
        return (0);
    }
    if (nb == 2)
    {
        return (1);
    }
    while (i < nb)
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
    {
        return (2);
    }
    while ((2147483647 > nb) && (!ft_is_prime(nb)))
    {
        nb++;
    }
    return (nb);
}
