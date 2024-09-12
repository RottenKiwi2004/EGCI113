# Null Character

### Consider this simple code

```c
char str[] = "Hello World! This is a string.";

int length1 = strlen(str);
int length2 = sizeof(str) / sizeof(char);
```

You would expect `length1 == length2` to be `true` right?

***WRONG!!!*** `length1` is `30`, but `length2` is `31`

So where does this extra `1` character comes from?

### The null character!

In fact, if you need the string with length $n$, you will need the `char` array with at least $n+1$ indices to store that string!

Here is how it works. Let's say we want to store the word `"Hello"`. The length is `5`, so we need the array of `6` characters.

The last character is the **null character**.

```c
char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
printf("%s", str);
```

This is the same as

```c
char str[6] = "Hello";
printf("%s", str);
```

### Why do we need null character?

To indicate the end of string!

```c
char str[] = "Hello World! This is a string.";

str[9] = '\0';

printf("%s", str);
```

The result would look like this because when `printf` sees the null character, it assumes that the string ends.

```
Hello Wor
```