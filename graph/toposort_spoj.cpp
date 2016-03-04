#include <bits/stdc++.h>
using namespace std;

#define N 1000000
int inDegree [100];
vector <int> matrix [100]; 
queue <int> Q;
vector <int> sortedList;
int main ()
{
    int edges;
    int vertex;
    scanf ("%d %d", &edges, &vertex);       
 
    for ( int i = 0; i < edges; i++ ) {
        int a;
        int b;
        scanf ("%d %d", &a, &b);
 
        matrix [a].push_back (b); // directed acyclic graph (DAG)
        inDegree [b]++;
    }   
 
    for ( int i = 1; i <= vertex; i++ ) {
        if ( inDegree [i] == 0 )
            Q.push (i);
    }
    
 
    while ( !Q.empty () ) {
        int pop = Q.front ();
        Q.pop ();
 
        sortedList.push_back (pop);
 
        for ( unsigned int i = 0; i < matrix [pop].size (); i++ ) {
            inDegree [matrix [pop] [i]]--;
            if ( inDegree [matrix [pop] [i]] == 0 )
                Q.push (matrix [pop] [i]);
        }
    }
 
    // print
    for ( unsigned int i = 0; i < sortedList.size (); i++ )
        cout << sortedList [i] << " ";
    cout << endl;
    
    return 0;
}