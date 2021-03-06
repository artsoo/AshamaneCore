/*
 * Copyright (C) 2017-2018 AshamaneProject <https://github.com/AshamaneProject>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_SEAT_OF_TRIUMVIRATE_H
#define DEF_SEAT_OF_TRIUMVIRATE_H

#define SoTScriptName "instance_seat_of_triumvirate"
#define DataHeader    "SOT"

uint32 const EncounterCount = 4;

enum EOADataTypes
{
    DATA_ZURAAL_THE_ASCENDED    = 0,
    DATA_SAPRISH                = 1,
    DATA_VICEROY_NEZHAR         = 2,
    DATA_LURA                   = 3
};

enum EOACreatureIds
{
    NPC_ZURAAL_THE_ASCENDED = 122313,
    NPC_SAPRISH             = 122316,
    NPC_VICEROY_NEZHAR      = 124309,
    NPC_LURA                = 122314
};

#endif // DEF_SEAT_OF_TRIUMVIRATE_H
