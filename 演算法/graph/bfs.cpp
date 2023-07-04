#include <iostream>
#include <queue>

using namespace std;

bool adj[5][5] = {
                    {0, 1, 0, 1, 1},
                    {1, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0},
                    {1, 0, 0, 0, 1},
                    {1, 0, 0, 1, 0},
                };
                
bool visit[5];

void bfs() {
    queue <int> q;

    for(int i=0; i<5; i++) {
        visit[i] = false;
    }

    for(int i=0; i<5; i++) {
        if(!visit[i]) {
            q.push(i);
            visit[i]=true;

            while(!q.empty()) {
                int k=q.front(); 
                q.pop();

                for(int j=0; j<5; j++) {
                    if(adj[k][j] && !visit[j]) {
                        q.push(j);
                        visit[j]=true;
                    }
                }
            }
        }
    }
}

int main() {
    bfs();
    
    for(int i=0; i<5; i++) {
        printf("%d", visit[i]);
    }
}