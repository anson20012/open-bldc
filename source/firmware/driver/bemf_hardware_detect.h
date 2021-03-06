/*
 * Open-BLDC - Open BrushLess DC Motor Controller
 * Copyright (C) 2010 by Piotr Esden-Tempski <piotr@esden.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __BEMF_HARDWARE_DETECT_H
#define __BEMF_HARDWARE_DETECT_H

enum bemf_hd_source {
	bemf_hd_phase_none,
	bemf_hd_phase_u_rising,
	bemf_hd_phase_u_falling,
	bemf_hd_phase_v_rising,
	bemf_hd_phase_v_falling,
	bemf_hd_phase_w_rising,
	bemf_hd_phase_w_falling
};

struct bemf_hd_data {
	enum bemf_hd_source source;
	bool trigger;
};

extern struct bemf_hd_data bemf_hd_data;

void bemf_hd_init(void);
void bemf_hd_reset(void);

#endif /* __BEMF_HARDWARE_DETECT_H */
