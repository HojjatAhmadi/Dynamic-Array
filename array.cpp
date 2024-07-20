// #ifndef ARRAY_H
// #define ARRAY_H

#include <bits/stdc++.h>
#include <initializer_list>
using namespace std;

template <class type>
class dy_array{
    private:
    int length = 0;
    type *array;

    public:
    dy_array(int len, initializer_list<type> list);
    dy_array(int len, type *a);
    void insert(type value);
    void print();
    void erase(type value);
};

template <class type>
dy_array<type> :: dy_array(int len, type *a) : length(len){
    array = new type[length];
    for (int i = 0; i < length; ++i) {
        array[i] = a[i];
    }
}

template <class type>
dy_array<type> :: dy_array(int len, std::initializer_list<type> list) : length(len){
    array = new type[length];
    int i = 0;
    for (auto& element : list) {
        array[i++] = element;
    }
}

template <class type>
void dy_array<type> :: insert(type value){
    type *new_array = new type[this->length+1];
    for(int i=0 ; i<this->length ; ++i){
        new_array[i] = this->array[i];
    }
    new_array[this->length] = value;
    this->array = new_array;
    this->length++;
}

template <class type>
void dy_array<type> :: print(){
    cout << '[';
    for(int i=0 ; i<this->length ; ++i){
        cout << this->array[i];
        if(i != this->length-1){
            cout << ',';
        }
    }
    cout << "]\n";
}

template <class type>
void dy_array<type> :: erase(type value){
    type *a = new type[this->length];
    a = this->array;
    int flag = 0;
    for(int j=0 ; j<this->length ; ++j){
        if(a[j] == value){
            flag++;
            for(int i=j ; i<this->length-1 ; ++i){
                a[i] = a[i+1];
            }
        }
    }
    this->array = a;
    this->length-=flag;
}

int main(){
    dy_array<int> *array = new dy_array<int>(5 , {1,2,3,4,5});
    array->insert(6);
    array->print();
    array->erase(6);
    array->print();
}

// #endif