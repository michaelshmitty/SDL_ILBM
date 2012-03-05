/** 
 * Copyright (c) 2012 Sander van der Burg
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software in a
 * product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * Sander van der Burg <svanderburg@gmail.com>
 */

#ifndef __SDL_ILBM_IMAGE_H
#define __SDL_ILBM_IMAGE_H

#include <SDL.h>
#include <libilbm/ilbmimage.h>

SDL_Surface *SDL_ILBM_createChunkySurface(ILBM_Image *image, SDL_Color *colors, unsigned int colorsLength);

void SDL_ILBM_updatePalette(SDL_Color *colors, unsigned int colorsLength, SDL_Surface *picture, SDL_Surface *screen, int xOffset, int yOffset);

void SDL_ILBM_drawPicture(SDL_Surface *src, SDL_Surface *dest, int xOffset, int yOffset);

SDL_Surface *SDL_ILBM_createRGBASurface(ILBM_Image *image);

#endif
