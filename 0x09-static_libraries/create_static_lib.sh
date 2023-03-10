1 #!/bin/bash
2 gcc -c *.c
3 ar rc liball.a *.o
4 ranlib liball.a
