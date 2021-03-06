/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t fan_slow0_64x64x4[2048] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x89, 0x9a, 0xbb, 0xbb, 0xaa, 0x99, 0x87, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xab, 0xde, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xdb, 0x97, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x97, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xae, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x89, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xac, 0xcb, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xbc, 0xbb, 0xbb, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8a, 0xcb, 0xbb, 0xbb, 0xbb, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbb, 0xbb, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xcc, 0xbb, 0xbb, 0xbb, 0xbb, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x9b, 0xcb, 0xbb, 0xbb, 0xbb, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xac, 0xcb, 0xbb, 0xbb, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x89, 0xbc, 0xbb, 0xbb, 0xbb, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8a, 0xbc, 0xbb, 0xbb, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x9b, 0xcb, 0xbb, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xbc, 0xbb, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9b, 0xcb, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xcb, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x88, 0x87, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xac, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xab, 0xa8, 0x78, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9b, 0xbe, 0xff, 0xca, 0xab, 0xce, 0xfd, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xab, 0xcc, 0xca, 0x78, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcf, 0xd9, 0x77, 0x77, 0x79, 0xc8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x9b, 0xcc, 0xbb, 0xcb, 0x87, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xcc, 0x87, 0x77, 0x77, 0x77, 0x77, 0x88, 0x77, 0x77, 0x77, 0x77, 0x78, 0x9b, 0xcc, 0xbb, 0xbb, 0xcb, 0x87, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x79, 0xb8, 0x77, 0x8a, 0xcb, 0x97, 0x77, 0x8a, 0xa9, 0x88, 0x88, 0x89, 0xab, 0xcc, 0xbb, 0xbb, 0xbb, 0xbc, 0x97, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x99, 0xaa, 0x99, 0x98, 0x87, 0x77, 0x79, 0x97, 0x78, 0xdf, 0xff, 0xea, 0x77, 0x8a, 0xcb, 0xbb, 0xbb, 0xbb, 0xcc, 0xbb, 0xbb, 0xbb, 0xbb, 0xbc, 0x97, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x7a, 0xce, 0xff, 0xff, 0xff, 0xee, 0xdc, 0xa9, 0x88, 0x87, 0x8c, 0xff, 0xff, 0xfe, 0x97, 0x8c, 0xcb, 0xbc, 0xcc, 0xcb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbc, 0x97, 0x88,
  0x88, 0x88, 0x88, 0x78, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x77, 0x9f, 0xff, 0xff, 0xff, 0xb7, 0x7c, 0xfd, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbc, 0x97, 0x88,
  0x88, 0x88, 0x87, 0x8d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x77, 0x9f, 0xff, 0xff, 0xff, 0xc7, 0x7b, 0xff, 0xec, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbc, 0xcd, 0xcc, 0x97, 0x88,
  0x88, 0x88, 0x87, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x77, 0x8e, 0xff, 0xff, 0xff, 0xa7, 0x7b, 0xff, 0xff, 0xed, 0xdc, 0xcc, 0xcd, 0xde, 0xff, 0xff, 0xfe, 0x97, 0x88,
  0x88, 0x88, 0x78, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x87, 0x7b, 0xff, 0xff, 0xfd, 0x87, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x88,
  0x88, 0x88, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x78, 0xbe, 0xff, 0xc8, 0x77, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x88,
  0x88, 0x88, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd8, 0x77, 0x79, 0x99, 0x87, 0x78, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x88,
  0x88, 0x88, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x87, 0x77, 0x77, 0x77, 0x8c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x97, 0x88,
  0x88, 0x88, 0x78, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x97, 0x78, 0x7b, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x87, 0x88,
  0x88, 0x88, 0x78, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xca, 0x98, 0x7c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x78, 0x88,
  0x88, 0x88, 0x77, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xcc, 0xa8, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x78, 0x88,
  0x88, 0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0xbb, 0xca, 0x87, 0x78, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x78, 0x88,
  0x88, 0x88, 0x87, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbb, 0xbc, 0xa8, 0x78, 0x77, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xbb, 0xbb, 0x87, 0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xbb, 0xca, 0x78, 0x88, 0x87, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x87, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xbb, 0xbc, 0xb8, 0x78, 0x88, 0x87, 0x7c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xbb, 0xbc, 0xa8, 0x78, 0x88, 0x88, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x7c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xbb, 0xbc, 0x97, 0x88, 0x88, 0x88, 0x87, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x87, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x78, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbb, 0xbb, 0xbc, 0x97, 0x88, 0x88, 0x88, 0x87, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xbb, 0xbb, 0xbb, 0x87, 0x88, 0x88, 0x88, 0x87, 0x7c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xef, 0xff, 0xff, 0xff, 0xfc, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x78, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x77, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xeb, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7a, 0xff, 0xff, 0xff, 0xdb, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7a, 0xef, 0xff, 0xff, 0xff, 0xfb, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xae, 0xff, 0xff, 0xcb, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9d, 0xff, 0xff, 0xfd, 0x97, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xdf, 0xfd, 0xbb, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xac, 0xcb, 0x98, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8a, 0xcc, 0xbb, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8a, 0xbc, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x8a, 0xbc, 0xcb, 0xca, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x8a, 0xbb, 0xb9, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

