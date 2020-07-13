#include "WeightedEdge.h"

std::string
WeightedEdge::ToString() const
{
	return Edge::ToString() + " (" + std::to_string(Weight) + ")";
}
