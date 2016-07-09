## FIRST INSTALL

0. download and install MyDef (https://github.org/hzhou/MyDef.git)

1. define environment variable MYDEFSRC to your MyDef directory (e.g. $HOME/projects/MyDef)

2. mydef_make

3. touch output_c.def && make

4. cd MyDef-output_c
   pmake (or "perl Makefile.PL INSTALL_BASE=$HOME")
   make
   make install
   cd ..

5. [update Makefile to reflect the subdirectory Makefile in MyDef-output_c/]
   mydef_make

## UPDATE

1. git pull origin master

2. make 

3. make install
~                                 
