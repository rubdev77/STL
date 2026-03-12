#ifndef PARTION_H
#define PARTION_H

template <typename It, typename Pred>
It partion(It first, It last, Pred p)
{
    first = std::find_if_not(first, last, p);
    if(first == last)
    {
        return first;
    }

    for(auto i = std::next(first); i != last; ++i)
    {
        if(p(*i))
        {
            std::iter_swap(i, first);
            ++first;
        }
    }

    return first;
}


#endif