extern const uint8_t fan_slow1_64x64x4[2048] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xbb, 0xba, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8a, 0xcb, 0xcc, 0xba, 0x88, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbc, 0xba, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbb, 0xbc, 0xca, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x9b, 0xcc, 0xa8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbb, 0xbd, 0xff, 0xd9, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x9d, 0xff, 0xff, 0xfd, 0x97, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbb, 0xcf, 0xff, 0xfe, 0xa7, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xea, 0x78, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbb, 0xdf, 0xff, 0xff, 0xfa, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbb, 0xef, 0xff, 0xff, 0xff, 0xa7, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x78, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x77, 0x88, 0x88, 0x88, 0x87, 0x8b, 0xbb, 0xbb, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x97, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x79, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 0x88, 0x88, 0x88, 0x87, 0x9c, 0xbb, 0xbb, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd8, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x88, 0x88, 0x88, 0x87, 0x9c, 0xbb, 0xbb, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x77, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x78, 0x88, 0x88, 0x78, 0xac, 0xbb, 0xbb, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x77, 0x88, 0x88, 0x78, 0xbc, 0xbb, 0xbd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x8d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x87, 0x88, 0x88, 0x7a, 0xcb, 0xbb, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x88, 0x87, 0x8b, 0xbb, 0xbb, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x87, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x78, 0x78, 0xac, 0xbb, 0xbe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x87, 0x88, 0x88,
  0x88, 0x88, 0x78, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x77, 0x8a, 0xcb, 0xbc, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x88, 0x88,
  0x88, 0x88, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x78, 0xac, 0xcc, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0x78, 0x88,
  0x88, 0x88, 0x7c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x78, 0x9a, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd8, 0x78, 0x88,
  0x88, 0x87, 0x8d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0x78, 0x77, 0x9b, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x78, 0x88,
  0x88, 0x87, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x87, 0x77, 0x77, 0x77, 0x8d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x78, 0x88,
  0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x77, 0x89, 0x99, 0x77, 0x78, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x78, 0x88,
  0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x87, 0x78, 0xcf, 0xfe, 0xb8, 0x77, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x78, 0x88,
  0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x77, 0x8d, 0xff, 0xff, 0xfb, 0x77, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd8, 0x78, 0x88,
  0x88, 0x87, 0x9e, 0xff, 0xff, 0xfe, 0xdd, 0xcc, 0xcc, 0xdd, 0xef, 0xff, 0xfb, 0x77, 0xaf, 0xff, 0xff, 0xfe, 0x87, 0x7c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x88, 0x88,
  0x88, 0x87, 0x9c, 0xcd, 0xcc, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbc, 0xef, 0xfb, 0x77, 0xcf, 0xff, 0xff, 0xff, 0x97, 0x7d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x87, 0x88, 0x88,
  0x88, 0x87, 0x9c, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbd, 0xfc, 0x77, 0xbf, 0xff, 0xff, 0xff, 0x97, 0x7b, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x78, 0x88, 0x88,
  0x88, 0x87, 0x9c, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xbb, 0xcc, 0x87, 0x9e, 0xff, 0xff, 0xfc, 0x87, 0x88, 0x89, 0xac, 0xde, 0xef, 0xff, 0xff, 0xfe, 0xca, 0x77, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x9c, 0xbb, 0xbb, 0xbb, 0xbb, 0xbc, 0xcb, 0xbb, 0xbb, 0xbb, 0xca, 0x87, 0x7a, 0xef, 0xff, 0xd8, 0x77, 0x99, 0x77, 0x77, 0x88, 0x99, 0x9a, 0xa9, 0x98, 0x77, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x9c, 0xbb, 0xbb, 0xbb, 0xbc, 0xcb, 0xa9, 0x88, 0x88, 0x89, 0xaa, 0x87, 0x77, 0x9b, 0xca, 0x87, 0x78, 0xb9, 0x78, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x8b, 0xcb, 0xbb, 0xbc, 0xcb, 0x98, 0x77, 0x77, 0x77, 0x77, 0x78, 0x87, 0x77, 0x77, 0x77, 0x77, 0x8c, 0xca, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x8b, 0xcb, 0xbc, 0xcb, 0x98, 0x77, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xc9, 0x77, 0x77, 0x79, 0xdf, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x7a, 0xcc, 0xcb, 0xa8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8d, 0xfe, 0xcb, 0xaa, 0xcf, 0xfe, 0xbb, 0x97, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x78, 0xab, 0xa8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xbc, 0xa8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x88, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xbb, 0xc9, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xbb, 0xcb, 0x97, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbb, 0xbc, 0xb9, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xbb, 0xcb, 0x98, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xbb, 0xbc, 0xba, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xbb, 0xbb, 0xbc, 0xb9, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xbb, 0xbb, 0xbb, 0xcc, 0xa8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xbb, 0xbb, 0xbb, 0xcb, 0x98, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xbb, 0xbb, 0xbb, 0xbc, 0xca, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xbb, 0xbb, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xbb, 0xbb, 0xbb, 0xca, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xbb, 0xbb, 0xbc, 0xb8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xbb, 0xbb, 0xcb, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xcc, 0xa8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xb9, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xa8, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x9d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xc9, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x9b, 0xde, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xdb, 0xa8, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x89, 0x9a, 0xab, 0xbb, 0xba, 0x99, 0x87, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT
