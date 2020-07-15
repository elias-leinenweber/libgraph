#include "Edge.h"

Edge::Edge(Vertex v, Vertex w)
{
	if (v == w)
		// TODO better error handling
		abort();
	if (v < w) {
		this->v = v;
		this->w = w;
	} else {
		this->v = w;
		this->w = v;
	}
}

std::string
Edge::ToString() const
{
	return v + " " + w;
}

std::ostream &
operator<<(std::ostream &os, const Edge &e)
{
	return os << e.ToString();
}
