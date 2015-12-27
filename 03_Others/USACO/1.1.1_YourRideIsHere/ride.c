/*
ID: chanjun1
LANG: C
TASK: ride
*/
#include <stdio.h>
#include <string.h>

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

const int MODULO = 47;

int hashCharacter(char inputChar) {
    if (inputChar >= 'A' && inputChar <= 'Z') {
        return inputChar - 'A' + 1;
    } else if (inputChar >= 'a' && inputChar <= 'z') {
        return inputChar - 'a' + 1;
    } else {
    }

    return 1;
}

int calculateMod(char inputString[6]) {
    // O(n), faster solution would be O(logn)
    int ans = 1;
    int i, curHash;

    for (i = 0; i < 6; i++) {
        curHash = hashCharacter(inputString[i]);
        ans = (ans * curHash) % MODULO;
    }
    return ans;
}

int main () {
    FILE *fin  = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "w");
    char a[8], b[8];
    //fscanf (fin, "%s %s", &a, &b);
    fgets(a, sizeof(a), fin);

    //the first fgets is to get rid of the end line characters
    fgets(b, sizeof(b), fin);

    fgets(b, sizeof(b), fin);

    int codeA = calculateMod(a);
    int codeB = calculateMod(b);

    //fprintf(fout, "%s %d\n", a, codeA);
    //fprintf(fout, "%s %d\n", b, codeB);

    if (codeA == codeB) {
        //printf("GO\n");
        fprintf (fout, "GO\n");
    } else {
        //printf("STAY\n");
        fprintf (fout, "STAY\n");
    }
    return 0;
}
