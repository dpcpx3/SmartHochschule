/*-
 * Free/Libre Near Field Communication (NFC) library
 *
 * Libnfc historical contributors:
 * Copyright (C) 2019      Frank Morgner
 * See AUTHORS file for a more comprehensive list of contributors.
 * Additional contributors of this file:
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

/**
 * @file pcsc.h
 * @brief Driver for non-ACR122 devices (behind PC/SC daemon)
 */

#ifndef __NFC_DRIVER_PCSC_H__
#define __NFC_DRIVER_PCSC_H__

#include <nfc/nfc-types.h>

extern const struct nfc_driver pcsc_driver;

#endif // ! __NFC_DRIVER_PCSC_H__
