/*	sndopenmaxal.cpp
	Copyright (C) 2017 The nds4droid team

	This file is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	This file is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with the this software.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "SPU.h"
#include "sndopenmaxal.h"
#include "main.h"

#include <OMXAL/OpenMAXAL.h>
#include <OMXAL/OpenMAXAL_Android.h>

int SNDOpenMXALInit(int buffersize);
void SNDOpenMXALDeInit();
void SNDOpenMXALUpdateAudio(s16 *buffer, u32 num_samples);
u32 SNDOpenMXALGetAudioSpace();
void SNDOpenMXALMuteAudio();
void SNDOpenMXALUnmuteAudio();
void SNDOpenMXALSetVolume(int volume);
void SNDOpenMXALClearAudioBuffer();

SoundInterface_struct SNDOpenMXAL = {

};