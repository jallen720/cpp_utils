#pragma once


#include <vector>


namespace Cpp_Utils
{


template<typename T>
bool contains(const std::vector<T> & vector, const T & element);

template<typename T, typename Predicate>
bool contains(const std::vector<T> & vector, const Predicate & predicate);

template<typename T>
void remove(std::vector<T> & vector, const T & element);

template<typename T, typename Predicate>
void remove(std::vector<T> & vector, const Predicate & predicate);

template<typename T, typename Comparator>
void sort(std::vector<T> & vector, const Comparator & comparator);


} // namespace Cpp_Utils


#include "Cpp_Utils/Vector.ipp"
