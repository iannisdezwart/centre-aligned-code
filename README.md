# CentreAlignedCode

Does what you think it does.

Compile and run:

```
$ g++ centre-align-code.cpp -o centre-align-code
$ ./centre-align-code test.c output.c
```

`test.c`: (remove all leading indentation for best result)
```
#include <stdio.h>

int main()
{
printf("Hello, World!\n");
}
```

`output.c`:
```
                               #include <stdio.h>
                                        
                                   int main()
                                       {
                           printf("Hello, World!\n");
                                       }
```