//
// Created by Jamie Bernardin on 6/19/17.
//

#ifndef CPP_SEED_STACK_H
#define CPP_SEED_STACK_H

#include <vector>

namespace cpp_seed {

    template <typename T>
    class Stack {
    private:
        std::vector<T> _elems;
    public:
        void push(T const&);
        void pop();
        T top() const;
        bool empty() const {
            return _elems.empty();
        }
    };

//    implementation in .h due to template class instances and linking hassles
    
    template <typename T>
    void Stack<T>::push(T const& elem) {
        _elems.push_back(elem);
    }

    template <typename T>
    void Stack<T>::pop() {
        if (_elems.empty()) {
            throw std::out_of_range("Stack<>:top(): empty stack");
        }
        _elems.pop_back();
    }

    template <typename T>
    T Stack<T>::top() const {
        if (_elems.empty()) {
            throw std::out_of_range("Stack<>:top(): empty stack");
        }
        return _elems.back();
    }

}

#endif //CPP_SEED_STACK_H
