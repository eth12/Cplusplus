/*
	Created by
	Ethan Roberts
	on 01/10/2020

	This program creates an ADT of a Graph.  "MatrixGraph" and "ListGraph" will be implemented.

*/

#include "stdafx.h"
#include "graphProject.h"
using namespace std;



//TODO:  Working functions:  adjacenct, neighbors, addEdge, deleteEdge, deleteNode, bfs
//TODO:  dfs

int main()
{
	AdjacencyMatrixGraph <int> myGraph;
	vector <int> vect;
	vector <int>::iterator it;

	

	myGraph.generateNewGraph(10, 0.0);  //first parameter tells how many nodes to create
	myGraph.displayMatrixGraph();
	cout << "\n\nAdjacent? " << myGraph.adjacent(4, 5) << "\n\n\n";

	vect = myGraph.neighbors(4);
	for (it = vect.begin(); it != vect.end(); ++it) {
		cout << *it << " ";
	}

	/*  WORKING CODE, JUST COMMENTING OUT
	cout << "\n\n\n";
	myGraph.addEdge(18,5);
	vect = myGraph.neighbors(18);
	for (it = vect.begin(); it != vect.end(); ++it) {
		cout << *it << " ";
	}



	cout << "\n\n\n";
	myGraph.deleteEdge(29, 5);
	vect = myGraph.neighbors(18);
	for (it = vect.begin(); it != vect.end(); ++it) {
		cout << *it << " ";
	}
	

	cout << "\n\n\n";
	myGraph.deleteNode(4);
	


	myGraph.displayMatrixGraph();
	*/

	cout << endl << endl;
	myGraph.bfs(myGraph,4);

    return 0;
}

