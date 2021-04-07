#pragma once

// Adjecency list for Undirected graph
class Task8
{
	struct myNode
	{
		int Vertex;
		myNode* next;
	};
	struct Graph
	{
		int numVertices;
		myNode** AdjacencyList;
	};

public:


};