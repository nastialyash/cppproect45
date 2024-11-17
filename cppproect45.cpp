
#include <iostream>
using namespace std;
class Equation {
public:
    virtual ~Equation() = default;

   
    virtual void computeRoots(double& x1, double& x2, int& rootCount) const = 0;
};


class LinearEquation : public Equation {
private:
    double a, b;

public:
    LinearEquation(double a, double b) : a(a), b(b) {}

    void computeRoots(double& x1, double& x2, int& rootCount) const override {
        if (a == 0) {
            rootCount = 0; 
            return;
        }
        x1 = -b / a;
        rootCount = 1; 
    }
};



int main() {
   
    double x1 = 0, x2 = 0;
    int rootCount = 0;

    LinearEquation linear(2, 3);
    linear.computeRoots(x1, x2, rootCount);

    if (rootCount == 1) {
        cout << "Linear equation root: " << x1 << std::endl;
    }
    else {
        cout << "No roots for the linear equation." << std::endl;
    }

    
    
}