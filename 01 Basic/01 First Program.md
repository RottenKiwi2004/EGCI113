# Welcome!

Congrats! You are now ready to write your first program!

Before we start, please don't hesitate to ask your instructor when there are terms that you are not familiar with. I understand that not everyone has the basics in the world of computer. 

### First, copy this program below

```c
int main() {
}
```

This is the minimum requirement for any C program to run: `main` function.

We will discuss about *function* much later in this course. For now, just remember that this is the entry point for our program.

### Now, let's print out something to our console

```c
int main() {
    printf("Hello World");
}
```

Immediately, we get lots of errors to our console

```c
hello.c: In function 'main':
hello.c:2:9: error: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    2 |         printf("Hello World");
      |         ^~~~~~
hello.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h>
    1 | int main() {
hello.c:2:9: warning: incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]
    2 |         printf("Hello World");
      |         ^~~~~~
hello.c:2:9: note: include '<stdio.h>' or provide a declaration of 'printf'
```

**<u>Note:</u>** If you don't get any error from the previous code, that is because your *compiler* helped you by implicitly included `stdio.h` library. Please do not assume that it is fine to code like that.

### Fixing the previous code

```c
#include <stdio.h>
int main() {
    printf("Hello World");
}
```

As the compiler suggests, the `stdio.h` library is not included before `printf` was called. This is crucial because in C programming, there is no built-in printing function.

`printf` function is is stored in the `stdio.h` library. You <u>must</u> include `<` and `>` at the beginning and ending of `stdio.h`.


For every operations and function calls, you need semicolon `;` after that statement to denote the end of that statement.

**<u>Common mistake:</u>** The library name is `stdio.h` ***NOT*** `studio.h`

That should be it for your first program!