#include "Graph.h"

Graph::Graph(std::size_t order)
: Order(order), Edges(0)
{}

void
Graph::AddEdge(Edge e)
{
	Edges.emplace(e);
}

/**
 * Returns the size (|E| -- number of edges) of the graph.
 */
std::size_t
Graph::Size() const
{
	return Edges.size();
}

std::ostream &
Graph::Display(std::ostream &os) const
{
	os << "Order of the graph: " << Order << std::endl;
	os << "Number of edges: " << Size() << std::endl;
	os << "List of edges :";
	for (Edge e : Edges)
		os << " " << e;
	return os << std::endl;
}

std::ostream &
operator<<(std::ostream &os, const Graph &G)
{
	return G.Display(os);
}

void
Graph::RemoveEdge(Edge e)
{
	Edges.erase(e);
}

/**
 * Generates a complete graph of a given order.
 */
Graph
Graph::CompleteGraph(std::size_t order)
{
	Graph g(order);
	Vertex i, j;

	for (i = 1; i < order; ++i)
		for (j = i + 1; j <= order; ++j)
			g += Edge(i, j);
	return g;

}

/**
 * Creates a random graph, given a specified edge density.
 */
Graph
Graph::RandomGraph(std::size_t order, float density)
{
	Graph g(order);
	Vertex i, j;
	float area;

	area = density * RAND_MAX;
	for (i = 1; i < order; ++i)
		for (j = i + 1; j <= order; ++j)
			if (rand() < area)
				g += Edge(i, j);
	return g;

}

Graph::~Graph()
{}
