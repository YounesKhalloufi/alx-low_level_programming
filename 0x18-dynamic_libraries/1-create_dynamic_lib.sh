#!/bin/bash
<<<<<<< HEAD
gcc -c -fPIC *.c
=======
gcc -fPIC -c *.c
>>>>>>> 15a806289eee603b131506b0a04efc263a98a63e
gcc -shared -o liball.so *.o
