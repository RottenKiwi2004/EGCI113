# Nested Loop

Sure, looping can be powerful. But what's more powerful? Looping a loop of statements!

Let's say we want to print out a right-triangle of stars with the size depending on the user's input

### Input 1

```
4
```

### Output 1

```
*
**
***
****
```
### Input 2

```
7
```

### Output 2

```
*
**
***
****
*****
******
*******
```

By quickly analyse this, we can separate the loop into two parts

First is the one responsible for each row

The other is responsible for the characters of each row

```c
int n;
scanf("%d", &n);

for(int j=0; j<n; j++) {
    printf("*");
}
```

This code will print `n` stars in each line, but we need to change the `n` based on the row number

Let's see the other part

```c
int n;
scanf("%d", &n);

for(int i=0; i<n; i++) {
    printf("%d\n", i);
}
```

This will print out the row number for each row

So, combining these two example, we get this

```c
int n;
scanf("%d", &n);

for(int i=0; i<n; i++) {
    for(int j=0; j<i+1; j++) {
        printf("*");
    }
    printf("\n");
}
```

From my past experience, a lot of people would be so confused when they first see this code. I recommend do the following steps to help you understand better.

- Printing out the variable value instead of `*` and observe it closely

    For example, you can try this.
    ```c
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("i = %d, i+1 = %d: ", i, i+1);
        for(int j=0; j<i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    ```

    If you still can't follow, try this.
    ```c
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("i = %d, i+1 = %d: ", i, i+1);
        for(int j=0; j<i+1; j++) {
            printf("(j=%d)", j);
        }
        printf("\n");
    }
    ```

    Notice that I changed nothing about the loop structure ***at all***, I only change what is getting printed out to the console.