#include "Edge.h"

class WeightedEdge : Edge {
public:
	std::string	 ToString() const override;

	double	Weight;
};
