import java.util.*;

public class LinearSearch 
{ 
    public static void main(String[] args)
    {
        Scanner sc =  new Scanner(System.in); 
        int n = sc.nextInt();
        int[] arr = new int[n];
        
        for(int i = 0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }

        int key = sc.nextInt();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i]==key)
            {
                ans=1;
                break;
            }
        }
       
        System.out.println(ans);
    }
    
    
}
