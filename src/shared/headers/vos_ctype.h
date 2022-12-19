#ifndef _VOS_CTYPE_H
#define _VOS_CTYPE_H

#define _U 0x01
#define _L 0x02
#define _D 0x04
#define _C 0x08
#define _P 0x10
#define _S 0x20
#define _X 0x40
#define _SP 0x80
#define _HT 0x100

extern const unsigned short _ctype[];
unsigned char __toupper(unsigned char c);
unsigned char __tolower(unsigned char c);

#define __ismask(x) (_ctype[(int)(unsigned char)(x)])

#define isalnum(c) ((__ismask(c) & (_U | _L | _D)) != 0)
#define isalpha(c) ((__ismask(c) & (_U | _L)) != 0)
#define isblank(c) ((__ismask(c) & (_HT | _SP)) != 0)
#define iscntrl(c) ((__ismask(c) & (_C)) != 0)
#define isdigit(c) ((__ismask(c) & (_D)) != 0)
#define isgraph(c) ((__ismask(c) & (_P | _U | _L | _D)) != 0)
#define islower(c) ((__ismask(c) & (_L)) != 0)
#define isprint(c) ((__ismask(c) & (_P | _U | _L | _D | _SP)) != 0)
#define ispunct(c) ((__ismask(c) & (_P)) != 0)
#define isspace(c) ((__ismask(c) & (_S)) != 0)
#define isupper(c) ((__ismask(c) & (_U)) != 0)
#define isxdigit(c) ((__ismask(c) & (_D | _X)) != 0)
#define isascii(c) (((unsigned char)(c)) <= 0x7f)
#define tolower(c) __tolower(c)
#define toupper(c) __toupper(c)

#endif