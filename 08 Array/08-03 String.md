# String

Did you notice that my examples are more focused on numbers than characters?

***NO!???*** *Okay, you might have already forgot about the* `char` variable type.

Back in [02-02 Datatypes.md](../02%20Variables/02-02%20Datatypes.md), I briefly mentioned that `char` is used to store characters and refused to further elaborate.

Because having a single character, you can't do much. But having an array of characters, you can represent a word or even a sentence! It is called `string`

### In short, string is the array of `char`

```c
char str[] = "Hello World! This is a string.";

printf("%s", str);
```

Wait a second... That double quote (`"`) is the same as first argument of `printf`

Well, yes! What you have been doing with printf this whole time is just passing the `string` to the function.

Which means, you can technically do this.

### `printf` "format string"

```c
char str[] = "Hello World! This is a string.";

printf(str);
```

I personally don't recommend doing this, by the way. If you are not careful enough, it would lead to lots of foreseeable bugs. Unless you really know what you are doing, just don't do it!

Since `string` is the array of characters, you can actually get an individual character from each index of the string.

### Indexing each char from string

```c
char str[] = "Hello World! This is a string.";

char index4 = str[4];

printf("%c", index4);
```

Output
```
o
```

Remember, array index starts from `0`, so `str[0] = 'H'`, `str[1] = 'e'` and so on.

If we want to know the length of the string, you need to include `string.h` library and use `strlen()` function

### Get string length

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World! This is a string.";
    int length = strlen(str);
    printf("Length of string = %d\n", length);
}
```