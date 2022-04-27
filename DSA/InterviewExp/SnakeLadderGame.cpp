#include<bits/stdc++.h>
using namespace std;

struct queueEntry
{
    int vert;
    int dist;
};

int getMinDiceThrows(vector<int> moves,int N) 
{   
    vector<bool> visited(N,false);

    queueEntry src = {0,0}; //Let We start from 0th Cell which have dist of 0 from himself. 

    queue<queueEntry> q;
    q.push(src);
    queueEntry qe;
    while(!q.empty()) 
    {
        qe = q.front();
        q.pop();
        int v = qe.vert;

        if(v == N-1) //We have reached to the end and win the game ;
            break;
        
        for(int j=v+1;j<=(v+6) && j<N;j++)
        {
            if(!visited[j]) //This node is not visited till now
            {
                queueEntry a;
                a.dist = qe.dist+1; //Since every dice throw will lead to that cell by just one move.
                                    //We can also think that it as unit weighted graph.
                if(moves[j] != -1) 
                    a.vert = moves[j];
                else 
                    a.vert = j;
                q.push(a);  //Finally that vertex to do bfs for that vertex.
            }
        }

    }


    return qe.dist;

}

int main() 
{
    int N; //Total No of cells in Snake Board
    cin>>N;

    vector<int> moves(N,-1);

    
    // Ladders
    moves[2] = 21;
    moves[4] = 7;
    moves[10] = 25;
    moves[19] = 28;
 
    // Snakes
    moves[26] = 0;
    moves[20] = 8;
    moves[16] = 3;
    moves[18] = 6;
 
    cout << "Min Dice throws required is " << getMinDiceThrows(moves, N);
}