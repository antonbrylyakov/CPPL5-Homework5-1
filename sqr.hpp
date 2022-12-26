#pragma once
#include <vector>
#include <algorithm>

template <typename T>
T sqr(const T& src)
{
	return src * src;
}

template <typename T>
std::vector<T> sqr(const std::vector<T>& src)
{
	// поэлементное возведение в квадрат
	std::vector<T> res(src.size());
	std::transform(src.begin(), src.end(), res.begin(), [](const T& v) { return v * v; });
	return res;
}