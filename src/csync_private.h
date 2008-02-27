/*
 * libcsync -- a library to sync a directory with another
 *
 * Copyright (c) 2006 by Andreas Schneider <mail@cynapses.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * vim: ts=2 sw=2 et cindent
 */

/**
 * @file csync_private.h
 *
 * @brief Private interface of csync
 *
 * @defgroup csyncInternalAPI csync internal API
 *
 * @{
 */

#ifndef _CSYNC_PRIVATE_H
#define _CSYNC_PRIVATE_H

#define _GNU_SOURCE /* asprintf */
#include <stdlib.h>
#include <sqlite3.h>

#include "c_lib.h"
#include "csync.h"

#include "csync_macros.h"

/**
 * Maximum size of a buffer for transfer
 */
#define MAX_XFER_BUF_SIZE 16348

enum csync_replica_e {
  LOCAL_REPLICA,
  REMOTE_REPLCIA
};

struct csync_internal_s {
  c_rbtree_t *_local;
  c_rbtree_t *_remote;
  sqlite3 *_journal;
  int _journal_exists;
  int _initialized;
};

/**
 * }@
 */
#endif /* _CSYNC_PRIVATE_H */

