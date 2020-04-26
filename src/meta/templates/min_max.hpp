#pragma once

template <typename TypeT>
TypeT min(TypeT a, TypeT b)
{
    return a < b ? a : b;
}

template <typename TypeT>
TypeT max(TypeT a, TypeT b)
{
    return a > b ? a : b;
}