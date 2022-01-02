string encode(string src)
{    
  for(int i = 0 ; i<src.length(); i++){
  int count = 1;  
   while(i<src.length()-1 && src[i]==src[i+1] ){
   count++;  
   i++;
   }
   cout<<src[i]<<count;
  }
}    
