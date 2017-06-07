#ifndef CTF_FS_METADATA_H
#define CTF_FS_METADATA_H

/*
 * Copyright 2016 - Philippe Proulx <pproulx@efficios.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <stdio.h>
#include <glib.h>
#include <babeltrace/babeltrace-internal.h>
#include <babeltrace/ctf-ir/trace.h>
#include "fs.h"

#define CTF_FS_METADATA_FILENAME	"metadata"

struct metadata_overrides {
	int64_t clock_offset_s;
	int64_t clock_offset_ns;
};

BT_HIDDEN
int ctf_fs_metadata_init(struct ctf_fs_metadata *metadata);

BT_HIDDEN
void ctf_fs_metadata_fini(struct ctf_fs_metadata *metadata);

BT_HIDDEN
int ctf_fs_metadata_set_trace(struct ctf_fs_trace *ctf_fs_trace,
		struct metadata_overrides *overrides);

BT_HIDDEN
FILE *ctf_fs_metadata_open_file(const char *trace_path);

BT_HIDDEN
bool ctf_metadata_is_packetized(FILE *fp, int *byte_order);

BT_HIDDEN
int ctf_metadata_packetized_file_to_buf(struct ctf_fs_component *ctf_fs,
		FILE *fp, uint8_t **buf, int byte_order);

#endif /* CTF_FS_METADATA_H */
