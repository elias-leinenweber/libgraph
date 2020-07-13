#include "Edge.h"

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
