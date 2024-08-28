# Typecasting

Let's break down the sample code from earlier.

```c
int a = 3;
int b = 2;
float c = a / b;
printf("%f\n", c);
```

Since the division is performed between same data type: `int`, no typecasting is needed.

Same goes with

```c
int a = 3;
int b = 2;
float c = (float) a / (float) b;
printf("%f\n", c);
```

But in these two cases

```c

int a = 3;
int b = 2;
float c = (float) a / b;
printf("%f\n", c);
```
```c

int a = 3;
int b = 2;
float c = a / (float) b;
printf("%f\n", c);
```

The division is performed between two different data types: `int` and `float`

Why is it converted to `float`?

Well, automatic type conversion, also known as 'implicit type conversion' will always follow a predefined **conversion rank**

When an operation is performed between two different data types, it will always result in the data type with higher rank

<table>
    <tr>
        <th>Rank</th>
        <th>Data type</th>
    </tr>
    <tr>
        <td>1</td>
        <td>bool</td>
    </tr>
    <tr>
        <td>2</td>
        <td>char</td>
    </tr>
    <tr>
        <td>3</td>
        <td>short</td>
    </tr>
    <tr>
        <td>4</td>
        <td>int</td>
    </tr>
    <tr>
        <td>5</td>
        <td>long</td>
    </tr>
    <tr>
        <td>6</td>
        <td>long long</td>
    </tr>
    <tr>
        <td>7</td>
        <td>float</td>
    </tr>
    <tr>
        <td>8</td>
        <td>double</td>
    </tr>
    <tr>
        <td>9</td>
        <td>long double</td>
    </tr>
</table>

Yes, I'm aware that I haven't even mentioned half of these data types. But you will know that you need it when you have to use it.

Back to our example, when we perform `int`/`float` or `float`/`int`, the implicit casting just converts the result to higher rank which is `float`.

The same principle also applies to any other pair of conversion.

