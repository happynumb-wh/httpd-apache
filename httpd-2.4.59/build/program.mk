# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The ASF licenses this file to You under the Apache License, Version 2.0
# (the "License"); you may not use this file except in compliance with
# the License.  You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
#
# The build environment was provided by Sascha Schumann.

.PHONY: $(LIBDASICS_OBJ)

LIBDASICS_DIR = $(top_srcdir)/../LibDASICS
LIBDASICS_OBJ = $(LIBDASICS_DIR)/build/LibDASICS.a

PROGRAM_OBJECTS = $(PROGRAM_SOURCES:.c=.lo)

PROGRAM_LDFLAGS += -I$(LIBDASICS_DIR)/include -T$(LIBDASICS_DIR)/ld.lds

$(LIBDASICS_OBJ):
ifeq ($(wildcard $(LIBDASICS_DIR)/*),)
	git submodule update --init $(LIBDASICS_DIR)
endif
	$(MAKE) -C $(LIBDASICS_DIR)


$(PROGRAM_NAME): $(PROGRAM_DEPENDENCIES) $(PROGRAM_OBJECTS) $(LIBDASICS_OBJ)
	$(PROGRAM_PRELINK)
	$(MAKE) -C $(LIBDASICS_DIR)
	$(LINK) $(PROGRAM_LDFLAGS) $(PROGRAM_OBJECTS) $(PROGRAM_LDADD) $(LIBDASICS_OBJ)
