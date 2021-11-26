dnl * Copyright (c) 2021 Bimal Bhagrath
dnl * MIT License. See COPYING for more details.

m4_syscmd([ln -sfn readme.txt README])
m4_syscmd([ln -sfn readme.txt NEWS])
m4_syscmd([ln -sfn readme.txt AUTHORS])
m4_syscmd([ln -sfn readme.txt ChangeLog])

AC_INIT([libethash], [0.1.0], [bimo.17@outlook.com])
AC_CONFIG_AUX_DIR([m4.cache])
AC_CONFIG_MACRO_DIRS([m4])
AC_PREREQ([2.60])
AM_INIT_AUTOMAKE
AC_CONFIG_FILES([Makefile])
AC_PROG_CC
LT_INIT([])
AC_SUBST([LIBETHASH_SO_VERSION], [0:1:0])
AC_OUTPUT
