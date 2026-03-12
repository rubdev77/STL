#ifndef COUNTIF_H
#define COUNTIF_H

template <typename It, typename Pred>

int count_if(It first, It last, Pred p)
{
    int count = 0;
    for(; first != last; first++)
    {
        if(p(*first))
        {
            count++;
        }
    }

    return count;
}



#endif