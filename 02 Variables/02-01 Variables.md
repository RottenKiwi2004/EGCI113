# Variables

After seeing our first program, there isn't much that we can do.

### So, let's add some variables.

```c
#include <stdio.h>
int main() {
    int a;
    a = 2;
    printf("%d", a);
}
```

If you run this, you will get 2 on your console. ***Great!***

Now you might wonder... "***What the ___ is going on?***"

Be prepared, we've got some readings ahead. Don't worry if you can't fully digest it the first time. Things will be better when you start writing some codes yourself.

I'll break it down into 2 main parts.

- Declaring a variable
  
    We need to follow this rule every time we create variables. `datatype variableName;`

    For this one, data type is `int` which stands for integer, and the variable name is `a`.

    We will discuss about data types and rules for naming our variables in next files.

- Assigning a value to the variable

    Simple! Just use equal sign `=` to put whatever on the right side (which is `2` in this case) into our variable `a`

- Printing the variable

    Fun fact! `f` in `printf` stands for "formatted". This means that the output can be formatted to our needs.

    So, you might notice that there are double quotes `"` before and after `Hello World` in our first program.
    
    ```c
    #include <stdio.h>
    int main() {
        printf("Hello World");
    }
    ```

    This is used to separate between normal codes and `string` which is a more complicated data type that we will see later.

    For now, think about the word `string` as a series of characters. Ex: `"d35fa5sd1f56"`, `"This is a string"`

    ***But, why we pass string to `printf?`*** To specify what we want to be shown on our console.
    
    This can be any characters with some exceptions, but let's not worry about all other exceptions and only focus on the percent sign `%`

    `%` is used to format the string, such that `printf` knows which format should it print the variable.

    `%d`: d is decimal integer (number in base 10 which is what we use daily)

    Okay, the formatting is done! But why is there a comma `,` following the string, then variable `a`?

    That is where we put the value which will be printed according to the formatted string.

    Passing the variable `a` means `printf` will receive the value inside variable `a` and format it to decimal before showing on the console.

    
    **<u>Note:</u>** To print `%` on the console, you need to use `%%` instead of just `%`
    ```c
    printf("%%");
    ```

That should be enough for an introduction to variables. Next we will see variables for different data types.