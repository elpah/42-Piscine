/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:51:11 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 11:44:48 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
    int start;
    int end;
    int temp;

    start = 0;
    end = size - 1;
    while (end > start)
    {
        temp = tab[end];
        tab[end] = tab[start];
        tab[start] = temp;
        end--;
        start++;
    }
}
