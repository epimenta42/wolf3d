/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 01:50:54 by epimenta          #+#    #+#             */
/*   Updated: 2017/09/19 01:53:08 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf.h"

void		stop_music(int keycode)
{
	if (keycode == 45)
		system("killall afplay > /dev/null 2>&1");
}

int			music_play(int keycode)
{
	stop_music(keycode);
	return (0);
}
