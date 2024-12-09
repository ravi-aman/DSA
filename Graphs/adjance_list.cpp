#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Global variables
vector<list<int>> graph; // Adjacency list for the graph
int v;                   // Number of vertices

// Function to add an edge to the graph
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest); // Add dest to src's list
    if (bi_dir)                 // If the edge is bidirectional
    {
        graph[dest].push_back(src); // Add src to dest's list
    }
}

// Function to display the adjacency list of the graph
void display()
{
    cout << "\nAdjacency List Representation of the Graph:\n";
    for (size_t i = 0; i < graph.size(); i++) // Iterate over all vertices
    {
        cout << i << " -> ";     // Print the vertex
        for (auto el : graph[i]) // Print all neighbors
        {
            cout << el << " , ";
        }
        cout << "\n";
    }
}

int main()
{
    // Input number of vertices
    cout << "Enter the number of vertices in the graph: ";
    cin >> v;
    graph.resize(v, list<int>()); // Resize graph to have 'v' vertices

    // Input number of edges
    int e;
    cout << "Enter the number of edges in the graph: ";
    cin >> e;

    // Input edges with prompts
    cout << "Enter each edge in the format: source destination\n";
    while (e--)
    {
        int s, d;
        cout << "Enter edge " << (graph[0].size() + 1) << ": ";
        cin >> s >> d;  // Take input for source and destination
        add_edge(s, d); // Add edge to graph
    }

    // Display the graph
    display();

    return 0;
}
