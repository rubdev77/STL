#ifndef FOREACH_H
#define FOREACH_H

template <typename ForwardIt, typename Func>

constexpr Func foreach(ForwardIt first, ForwardIt last, Func f) 
{
    for( ; first != last; first++)
    {
        f(*first);
    }

    return f;
}

#endif