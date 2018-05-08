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
    ```

    ```
        $ mydef_run test.def
        PAGE: test
          --> [./test.c]
        gcc -std=c99 -O2 -o./test ./test.c && ./test
        Hello World!
    ```

    More examples may be found in the `tests` folder.

