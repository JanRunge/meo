# include <iostream>

class BaseShape{
    public:
        BaseShape(double d1, double d2){
            length1=d1;
            length2=d2;
        }
        double getLength1(){
            return length1;
        }
        double getLength2(){
            return length2;
        }
    protected:
        double length1;
        double length2;
};
class Triangle : public BaseShape{
    public:
        double getArea(){
            return (length1*length2)/2;
        }
        Triangle(double l1, double l2) : BaseShape(l1,l2){

        }
};

int main(){

    Triangle meinDreieck=Triangle(12.0,12.0);

    double flaeche= meinDreieck.getArea();
    std::cout<<flaeche;
    return 0;
}

