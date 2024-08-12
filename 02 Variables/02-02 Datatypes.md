# Data types

As shown previously, we need to specify datatypes to our variables. Integer or `int` is one of them, but there are many more.

I'm gonna separate out the crucial ones here, so your brain is not bombarded with nonsense keywords. The full list can be found [here](https://en.wikipedia.org/wiki/C_data_types#Main_types)

<table>
    <tr>
        <th>Type</th>
        <th>Explanation</th>
        <th>printf format</th>
        <th>Range</th>
    </tr>
    <tr>
        <td>int</td>
        <td>Integer</td>
        <td>%d</td>
        <td>[-2147483648, 2147483647]*</td>
    </tr>
    <tr>
        <td>char</td>
        <td>Character</td>
        <td>%c</td>
        <td>[-127, 128]**</td>
    </tr>
    <tr>
        <td>float</td>
        <td>Floating point (Single precision): You can think of this as real numbers</td>
        <td>%f</td>
        <td>N/A***</td>
    </tr>
    <tr>
        <td>double</td>
        <td>Floating point (Double precision): Similar to float, but more precise</td>
        <td>%lf</td>
        <td>N/A***</td>
    </tr>
</table>

### For nerds out there:

`*` This depends on the compiler implementation and the CPU architecture

`**` The actual value is in that range, but the characters need to be mapped to ASCII table

`***` The reason that `float` and `double` ranges are `N/A` is that the range actually exists, but it is wildly large and imprecise to go to that such value. The reason behind this is related to how floating point was implemented (by using scientific notation).

*You don't need to fully understand these footnotes. It's about how computer actually operates and you can learn more about it in Computer Architecture.*
