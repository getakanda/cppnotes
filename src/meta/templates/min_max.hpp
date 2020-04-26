#pragma once

template <typename TypeT>
TypeT returnMin(TypeT a, TypeT b)
{
    return a < b ? a : b;
}

template <typename TypeT>
TypeT returnMax(TypeT a, TypeT b)
{
    return a > b ? a : b;
}