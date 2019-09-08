    #include <stdio.h>
     
    void main()
    {
      int n, c, d, pos, swap;
     
      printf(" Enter number of elements : ");
      scanf("%d", &n);
      
      int a[n];
     
      printf("Enter %d integers : ", n);
     
      for (c = 0; c < n; c++)
        scanf("%d", &a[c]);
     
      for (c = 0; c < (n - 1); c++)
      {
        pos = c;
       
        for (d = c + 1; d < n; d++)
        {
          if (a[pos] > a[d])
            pos = d;
        }
        if (pos != c)
        {
          swap = a[c];
          a[c] = a[pos];
          a[pos] = swap;
        }
      }
     
      printf(" Sorted list in ascending order : ");
     
      for (c = 0; c < n; c++)
        printf("\t %d", a[c]);
     
      getch();
    }
