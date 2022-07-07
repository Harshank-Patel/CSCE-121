#include <iostream>
#include <string>

using std::ostream;
using std::cout;
using std::cerr;
using std::endl;
using std::to_string;
using std::string;

template <typename T>
class MyVector {
    T* _A;
    unsigned int _capacity;
    unsigned int _size;
    
    void _resize();
    
    public:
    MyVector();
    MyVector(unsigned int capacity);
    void append(const T& elem);
    unsigned int length() const;
    T& at(int index) const;
    T& operator[](int index);
    const T& operator[](int index) const;
    MyVector& operator<<(const T& elem);
};

template <typename T>
MyVector<T>::MyVector() {
    _A = new T[1];
    _capacity = 1;
    _size = 0;
}

template <typename T>
MyVector<T>::MyVector(unsigned int capacity) {
    _capacity = capacity;
    _A = new T[capacity];
    _size = 0;
}

template <typename T>
void MyVector<T>::_resize() {
    // allocate new memory
    T* B = new T[_capacity * 2];
    // copy data
    for (unsigned int i = 0; i < _size; i++) {
        B[i] = _A[i];
    }
    // deallocate old memory
    delete[] _A;
    // update pointer and capacity
    _A = B;
    _capacity *= 2;
}

template <typename T>
void MyVector<T>::append(const T& elem) {
    if (_size >= _capacity) {
        _resize();
    }
    _A[_size++] = elem;
}

template <typename T>
T& MyVector<T>::at(int index) const {
    if ((index >= 0 && (unsigned int)index >= _size) || (index < 0 && (unsigned int)-index > _size)) {
        throw "IndexOutOfBoundsError: " + to_string(index);
    }
    if (index >= 0) {
        return _A[index];
    } else {
        return _A[_size + index];
    }
}

template <typename T>
unsigned int MyVector<T>::length() const {
    return _size;
}

template <typename T>
ostream& operator<<(ostream& os, const MyVector<T>& v)
{
    os << "[";
    if (v.length() > 0) {
        os << v[0];
        for (unsigned int i = 1; i < v.length(); i++) {
            os << ", " << v[i];
        }
    }
    os << "]";
    return os;
}

template <typename T>
T& MyVector<T>::operator[](int index) {
    return this->at(index);
}

template <typename T>
const T& MyVector<T>::operator[](int index) const{
    return this->at(index);
}

template <typename T>
MyVector<T>& MyVector<T>::operator<<(const T& elem) {
    this->append(elem);
    return *this;
}

int main()
{
    
    MyVector<int> v;

    v << 8;
    cout << v << endl;
    v << 6;
    cout << v << endl;
    v << 7 << 5 << 3 << 0 << 9;
    cout << v << endl;
    
    int j = -1;
    for (unsigned int i = 0; i < v.length(); i++) {
        cout << v[j] << " ";
        j--;
    }
    cout << endl;
    
    try {
        cout << v[8];
    } catch (string err) {
        cerr << err << endl;
    }
    
    try {
        cout << v[-9];
    } catch (string err) {
        cerr << err << endl;
    }
    
    return 0;
}
