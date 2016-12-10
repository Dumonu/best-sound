#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *str1;
char *str2;
int len;
int bs1;

int generate (int i, int x, int t, int o) {
    return((3 & x & (i * ((3 & i >> 16 ? "BY}6YB6%" : "Qj}6jQ6%")[t % 8] + 51) >> o )) << 4);
    //return((3 & x & (i * ((3 & i >> 16 ? "u7bE#m.`" : "Qj}6jQ6%")[t % 8] + 51) >> o )) << 4);
}

void set_str () {
    for (int cx = 0; cx < len; cx++) {
        *(str1 + cx) = (rand () % 0x5F) + 0x20;
        *(str2 + cx) = (rand () % 0x5F) + 0x20;
    }
}

int generate_2 (int i, int x, int t, int o) {
return ((3 & x & (i * ((3 & i >> 16 ? str1 : str2)[t % len] + 51) >> o )) << bs1);
}

int main (int i, int n, int s) {
    srand (time(0));
    len = (rand () % 15) + 5;
    str1 = malloc (len);
    str2 = malloc (len);
    bs1 = rand () % 16;
    set_str ();
    FILE *out = fopen ("values.txt", "a");
    if (out) {
        fprintf (out, "Length: %d\n", len);
        fprintf (out, "String 1: %s\n", str1);
        fprintf (out, "String 2: %s\n", str2);
        fprintf (out, "Bitshift 1: %d\n\n", bs1);
	fclose (out);
    }
    //for(i = 0;;i++)
//	putchar (generate (i, 1, n = (i >> 14), 12) + generate (i, s = (i >> 17), n ^ (i >> 13), 10) + generate (i, s / 3, n + ((i >> 11) % 3), 10) + generate (i, s / 5, len + n - ((i >> 10) % 3), 9));

    for(i = 0;;i++)
        putchar (generate_2 (i, 1, n = (i >> 14), 12) + generate_2 (i, s = (i >> 17), n ^ (i >> 13), 10) + generate_2 (i, s / 3, n + ((i >> 11) % 3), 10) + generate_2 (i, s / 5, len + n - ((i >> 10) % 3), 9));
}
