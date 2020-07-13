#include <string>

#include "Vertex.h"

class Edge {
public:
	virtual std::string	 ToString() const;

	Vertex	v;
	Vertex	w;
};

std::ostream	&operator<<(std::ostream &, const Edge &);
