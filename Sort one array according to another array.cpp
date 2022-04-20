void sortChar(int a[] , char b[] , int n)
{
    pair<int,char> pa[n];
    for(int i=0;i<n;i++)
    pa[i]={a[i],b[i]};
    sort(pa,pa+n);
    for(int i=0;i<n;i++)
    cout<<pa[i].second<<" ";
    return 0;
}
