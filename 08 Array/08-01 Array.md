# Array

As we learnt about the loop. The logic is expandable, but what about the variables?

What if we need to keep `n` variables of type `int` instead of declaring `int a, b, c, d, e;`

You can simply do that by using an 'Array'.

### Declaring array & Accessing each index

```c

int arr[5];

arr[0] = 9;
arr[1] = 5;
arr[2] = 2;
arr[3] = 7;
arr[4] = 1;

for(int i=0; i<5; i++) {
    printf("%d ", arr[i]);
}

```

Notice, when we declared the array of size $n$, we can only call the index from $0$ to $n-1$. This is because the array index starts from $0$ which means the array of size $n$ will contain the following index: $\lbrace 0, 1, 2, 3, \dots, n-1\rbrace$

Also, if you have a fixed data to be initialise like the example above, you can do that in one line!

### Array initialisation

```c
int arr[5] = {9, 5, 2, 7, 1};

for(int i=0; i<5; i++) {
    printf("%d ", arr[i]);
}
```
And you can even neglect the array size

```c
int arr[] = {9, 5, 2, 7, 1};

for(int i=0; i<5; i++) {
    printf("%d ", arr[i]);
}
```

This will produce the exact same result.

### `sizeof`

You can use the keyword `sizeof` to find the size of that array in bytes.

For example, you can find the array length as follow:

```c
int arr[] = {9, 5, 2, 7, 1};

int length = sizeof(arr) / sizeof(int);
printf("Length = %d", length);
```

You can also `scanf` directly into each index of the array

### Get 5 numbers from user and print them out in reverse
```c
int arr[5];
for(int i=0; i<5; i++) {
    scanf("%d", &arr[i]);
}
for(int i=4; i>=0; i--) {
    printf("%d ", arr[i]);
}
```