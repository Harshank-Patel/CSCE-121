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
    unsigned int length() const;
    void append(T elem);
    T& at(int index) const;
    MyVector& operator<<(T elem);
    T& operator[](int index);
    const T& operator[](int index) const;
};

template <typename T>
MyVector<T>::MyVector() {
    _A = new T[1];
    _capacity = 1;
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
void MyVector<T>::append(T elem) {
    if (_size >= _capacity) {
        _resize();
    }
    _A[_size++] = elem;
}

template <typename T>
T& MyVector<T>::at(int i) const {
    if ((i >= 0 && (unsigned int)i >= _size) || (i < 0 && (unsigned int)-i > _size)) {
        throw "IndexOutOfBoundsError: " + to_string(i);
    }
    if (i >= 0) {
        return _A[i];
    } else {
        return _A[_size+i];
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
        os << v.at(0);
        for (unsigned int i = 1; i < v.length(); i++) {
            os << ", " << v[i];
        }
    }
    os << "]";
    return os;
}

template <typename T>
MyVector<T>& MyVector<T>::operator<<(T elem) {
    append(elem);
    return *this;
}

template <typename T>
T& MyVector<T>::operator[](int index) {
    return this->at(index);
}


template <typename T>
const T& MyVector<T>::operator[](int index) const{
    return this->at(index);
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
