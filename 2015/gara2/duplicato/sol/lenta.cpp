#include <stdio.h>
#include <assert.h>
#define MAXN 100000

int risolvi(int N, int P[]) {
    bool found;
    for (int i = 0; i < 2*N - 1; i++) {
        found = false;
        for (int j = 0; j < 2*N - 1; j++) if (i != j and P[i] == P[j]) found = true;
        if (not found) return P[i];
    }
}

int P[2 * MAXN];
int main() {
    FILE *fr, *fw;
    int N, i;
#ifdef EVAL
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
#else
    fr = stdin;
    fw = stdout;
#endif
    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<2*N-1; i++)
        assert(1 == fscanf(fr, "%d", &P[i]));
    fprintf(fw, "%d\n", risolvi(N, P));
    fclose(fr);
    fclose(fw);
    return 0;
}
