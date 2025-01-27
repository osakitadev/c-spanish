/*
  MADE BY ISAAC, THIS WAS MADE FOR FUN AND BECAUSE
  I WAS BORED, PLS DON'T USE THIS TRASH
*/

#ifndef SPANISH_H
#define SPANISH_H

/* Main function entry point alias */
#define principal main

/* Keywords */
#define automatico      auto
#define romper          break
#define constante       const
#define enumerador      enum
#define extender        extern
#define irA             goto
#define caso            case
#define si              if
#define siNo            else if
#define contrario       else
#define continuar       continue
#define porDefecto      default
#define para            for
#define registrar       register
#define retornar        return
#define tamanoDe        sizeof
#define firmado         signed
#define noFirmado       unsigned
#define estatico        static
#define estructura      struct
#define interruptor     switch
#define definirTipo     typedef
#define vacio           void
#define volatil         volatile
#define mientras        while
// #define union           union <- This one is not needed

/* Datatypes */
typedef int           entero;
typedef float         flotante;
typedef char          caracter;
typedef long          largo;
typedef double        doble;
typedef short         corto;
typedef long long     larguisimo;
typedef long double   dobleLargo;
typedef unsigned int  enteroNoFirmado;
typedef signed int    enteroFirmado;
typedef const char*   textoConstante;
typedef char          texto[];
// TODO: Add the rest of signed/unsigned datatypes

/*//////////////////////////// HEADERS ////////////////////////////*/
#ifdef _STDBOOL_H
  #define verdadero true
  #define falso     false

  typedef bool booleano;
#endif /* stdbool.h */

#ifdef _INC_STDIO
  /* Functions */
  #define imprimirf   printf
  #define escanearf   scanf
  #define fabrir      fopen
  #define fabrir_s    fopen_s
  #define freabrir    freopen
  #define freabrir_s  freopen
  #define fcerrar     fclose
  #define fleer       fread
  #define fescribir   fwrite
  // TODO ADD THE REST OF THE FUNCTIONS, IM TOO LAZY
  #define escanearf   scanf
  #define fescanearf  fscanf
  #define fimprimirf  fprintf

  /* Macros */
  #define NINGUNO     NULL

  /* Standard streams  */
  #define stdentrada  stdin
  #define stdsalida   stdout
  #define stderror    stderr

  /* Typedefs */
  typedef FILE ARCHIVO;
#endif /* stdio.h */

#ifdef _INC_STDLIB
  #define malojar     malloc
  #define calojar     calloc
  #define absoluto    abs
  #define dividir     div
#endif /* stdlib.h */

#ifdef _MATH_H_
  #define fabsoluto       fabs
  #define fmodulo         fmod
  #define resto           remainder
  #define fmaximo         fmax
  #define fminimo         fmin
  #define neun            nan // neun = nan (neun = no es un numero)
  #define exponente       exp
  #define logaritmo       log
  #define elevacion       pow
  #define raiz            sqrt
  #define seno            sin
  #define coseno          cos
  #define tangente        tan
  #define arcoseno        asin
  #define arcocoseno      acos
  #define arcotangente    atan
  #define techo           ceil
  #define piso            floor
  #define truncar         trunc
  #define redondear       round
  // TODO: Add the rest of functions (there are a lot bruh)
#endif /* math.h */

#ifdef _GCC_WRAP_STDINT_H // This is currently just for GCC (i think, i have no idea)
  // WHAT THE HELL PLS HELP ME, THIS IS NOT FUN ANYMORE
  #define ENTERO8_LARGO               INT8_WIDTH
  #define ENTERO16_LARGO              INT16_WIDTH
  #define ENTERO32_LARGO              INT32_WIDTH
  #define ENTERO64_LARGO              INT64_WIDTH
  #define ENTERO8_MAXIMO              INT8_MAX
  #define ENTERO16_MAXIMO             INT16_MAX
  #define ENTERO32_MAXIMO             INT32_MAX
  #define ENTERO64_MAXIMO             INT64_MAX
  #define ENTERO8_MINIMO              INT8_MIN
  #define ENTERO16_MINIMO             INT16_MIN
  #define ENTERO32_MINIMO             INT32_MIN
  #define ENTERO64_MINIMO             INT64_MIN

  #define ENTERO_NOFIRMADO8_LARGO     UINT8_WIDTH
  #define ENTERO_NOFIRMADO16_LARGO    UINT16_WIDTH
  #define ENTERO_NOFIRMADO32_LARGO    UINT32_WIDTH
  #define ENTERO_NOFIRMADO64_LARGO    UINT64_WIDTH
  #define ENTERO_NOFIRMADO8_MAXIMO    UINT8_MAX
  #define ENTERO_NOFIRMADO16_MAXIMO   UINT16_MAX
  #define ENTERO_NOFIRMADO32_MAXIMO   UINT32_MAX
  #define ENTERO_NOFIRMADO64_MAXIMO   UINT64_MAX
  #define ENTERO_NOFIRMADO8_MINIMO    UINT8_MIN
  #define ENTERO_NOFIRMADO16_MINIMO   UINT16_MIN
  #define ENTERO_NOFIRMADO32_MINIMO   UINT32_MIN
  #define ENTERO_NOFIRMADO64_MINIMO   UINT64_MIN

  typedef int8_t                      entero8_t;
  typedef int16_t                     entero16_t;
  typedef int32_t                     entero32_t;
  typedef int64_t                     entero64_t;
  typedef uint8_t                     enteroNoFirmado8_t;
  typedef uint16_t                    enteroNoFirmado16_t;
  typedef uint32_t                    enteroNoFirmado32_t;
  typedef uint64_t                    enteroNoFirmado64_t;

  typedef intptr_t                    punteroEntero;
  typedef uintptr_t                   punteroEnteroNoFirmado; // gg
#endif /* stdint.h */

#ifdef _INC_STRING
  // 💀
  #define copiarcadena        strcpy
  #define concatenarCadena    strncpy
  #define largoCadena         strlen
  #define compararCadena      strcmp
#endif /* string.h */

#ifdef _STDDEF_H
  typedef size_t    tamano_t;
#endif /* stddef.h */

/*/////////////////////////////////////////////////////////////////*/

#endif /* SPANISH_H */