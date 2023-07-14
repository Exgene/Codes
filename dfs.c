#include <stdio.h>

int adjacencyMatrix[20][20], reach[20], noOfVertices;
void dfs(int v)
{
    int i;
    reach[v] = 1;
    for (i = 1; i <= noOfVertices; i++)
        if (adjacencyMatrix[v][i]!=0 && reach[i]==0)
        {
            printf("\n%d->%d", v, i);
            dfs(i);
        }
}

int main()
{
    int i, j, count = 0,startingVertex;
    printf("\nEnter no of vertices : ");
    scanf("%d", &noOfVertices);

    printf("\nEnter adjacency matrix : \n");
    for (i = 1; i <= noOfVertices; i++)
        for (j = 1; j <= noOfVertices; j++){
            reach[i] = 0;
            adjacencyMatrix[i][j] = 0;
            scanf("%d", &adjacencyMatrix[i][j]);
        }

    printf("Enter the starting vertex:");
    scanf("%d", &startingVertex);
    dfs(startingVertex);

    for (i = 1; i <= noOfVertices; i++)
        if (reach[i])
            count++;

    if (count == noOfVertices)
        printf("\nGraph is connected.");
    else
        printf("\nGraph is disconnected.");

    return (0);
}
