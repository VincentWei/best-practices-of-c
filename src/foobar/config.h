/**
 * @file config.h
 * @author Vincent Wei (https://github.com/VincentWei)
 * @date 2021/07/03
 * @brief The configuration header file of PurC.
 *
 * Copyright (C) 2021 FMSoft <https://www.fmsoft.cn>
 *
 * This file is a part of PurC (short for Purring Cat), an HVML interpreter.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if defined(HAVE_CONFIG_H) && HAVE_CONFIG_H && defined(BUILDING_WITH_CMAKE)
#include "cmakeconfig.h"
#endif

#include <wtf/Platform.h>

#include <wtf/ExportMacros.h>

#if !defined(PURC_EXPORT)

#if defined(BUILDING_PURC) || defined(STATICALLY_LINKED_WITH_PURC)
#define PURC_EXPORT WTF_EXPORT_DECLARATION
#else
#define PURC_EXPORT WTF_IMPORT_DECLARATION
#endif

#endif
