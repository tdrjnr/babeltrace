/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2016-2017 Philippe Proulx <pproulx@efficios.com>
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
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

%{
#include <babeltrace/ctf-ir/event.h>
%}

/* Type */
struct bt_ctf_event;

/* Functions */
struct bt_ctf_event *bt_ctf_event_create(
		struct bt_ctf_event_class *event_class);
struct bt_ctf_event_class *bt_ctf_event_get_class(
		struct bt_ctf_event *event);
struct bt_ctf_packet *bt_ctf_event_get_packet(
		struct bt_ctf_event *event);
int bt_ctf_event_set_packet(struct bt_ctf_event *event,
		struct bt_ctf_packet *packet);
struct bt_ctf_stream *bt_ctf_event_get_stream(
		struct bt_ctf_event *event);
struct bt_ctf_field *bt_ctf_event_get_header(
		struct bt_ctf_event *event);
int bt_ctf_event_set_header(struct bt_ctf_event *event,
		struct bt_ctf_field *header);
struct bt_ctf_field *bt_ctf_event_get_stream_event_context(
		struct bt_ctf_event *event);
int bt_ctf_event_set_stream_event_context(struct bt_ctf_event *event,
		struct bt_ctf_field *context);
struct bt_ctf_field *bt_ctf_event_get_event_context(
		struct bt_ctf_event *event);
int bt_ctf_event_set_event_context(struct bt_ctf_event *event,
		struct bt_ctf_field *context);
struct bt_ctf_field *bt_ctf_event_get_payload_field(
		struct bt_ctf_event *event);
int bt_ctf_event_set_payload_field(struct bt_ctf_event *event,
		struct bt_ctf_field *payload);
struct bt_ctf_clock_value *bt_ctf_event_get_clock_value(
		struct bt_ctf_event *event,
		struct bt_ctf_clock_class *clock_class);
int bt_ctf_event_set_clock_value(
		struct bt_ctf_event *event,
		struct bt_ctf_clock_value *clock_value);
