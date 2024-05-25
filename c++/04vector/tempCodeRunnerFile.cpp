void tpsort(vector<int> &v) // 010110
{
    int k = 0;
    int i = 0;
    while (i < v.size()) //
    {
        if (v[i] != v[k])
        {
            int temp = v[k];
            v[k] = v[i]; //
            v[i] = temp; //
            k++;
        }
        i++; // 0,1,2
    }