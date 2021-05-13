
/*
 * Create classes Rectangle and RectangleArea
 */
 
class Rectangle{
    protected:
        int height;
        int width;
    public:
        void display(){
            cout<<height<<" "<<width<<endl;
        }
};

class RectangleArea : public Rectangle{
    public:
        void read_input(){
            cin>>height>>width;
        }
        void display(){
            cout<<height*width<<endl;
        }  
};

