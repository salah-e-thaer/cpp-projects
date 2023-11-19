// uses parts inventory to demonstrate structures
#include <iostream>
using namespace std;

struct part {
    int modelNumber;
    int partNumber;
    float cost;
};

int main() {
    part part1;

    part1.modelNumber = 6244;
    part1.partNumber = 373;
    part1.cost = 217.55F;

    cout << "Model " << part1.modelNumber;
    cout << ", part " << part1.partNumber;
    cout << ", costs $" << part1.cost << endl;
    return 0;
}