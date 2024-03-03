#include <algorithm>
#include <vector>

int main() {
    std::vector<int> source(100, 0);
    std::vector<int> destination(50, 0);

    // Copia más elementos de los que puede contener el destino
    std::copy(source.begin(), source.end(), destination.begin());

    return 0;
}
