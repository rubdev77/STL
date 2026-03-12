#ifndef FINDIF_H
#define FINDIF_H

template <typename It, typename Pred>
constexpr It find_if(It first, It last, Pred p)
{
    for(; first != last; first++)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return last;
}

#endif