#!/bin/bash
# Made by MEGATRON
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
