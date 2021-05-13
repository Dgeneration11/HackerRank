
/* Define the exception here */
class BadLengthException : public exception{
    private:
        int l=0;
    
    public:
        BadLengthException(int length){
            l = length;
        }
        int what(){
            return l;
        }               
};
