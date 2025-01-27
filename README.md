# SPANISH.H
spanish.h is a standalone header file I made when I was bored of learning C and because I had nothing better to do.

If you like this (somehow) and want to contribute adding more stuff, just do it and I will check it :)

To use this header, just download the [spanish.h file](./src/spanish.h) and put it in your project, and done

## NOTE
DO NOT use this for a real application (obviously dude), it was just made as a joke.


Also, the header should be required after all your headers to prevent weird stuff, I don't know what would happen, maybe the world explodes, idk
# CODE EXAMPLES

### 1. main() function
```c
#include "spanish.h"

entero principal() {
  // code

  retornar 0;
}
```

### 2. if statements (if-else-elseif)
```c
#include <stdbool.h>

#include "spanish.h"

vacio principal() {
  si(condition) {
    // if
  } siNo(condition2) {
    // else if
  } contrario {
    // else
  }
}
```

### 3. Switch statement
```c
#include "spanish.h"

vacio principal() {
  interruptor('a') {
    caso 'a': /* do stuff */ romper; // romper = break
    caso 'b': /* do stuff */ romper;
    caso 'c': /* do stuff */ romper;
    porDefecto:
      // default case
  }
}
```