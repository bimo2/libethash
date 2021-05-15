# Copyright (c) 2021 Bimal Bhagrath
# MIT License. See COPYING for more details.

lib_LTLIBRARIES = libethash.la
libethash_la_SOURCES = ethash.c
libethash_la_LDFLAGS = -version-info $(LIBETHASH_SO_VERSION) -no-undefined

libethash_includedir = $(includedir)
libethash_include_HEADERS = ethash.h

dist_doc_DATA = COPYING README.md
