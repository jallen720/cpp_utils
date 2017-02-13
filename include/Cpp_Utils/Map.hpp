#pragma once


#include <map>
#include <vector>


namespace Cpp_Utils
{


template<typename Key, typename Value>
bool contains_key(const std::map<Key, Value> & map, const Key & key);

template<typename Key, typename Value>
std::vector<Value> get_values(const std::map<Key, Value> & map);

template<typename Key, typename Value>
std::vector<Value> get_values(const std::map<Key, const Value> & map);

template<typename Key, typename Value>
const Value & at_key(const std::map<Key, const Value> & map, const Key & key);

template<typename Key, typename Value>
const Key & at_value(const std::map<Key, const Value> & map, const Value & value);

template<typename Key, typename Value>
std::pair<Key, const Value> at_index(const std::map<Key, const Value> & map, int index);

template<typename Key, typename Value>
std::pair<Key, Value> at_index(const std::map<Key, Value> & map, int index);

template<typename Key, typename Value>
void remove(std::map<Key, Value> & map, const Key & key);


} // namespace Cpp_Utils


#include "Cpp_Utils/Map.ipp"
