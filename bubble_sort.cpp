#include <iostream>
#include <vector>

template<typename T>
void bubble_sort(std::vector<T> &vector)
{
    const int size = vector.size();

    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if (vector[i] > vector[j]) {
                int tmp = vector[j];
                vector[j] = vector[i];
                vector[i] = tmp;
            }
        }
    }
}

template<typename T>
void print_vector(const std::vector<T> &vector)
{
    for (const auto &item : vector)
	std::cout << item << " ";

    std::cout << '\n';
}

int main(int argc, char *argv[])
{
    std::vector<int> v { -1, 10, 2, 12, -43, 0 };
    print_vector(v);
    bubble_sort(v);
    print_vector(v);
    return 0;
}
