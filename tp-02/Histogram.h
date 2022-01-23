#include <string>
#include <vector>

class Histogram
{
public:
    Histogram();
    Histogram(int size, int default_value);
    Histogram(const Histogram& hist);
    void analyze(const std::string&);
    void print() const;

private:
    std::vector<unsigned int> _count;
};