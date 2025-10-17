class Wektor2D
{
    private:
        double x,y;
    public:
        Wektor2D(){
            x=0; y=0;
        };
        Wektor2D(double x1, double x2){
            x=x1; y=x2;
        };

        void setX(double new_x){x = new_x;};
        void setY(double new_y){y = new_y;};

        double getX(){return x;};
        double getY(){return y;};
        
};

Wektor2D operator+ (Wektor2D v1, Wektor2D v2){
    return Wektor2D(
        v1.getX() + v2.getX(), v1.getY() + v2.getY()
    );
}

double operator* (Wektor2D v1, Wektor2D v2){
    return v1.getX() * v2.getX() + v1.getY() * v2.getY();
}