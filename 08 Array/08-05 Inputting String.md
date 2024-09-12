# Inputting String

If you try

```c
char str[100];
scanf("%s", &str);
printf("%s", str);
```

Then input
```
Hello World!
```

The output will be 
```
Hello
```

Because `scanf` separates the scanning by whitespaces, which includes `Enter` and `Spacebar`

So, how to get the whole sentences including spaces?

### 1. Format the `scanf`

```c
char str[100];
scanf("%[^\n]%*c", str);
```

To be honest, I looked this up while writing this. If you need this formatting, just take it and use it. Don't memorise!

### 2. Using `gets`

```c
char str[100];
gets(str);
```

The simplest way of reading each line from the console.

***BUT please!!! DO NOT USE THIS IN PRODUCTION!!!***

`gets` is extremely dangerous! You can of course, experiment with this function yourself. But **NEVER** put it in your projects.

### 3. Using `fgets`

The safer version of `gets`

```c
char str[100];
fgets(str, 100, stdin);
```

We need to assume that the maximum string size will be `100` (depends on the declaration).


Also, using `scanf` with `gets` or `fgets` will produce weird behaviour. Because 
