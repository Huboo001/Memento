#include <string>

using namespace std;

class Memento {
public:
	virtual ~Memento() {}
	virtual std::string GetName() const = 0;
	virtual std::string date() const = 0;
	virtual std::string state() const = 0;
};