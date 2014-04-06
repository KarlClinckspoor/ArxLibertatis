/*
 * Copyright 2014 Arx Libertatis Team (see the AUTHORS file)
 *
 * This file is part of Arx Libertatis.
 *
 * Arx Libertatis is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Arx Libertatis is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Arx Libertatis.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ARX_GAME_MAGIC_PRECAST_H
#define ARX_GAME_MAGIC_PRECAST_H

#include <string>

#include "game/magic/Spell.h"


struct PRECAST_STRUCT {
	SpellType typ;
	long level;
	unsigned long launch_time;
	SpellcastFlags flags;
	long duration;
};

const size_t MAX_PRECAST = 3;
extern PRECAST_STRUCT Precast[MAX_PRECAST];

void ARX_SPELLS_Precast_Reset();

void ARX_SPELLS_Precast_Add(SpellType typ, long _level, SpellcastFlags flags, long duration);
void ARX_SPELLS_Precast_Launch(long num);
void ARX_SPELLS_Precast_Check();

#endif // ARX_GAME_MAGIC_PRECAST_H
