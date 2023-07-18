#include <stdio.h>

void adjacency_matrix(int g[5][5]) {
    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            g[i][j] = 0;
        }
    }

    int s, e, w; //s: edge start, e: edge end

    while(scanf("%d%d%d", &s, &e, &w)) {
        g[s][e] = w;
    }
}
int main () {
    int graph[5][5];


    adjacency_matrix(graph);

    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {

            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}