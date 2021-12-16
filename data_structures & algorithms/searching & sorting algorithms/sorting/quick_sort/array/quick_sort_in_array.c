
/*this is the algo of quick sort i will soon convert it into programme */

quicksort(l,h)
{
    if(l<h)    ///i.e there are at least two elements
    {
                            ///j is the index at which partition is done
        j=partition(l,h);   /// arr {[10],[5],[8],[9],[3],[6],[15],[12],[16],[infi]}
                            ///     (____partition_1____) "j" (____partition_2____)
        quicksort(l,j);     ///sort from l to j  i.e 6 to 10
        quicksort(j+1,h);   ///sort from 15 to infi
    }
}

partition(l,h)
{
    pivot=arr[l];
    i=l,j=h
    while(i<j)
    {
        do
        {i++
        }while(arr[i]<=pivot)                   ///don't work simultaneously first increase i then decrease j
        do
        {j--
        }while(arr[j]>pivot)
        if(i<j)                                 /// if i < j  i.e i found greater than pivot and j found less than pivot and both dint crossed each other
            swap(arr[i],arr[j])                 ///   swap both element that are at index i and index j
    }
    swap(arr[i],arr[j])                         /// if i < j  i.e i found greater than pivot and j found less than pivot and both crossed each other
    return j
}
