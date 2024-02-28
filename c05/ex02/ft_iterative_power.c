/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:01:28 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:37:29 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int copy_nb;

    copy_nb = nb;
    if (power < 0)
    {
        return (0);
    }
    else if (power == 0)
    {
        return (1);
    }
    while (power > 1)
    {
        copy_nb *= nb;
        power--;
    }
    return (copy_nb);
}
