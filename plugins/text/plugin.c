/*
 * Copyright 2017 Philippe Proulx <pproulx@efficios.com>
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

#include <babeltrace/plugin/plugin-dev.h>
#include "pretty/pretty.h"

BT_PLUGIN(text);
BT_PLUGIN_DESCRIPTION("Plain text component classes");
BT_PLUGIN_AUTHOR("Julien Desfossez, Mathieu Desnoyers, Philippe Proulx");
BT_PLUGIN_LICENSE("MIT");

/* pretty sink */
BT_PLUGIN_SINK_COMPONENT_CLASS(pretty, pretty_consume);
BT_PLUGIN_SINK_COMPONENT_CLASS_INIT_METHOD(pretty, pretty_init);
BT_PLUGIN_SINK_COMPONENT_CLASS_FINALIZE_METHOD(pretty, pretty_finalize);
BT_PLUGIN_SINK_COMPONENT_CLASS_PORT_CONNECTED_METHOD(pretty,
	pretty_port_connected);
BT_PLUGIN_SINK_COMPONENT_CLASS_DESCRIPTION(pretty,
	"Pretty-printing text output (`text` format of Babeltrace 1).");
