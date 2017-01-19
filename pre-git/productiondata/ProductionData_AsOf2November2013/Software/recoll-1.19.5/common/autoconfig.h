/* common/autoconfig.h.  Generated from autoconfig.h.in by configure.  */
/* common/autoconfig.h.in.  Generated from configure.ac by autoheader.  */

/* Path to the aspell api include file */
#define ASPELL_INCLUDE "/usr/include/aspell.h"

/* Path to the aspell program */
#define ASPELL_PROG "/usr/bin/aspell"

/* No X11 session monitoring support */
/* #undef DISABLE_X11MON */

/* Path to the fam api include file */
/* #undef FAM_INCLUDE */

/* Path to the file program */
#define FILE_PROG "/usr/bin/file"

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "Recoll"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Recoll 1.19.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "recoll"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.19.0"

/* putenv parameter is const */
/* #undef PUTENV_ARG_CONST */

/* iconv parameter 2 is const char** */
/* #undef RCL_ICONV_INBUF_CONST */

/* Real time monitoring option */
#define RCL_MONITOR 1

/* Split camelCase words */
/* #undef RCL_SPLIT_CAMELCASE */

/* Compile the aspell interface */
#define RCL_USE_ASPELL 1

/* Compile the fam interface */
/* #undef RCL_USE_FAM */

/* Compile the inotify interface */
#define RCL_USE_INOTIFY 1

/* Use file extended attributes */
#define RCL_USE_XATTR 1

/* Use multiple threads for indexing */
#define IDX_THREADS 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable using the system's 'file' command to id mime if we fail internally
   */
#define USE_SYSTEM_FILE_COMMAND 1

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

#define _FILE_OFFSET_BITS 64
/* #undef _LARGE_FILES */

/* The __FreeBSD_kernel__ thing is for debian/kfreebsd. */
#if _FILE_OFFSET_BITS == 64 || defined(__APPLE__) || defined(__OpenBSD__) ||\
    defined(__FreeBSD_kernel__) || (defined(__FreeBSD__) && __FreeBSD__ >= 9)
#define OFFTPC "%lld"
#else
#define OFFTPC "%ld"
#endif
