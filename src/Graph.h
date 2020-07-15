#include <cstddef>
#include <iostream>
#include <unordered_set>

#include "Edge.h"

class Graph {
public:
	Graph() = delete;
	Graph(std::size_t);
	Graph &operator+=(const Edge &);
	Graph &operator-=(const Edge &);
	std::size_t Size() const;
	void AddEdge(Edge);
	std::ostream &Display(std::ostream &) const;
	void RemoveEdge(Edge);
	static Graph CompleteGraph(std::size_t);
	static Graph RandomGraph(std::size_t, float);
	~Graph();

private:
	std::size_t Order;
	std::unordered_set<Edge> Edges;
};

std::ostream &operator<<(std::ostream &, const Graph &);
