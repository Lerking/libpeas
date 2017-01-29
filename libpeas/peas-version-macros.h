/*
 * peas-version-macros.h
 * This file is part of libpeas
 *
 * Copyright (C) 2017 Fabian Orccon
 *
 * libpeas is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * libpeas is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA.
 */

G_BEGIN_DECLS

#ifndef __PEAS_VERSION_MACROS_H__
#define __PEAS_VERSION_MACROS_H__

#include <glib.h>

#ifndef _PEAS_EXTERN
#define _PEAS_EXTERN                        extern
#endif

#ifdef PEAS_DISABLE_DEPRECATION_WARNINGS
#define PEAS_DEPRECATED                     _PEAS_EXTERN
#define PEAS_DEPRECATED_FOR(f)              _PEAS_EXTERN
#define PEAS_UNAVAILABLE(maj,min)           _PEAS_EXTERN
#else
#define PEAS_DEPRECATED                     G_DEPRECATED            _PEAS_EXTERN
#define PEAS_DEPRECATED_FOR(f)              G_DEPRECATED_FOR(f)     _PEAS_EXTERN
#define PEAS_UNAVAILABLE(maj,min)           G_UNAVAILABLE(man,min)  _PEAS_EXTERN
#endif

#define PEAS_AVAILABLE_IN_ALL               _PEAS_EXTERN
#define PEAS_AVAILABLE_IN_1_20                 _PEAS_EXTERN

#define PEAS_DEPRECATED_IN_1_20             PEAS_DEPRECATED
#define PEAS_DEPRECATED_IN_1_20_FOR(f)      PEAS_DEPRECATED_FOR(f)

#endif /* __PEAS_VERSION_MACROS_H__ */

G_END_DECLS
