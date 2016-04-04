/* crypto/ebcdic.h */

#ifndef HEADER_EBCDIC_H
# define HEADER_EBCDIC_H

# include <sys/types.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* Avoid name clashes with other applications */
# define os_toascii   _openssl_os_toascii
# define os_toebcdic  _openssl_os_toebcdic
# define ebcdic2ascii _openssl_ebcdic2ascii
# define ascii2ebcdic _openssl_ascii2ebcdic

__attribute__ ((visibility ("default"))) extern const unsigned char os_toascii[256];
__attribute__ ((visibility ("default"))) extern const unsigned char os_toebcdic[256];
__attribute__ ((visibility ("default"))) void *ebcdic2ascii(void *dest, const void *srce, size_t count);
__attribute__ ((visibility ("default"))) void *ascii2ebcdic(void *dest, const void *srce, size_t count);

#ifdef  __cplusplus
}
#endif
#endif
