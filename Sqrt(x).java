class Solution {
public:
    int mySqrt(int x) {
        double  r=1 , comp   ;
	 
	comp = x/2  ;
        if ( x==0)return 0 ;
	for ( int i = 1 ; i< 100000 ; i++)
	{
	 if (x < r*r){
	 	    
	 	    
	 	    r-=comp;
	 	    comp/=2 ;
	 	
	 	
	 }
	 if (x>r*r) {
	 	
	 	r+=comp;
	 	comp/=2 ;

	 }
	 if ( x == r*r)
	 break ;
	 	
		
		
		
		
		
	}
        
return r ;
	
        
    }
};