## FIRST INSTALL

0. download and install MyDef (https://github.org/hzhou/MyDef.git)

1. define environment variable MYDEFSRC to your MyDef directory (e.g. $HOME/projects/MyDef)

2. mydef_make

3. make

4. make install

## UPDATE

1. git pull origin master

2. make 

3. make install

## Examples

* Hello World
```
    page: test, basic_frame
        module: c

        $print Hello World!
        printf("%s? Just use straight C syntax.\n", "In doubt");
```

```
    $ mydef_run test.def
    PAGE: test
        --> [./test.c]
    gcc -std=c99 -O2 -o./test ./test.c && ./test
    Hello World!
    In doubt? Just use straight C syntax.
```

Remember, you are writing C code. So read `test.c` for what you have wrote.

* For-loops
```
    page: test, basic_frame
        module: c

        $call test_for, 10
        $call test_for, i=0:9
        $call test_for, i=0:9:2
        $call test_for, i=9:0:-1
        $local i
        $call test_for, i=9;i>=0;i--

    subcode: test_for(p)
        $print "for $(p): -"
        $for $(p)
            $print $i -
        $print

    /* expect output:
    for 10: 0 1 2 3 4 5 6 7 8 9
    for i=0:9: 0 1 2 3 4 5 6 7 8
    for i=0:9:2: 0 2 4 6 8
    for i=9:0:-1: 9 8 7 6 5 4 3 2 1 0 
    # Note: convention can be tricky, consider explicit when convention is weak
    for i=9;i>=0;i--: 9 8 7 6 5 4 3 2 1 0
    */
```

More examples may be found in the `tests` folder.

