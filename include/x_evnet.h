/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_evnet.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 23:21:24 by jaeskim           #+#    #+#             */
/*   Updated: 2020/12/07 23:25:06 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef X_EVENT_H
# define X_ENVENT_H

# define X_KEY_PRESS 2
# define X_KEY_RELEASE 3
# define X_DESTROY_NOTIFY 17

# ifdef __APPLE__
#  define X_KEY_PRESS_MASK 0
#  define X_KEY_RELEASE_MASK 0
#  define X_STRUCTURE_NOTIFY_MASK 0
# else
#  define X_KEY_PRESS_MASK 1L<<0
#  define X_KEY_RELEASE_MASK 1L<<1
#  define X_STRUCTURE_NOTIFY_MASK 1L<<17
# endif

#endif
