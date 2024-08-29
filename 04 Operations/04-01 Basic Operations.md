# Basic Operations

Now we've got variables, and we can show it to the display in different formats. 

But we can do more!

Basic math operations are as follow: `+`, `-`, `*`, `/` (add, subtract, multiply, divide)

Just these four operations and you are ready to calculate the projectile trajectory!

*(Assuming that you know enough Physics)*

Wait, there is another operator! `%`

This is called 'modulus operator' or 'mod' in short.

Basically, it finds the remainder of division

For example, `7 % 3` would result in `1` because dividing `7` by `3` gives us the quotient of `2` and remainder of `1`

### But it's not that straightforward!

Let's say we want to divide `a` by `b`

```c
int a = 3;
int b = 2;
float c = a / b;
printf("%f\n", c);
```

Result

```
1.000000
```

***Wait...*** Isn't the result supposed to be `1.500000`

The reason behind this is that we are performing an 'integer division'

The result will always be rounded down (floor function in math)

But why is it 'integer division' even we declared `c` as `float`?

Since `a` and `b` are `int`, the `/` operation sees `int` on both sides first before seeing that the result will be put into type `float`.

There are specific list of operator precedences in the section [04-03 Operator Precedence](./04-03%20Operator%20Precedence.md), but just keep in mind that integer division will always be rounded down.

### So, how to fix this?

We need to change the type first before dividing the number.

```c

int a = 3;
int b = 2;
float c = (float) a / b;
printf("%f\n", c);

```

By putting `(float)` in front of `a`, we changed the type of `a` from `int` to `float` before performing the division.

This is called **typecasting**


Oh, and it is perfectly fine to cast `b` to float instead.

```c

int a = 3;
int b = 2;
float c = a / (float) b;
printf("%f\n", c);

```

Or even cast both of them

```c

int a = 3;
int b = 2;
float c = (float) a / (float) b;
printf("%f\n", c);

```

We will discuss how typecasting works in next the [next section](./04-02%20Typecasting.md).