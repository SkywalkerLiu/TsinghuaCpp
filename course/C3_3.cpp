bool ugly(int n)
{
    if (n==1){
        return false;
    }
    else{
         while(n%2==0)
         {
             n/=2;
         }
         while(n%3==0)
         {
             n/=3;
         }
         while(n%5==0)
         {
             n/=5;
         }
         if(n==1){
            return true;
         }
         else{
            return false;
         }
    }

}
