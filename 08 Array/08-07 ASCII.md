# ASCII

Since we have been working with `char` more in this section, we should know how it works under the hood.

In general, we know that computer only knows binary (`0` and `1`). This is called a `bit`.

What if we put multiple `bit`s together? We get a lot of different combinations! And each of them represents a number!

*Computer converts from numbers represented by bits to character by a lookup table called [ASCII Table](https://www.asciitable.com/)*


This means that any character is actually stored as a number, and we can use that knowledge to our advantage.

Let's say we want to know the distance between two characters. For example, `a` and `e` are 4 characters apart. `g` and `l` are 5 characters apart.

### Based on how ASCII Table was organised, we can simply calculate that by

```c
int dist1 = 'e' - 'a';
printf("Distance between a and e: %d\n", dist1);

int dist2 = 'l' - 'g';
printf("Distance between g and l: %d\n", dist2);
```

### We can also detects if the character is an alphabet

```c
char test = '/';

if ('A' <= test && test <= 'Z' || 'a' <= test && test <= 'z') {
    printf("%c is an alphabet\n", test);
}
else {
    printf("%c is not an alphabet\n", test);
}
```


### Even further, we can convert from lowercase to uppercase and vice-versa

Example of converting to uppercase
```c
char test = 'r';
char converted;

if ('a' <= test && test <= 'z') {
    converted = test - 'a' + 'A';
}

printf("Uppercase of %c is %c\n", test, converted);
```

Converting the whole string to uppercase
```c
char test[] = "Hello World! This is a string.";

int n = strlen(test);
for(int i=0; i<n; i++) {
    if ('a' <= test[i] && test[i] <= 'z') {
        test[i] += 'A' - 'a';
    }
}

printf("%s\n", test);
```

I encourage you to play around with this. It is technical, but very important concept to know.