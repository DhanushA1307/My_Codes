package Java.Classes_and_objects;

import java.util.*;
import java.util.LinkedList;

public class Graph
{
    int V;
    LinkedList<Integer> adj[];
    Graph(int v)
    {
        V = v;
        adj = new LinkedList[v];
        for(int i=0;i<v;i++){
            adj[i] = new LinkedList<>();
        }
    }
    
    void addEdge(int u,int v)
    {
        adj[u].add(v);
        adj[v].add(u);
    }
    
    void printGraph()
    {
        for(int i=0;i<V;i++){
            System.out.print(i+"->");
            for(int j=0;j<adj[i].size();j++){
                System.out.print(adj[i].get(j)+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int v = sc.nextInt();
            Graph g = new Graph(v);
            int e = sc.nextInt();
            for(int i=0;i<e;i++){
                int u = sc.nextInt();
                int v1 = sc.nextInt();
                g.addEdge(u, v1);
            }
            g.printGraph();
        }
    }
}