/*****************************************************************************
* Product: Quantum Spy -- Host Hardware Abstraction Layer
* Last Updated for Version: 4.5.04
* Date of the Last Update:  Jan 31, 2013
*
*                    Q u a n t u m     L e a P s
*                    ---------------------------
*                    innovating embedded systems
*
* Copyright (C) 2002-2013 Quantum Leaps, LLC. All rights reserved.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Alternatively, this program may be distributed and modified under the
* terms of Quantum Leaps commercial licenses, which expressly supersede
* the GNU General Public License and are specifically designed for
* licensees interested in retaining the proprietary status of their code.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*
* Contact information:
* Quantum Leaps Web sites: http://www.quantum-leaps.com
*                          http://www.state-machine.com
* e-mail:                  info@quantum-leaps.com
*****************************************************************************/
#ifndef hal_h
#define hal_h

#ifdef __cplusplus
extern "C" {
#endif

int  HAL_comOpen(char const *comName, int baudRate);
void HAL_comClose(void);
int  HAL_comRead(unsigned char *buf, size_t size);

int  HAL_tcpOpen(int portNum);
void HAL_tcpClose(void);
int  HAL_tcpRead(unsigned char *buf, size_t size);

#ifdef __cplusplus
}
#endif

#endif                                                            /* qhal_h */

