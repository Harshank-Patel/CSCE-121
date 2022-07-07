#include <iostream>

// global scope
int x = 1;

namespace ns {
    // namespace scope
    int x = 2;
}

void foo() {
    // local (function) scope
    int x = 3;

    {
        // local (block) scope
        int x = 4;
        {
            // local (nested-block) scope
            int x = 5;
            for (int x = 6; x < 7; x++) {
                std::cout << x << std::endl;
            }
            std::cout << x << std::endl;
        }
        std::cout << x << std::endl;
    }
    std::cout << x << std::endl;
}

int main() {
    foo();
    std::cout << ns::x << std::endl;
    std::cout << x << std::endl;
    return 0;
}
