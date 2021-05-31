
      
      
    Difference(vector<int> elements){
        this->elements = elements;
    }
    
    void computeDifference(){
        int n = this->elements.size();
        int abs_diff = 0;
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++)
                abs_diff = max(abs_diff, abs(elements[i] - elements[j]));
        }
        maximumDifference = abs_diff;
    }
    
    

	// Add your code here
    
    
    

