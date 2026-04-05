#!/bin/bash
# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create static library liball.a
ar rcs liball.a *.o

echo "✅ liball.a created successfully"
