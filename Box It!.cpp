class Box
{
    private:
      int l=0;
      int h=0;
      int b=0;
      
    public:
      int getLength() const
      {
          return l;
      } 
      
      int getBreadth() const
      {
          return b;
      } 
      
      int getHeight() const
      {
          return h;
      } 
      
      long long CalculateVolume()
      {
          return (long long)l*b*h;
      }
      
      Box()
      {
          
      }
      
      Box(int length, int breadth, int height)
      {
         l=length;
         b=breadth;
         h=height;
      }
      
      Box(const Box& B)
      {
          l=B.getLength();
          b=B.getBreadth();
          h=B.getHeight();
      }
      ~Box()
      {
          
      }
      
      bool operator<(const Box &B)
      {
          int l1=B.getLength();
          int b1=B.getBreadth();
          int h1=B.getHeight();
          if(l<l1||(b<b1&&l==l1)||(h<h1 && b==b1 && l==l1))
               return true;
          else 
               return false;     
          
      } 
      
      
};
ostream& operator<<(ostream& out, Box& B)
{
    int l=B.getLength();
    int b=B.getBreadth();
    int h=B.getHeight();
    return out<<l<<' '<<b<<' '<<h;
}