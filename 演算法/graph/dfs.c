#include <stdbool.h>
#include <stdio.h>

bool adj[5][5] = {
                    {0, 1, 0, 1, 1},
                    {1, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0},
                    {1, 0, 0, 0, 1},
                    {1, 0, 0, 1, 0},
                };
                
bool visit[5];

void DFS(int edge) {
    visit[edge] = true;

    for (int j = 0; j<5; j++) {
        if(adj[edge][j] && !visit[j]) {
            DFS(j);
        }
    }
}

void traverse() {
    for(int i=0; i<5; i++) {
        visit[i] = false;
    }

    for(int i=0; i<5; i++) {
        if(visit[i]==false) {
            DFS(i);
        }
    }
}


int main () {
    traverse();

    for(int i=0; i<5; i++){
        printf("%d ", visit[i]);
    }

    return 0;
}