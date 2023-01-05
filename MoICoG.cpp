#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct rectangle
{
    float length;
    float breadth;
};

struct square
{
    float length;
};

struct triangle
{
    float base;
    float height;
};

struct trapezium
{
    float base;
    float top;
    float height;
};

struct circle 
{
    float radius;
};

void MoI2()
{
    struct triangle t1;
    struct square s3;
    float A6,A7;
    float j1,k1,j2,k2;
    float G,H;
    float Ms,Mt,MM;
    float MMMX,mmmm1,mmmm2;
    float O,Z;
    float O1,Z1,O2,Z2;

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"                                                             @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;
    cout<<" "<<endl;             
    cout<<"                                                             @ The centroid, Moment of inertia of a    @ "<<endl;
    cout<<" "<<endl;
    cout<<"                                                             @ triangle with a hollow square           @ "<<endl;
    cout<<" "<<endl;
    cout<<"                                                             @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" Enter all the values in millimeter. "<<endl;
    cout<<" "<<endl;

    cout<<" The length of the Base and height should be greater than the length of the square. "<<endl;
    cout<<" "<<endl;

    cout<<"Please enter the length of the base of triangle "<<endl;
    cout<<" "<<endl;
    cin>>t1.base;
    cout<<" "<<endl;
    cout<<"Please enter the height of the triangle "<<endl;
    cout<<" "<<endl;
    cin>>t1.height;
    cout<<" "<<endl;

    cout<<"Please enter the length of the hollow square "<<endl;
    cout<<" "<<endl;
    cin>>s3.length;
    cout<<" "<<endl;

    if(t1.base > s3.length && t1.height > s3.length)
    {



    cout<<" "<<endl;

    cout<<"                              *                              "<<"   ___   "<<endl;
    cout<<"                            *   *                            "<<"    |    "<<endl;
    cout<<"                          *       *                          "<<"    |    "<<endl;
    cout<<"                        *           *                        "<<"    |    "<<endl;
    cout<<"                      *               *                      "<<"    |    "<<endl;
    cout<<"                    *                   *                    "<<"    |    "<<endl;
    cout<<"                  *   -----------------   *                  "<<"    |    "<<endl;
    cout<<"                *    |                 |    *                "<<"  "<< fixed << setprecision(3)<<t1.height<<endl;
    cout<<"              *      |                 |      *              "<<"    |    "<<endl;
    cout<<"            *        |                 |        *            "<<"    |    "<<endl;
    cout<<"          *          |                 |          *          "<<"    |    "<<endl;
    cout<<"        *            |                 |            *        "<<"    |    "<<endl;
    cout<<"      *              |                 |              *      "<<"    |    "<<endl;
    cout<<"    *                 -----------------                 *    "<<"    |    "<<endl;
    cout<<"  *                                                       *  "<<"    |    "<<endl;
    cout<<"*    *    *    *    *    *    *    *    *    *    *    *    *"<<"   ___   "<<endl;
    cout<<" "<<endl;
   cout<<"                     |-------"<< fixed << setprecision(3)<<s3.length<<"------|"<<endl;
   cout<<" "<<endl;
   cout<<"|- - - - - - - - - - - - - - "<< fixed << setprecision(3)<<t1.base<<" - - - - - - - - - - - - -|"<<endl;
   cout<<" "<<endl;

   cout<<"The base length and the height of the triangle are "<< fixed << setprecision(3)<<t1.base<<" mm , "<<t1.height<<" mm"<<endl;
   cout<<" "<<endl;
   cout<<"The dimension of the square is "<< fixed << setprecision(3)<<s3.length<<" mm"<<endl;
   cout<<" "<<endl;

   j1=s3.length/2;
   k1=(((t1.height-s3.length)/2) + (s3.length/2));
   j2=t1.base/2;
   k2=t1.height/3;
   
   cout<<"The coordinates of the centroid of the triangle are "<< fixed << setprecision(3)<<"("<<j2<<","<<k2<<")"<<endl;
   cout<<" "<<endl;
   cout<<"The coordinates of the centroid of the hollow square are "<< fixed << setprecision(3)<<"("<<j2<<","<<k1<<")"<<endl;
   cout<<" "<<endl;

   A6=(t1.base*t1.height)/2;
   A7=(s3.length*s3.length);

   cout<<"The area of the Isoceles triangle is "<< fixed << setprecision(3)<<A6<<" mm^2 "<<endl;
   cout<<" "<<endl;
   cout<<"The area of the hollow square is "<< fixed << setprecision(3)<<A7<<" mm^2 "<<endl;
   cout<<" "<<endl;

   G=((A6*j2)-(A7*j2))/(A6-A7);
   H=((A6*k2)-(A7*k1))/(A6-A7);

   cout<<"The centorid of the compound figure is "<< fixed << setprecision(3)<<"("<<G<<","<<H<<")"<<endl;
   cout<<" "<<endl;

   Ms=((s3.length)*(s3.length)*(s3.length)*(s3.length))/12;
   Mt=((t1.base)*(t1.height)*(t1.height)*(t1.height))/36;

   MMMX=(t1.base*t1.height*t1.height*t1.height)/12 - (Ms + A7*k1*k1);
   mmmm1=((t1.height*t1.base)/36)*((t1.base*t1.base)-((t1.base*t1.base)/2) +((t1.base*t1.base)/4));

   mmmm2=mmmm1-Ms;

   MM=Mt-Ms;

   O=MM/(A6-A7);
   O1=MMMX/(A6-A7);
   O2=mmmm2/(A6-A7);


   Z=sqrt(O);
   Z1=sqrt(O1);
   Z2=sqrt(O2);

   int d;
   cout<<"For MoI along the base axis enter '1' and for MoI along the centroidal axis enter '2' "<<endl;
   cout<<" "<<endl;
   cin>>d;
   cout<<" "<<endl;
   if(d==1)
   {
   cout<<"The moment of inertia of the compound figure about base axis is "<< fixed << setprecision(3)<<MMMX<<" mm^4 "<<endl;
   cout<<" "<<endl;

   cout<<" "<<endl;
    cout<<" "<<endl;

   cout<<"The radius of gyration of the compound figure along base axis is "<< fixed << setprecision(3)<< Z1 << " mm "<<endl;
   cout<<" "<<endl;
   }
   else if(d==2)
   {
   cout<<"The moment of inertia of the compound figure about centroidal axis Ixx is "<< fixed << setprecision(3)<<MM<<" mm^4 "<<endl;
   cout<<" "<<endl;
   
   
   cout<<"The moment of inertia of the compound figure about centroidal axis Iyy is "<< fixed << setprecision(3)<<mmmm2<<" mm^4 "<<endl;
   cout<<" "<<endl;

   cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"The radius of gyration of the compound figure along centroidal axis Ixx is "<< fixed << setprecision(3)<< Z << " mm "<<endl;
   cout<<" "<<endl;

   cout<<"The radius of gyration of the compound figure along centroidal axis Iyy is "<< fixed << setprecision(3)<< Z2 << " mm "<<endl;
   cout<<" "<<endl;

   cout<<" "<<endl;
    cout<<" "<<endl;

   cout<<"The polar moment of inertia of the compound along the centroidal axis Izz is "<< fixed << setprecision(3)<< (MM+mmmm2)<< " mm "<<endl;
   cout<<" "<<endl;
   }

   else
   {
    cout<<" Invalid input "<<endl;
    cout<<" "<<endl;
   }
   }
   else
   {
      cout<<" Invalid Input "<<endl;
      cout<<" "<<endl;
   }
}

void Moi1()
{
    float X,Y;
    float x1,x2,x3;
    float y1,y2,y3;
    float A1,A2,A3;
    float M1x,M2x;
    float M1y,M2y;
    float Mx,My;
    float M11,M22;
    float Mp;
    float K1,K2,A,R1,R2;
    float KKK1,KKK2,RRR1,RRR2;
    struct rectangle r1;
    struct rectangle r2;
    struct rectangle r3;


    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"                                                              @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;
    cout<<" "<<endl;          
    cout<<"                                                              @ The centroid, Moment of inertia of a,   @ "<<endl;
    cout<<" "<<endl;
    cout<<"                                                              @ 'I' beam section.                       @ "<<endl;
    cout<<" "<<endl;
    cout<<"                                                              @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

      cout<<" Enter all the values in millimeter. "<<endl;
      cout<< " "<<endl;

    cout<<" Enter the bottom flange thickness. "<<endl;
    cout<<" "<<endl;
    cin>>r1.length;
    cout<<" "<<endl;
    cout<<" Enter the bottom flange width. "<<endl;
    cout<<" "<<endl;
    cin>>r1.breadth;
    cout<<" "<<endl;
    cout<<" Enter the web height. "<<endl;
    cout<<" "<<endl;
    cin>>r2.length;
    cout<<" "<<endl;
    cout<<" Enter the web thickness. "<<endl;
    cout<<" "<<endl;
    cin>>r2.breadth;
    cout<<" "<<endl;
    r3.length=r1.length;
    r3.breadth=r1.breadth;
    cout<<" "<<endl;
   cout<<"|----------- "<< fixed << setprecision(3)<<r3.breadth<<" unit -----------|"<<endl;




   cout<<"                                    "<<endl;
   cout<<" -----------------------------------   "<<"   ___  "<<endl;
   cout<<"|                                   |   "<<"   |   "<<endl;
   cout<<"|                                   |   "<< fixed << setprecision(3)<<  r3.length  <<" unit "<<endl;
   cout<<"|                                   |   "<<"   |   "<<endl;
   cout<<" -----------------------------------   "<<"   ___  "<<endl;
   cout<<"               |      |               "<<"    ___  "<<endl;
   cout<<"               |      |"<<"|-"<< fixed << setprecision(3)<< (r3.breadth-r2.breadth)/2 <<" unit-|     |"<<endl; 
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |                 "<< fixed << setprecision(3)<< (r2.length) << " unit "<<endl;
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |              "<<"      |      "<<endl;
   cout<<"               |      |"<<"|-"<< fixed << setprecision(3)<< (r1.breadth-r2.breadth)/2 <<" unit-|     |"<<endl;
   cout<<"               |      |               "<<"    ___  "<<endl;
   cout<<" -----------------------------------   "<<"   ___  "<<endl;
   cout<<"|                                   |   "<<"   |   "<<endl;
   cout<<"|                                   |   "<< fixed << setprecision(3)<<  r1.length  <<" unit "<<endl;
   cout<<"|                                   |   "<<"   |   "<<endl;
   cout<<" -----------------------------------   "<<"   ___  "<<endl;

   cout<<"                                     "<<endl;
   


   
   cout<<"|----------- "<< fixed << setprecision(3)<<r1.breadth<<" unit -----------|"<<endl;

   cout<<"                                     "<<endl;
   
  

    cout<<" The dimensions of the bottom rectangle are "<< fixed << setprecision(3)<<"["<<r1.length<<","<<r1.breadth<<"]"<<endl;
    cout<<"                                     "<<endl;
    cout<<" The dimensions of the middle rectangle are "<< fixed << setprecision(3)<<"["<<r2.length<<","<<r2.breadth<<"]"<<endl;
    cout<<"                                     "<<endl;
    cout<<" The dimensions of the top most rectangle are "<< fixed << setprecision(3)<<"["<<r3.length<<","<<r3.breadth<<"]"<<endl;
    cout<<"                                     "<<endl;
    
    x1=(r1.breadth)/2;
    y1=(r1.length)/2;

    x2=(r1.breadth)/2;
    y2=((r1.length)+((r2.length)/2));

    x3=(r1.breadth)/2;
    y3=((r1.length)+(r2.length)+((r3.length)/2));

    A1=r1.length*r1.breadth;
    A2=r2.length*r2.breadth;
    A3=r3.length*r3.breadth;

    cout<<" The position of centroid of the bottom rectangle is "<< fixed << setprecision(3)<<"("<< x1 <<","<< y1 <<")"<<endl;
    cout<<"                                     "<<endl;
   
    cout<<" The position of centroid of the middle rectangle is "<< fixed << setprecision(3)<<"("<< x2 <<","<< y2 <<")"<<endl;
    cout<<"                                     "<<endl;
   
    cout<<" The position ofcentroid of the top most rectangle is "<< fixed << setprecision(3)<<"("<< x3 <<","<< y3 <<")"<<endl;
    cout<<"                                     "<<endl;
    
    cout<<" The area of the bottom rectangle is "<< fixed << setprecision(3)<< A1 <<" mm^2 "<<endl;
    cout<<"                                     "<<endl;
    cout<<" The area of the middle rectangle is "<< fixed << setprecision(3)<< A2 <<" mm^2 "<<endl;
    cout<<"                                     "<<endl;
    cout<<" The area of the top most rectangle is "<< fixed << setprecision(3)<< A3 <<" mm^2 "<<endl;
    cout<<"                                     "<<endl;

    A=A1+A2+A3;

    X=((A1*x1)+(A2*x2)+(A3*x3))/(A);

    Y=((A1*y1)+(A2*y2)+(A3*y3))/(A);

    cout<<" The position of centroid of the I figure is "<< fixed << setprecision(3)<<"("<< X <<","<< Y <<")"<<endl;

    cout<<"                                     "<<endl;

    M1x=((r1.breadth)*(r1.length+r2.length+r3.length)*(r1.length+r2.length+r3.length)*(r1.length+r2.length+r3.length))/12;

    M2x=(((r1.breadth-r2.breadth)/2)*(r2.length)*(r2.length)*(r2.length))/12;

    My=((2*r1.length*r1.breadth*r1.breadth*r1.breadth)+(r2.length*r2.breadth*r2.breadth*r2.breadth))/12;

    Mx=(M1x-(2*M2x));

    M11=((r1.breadth*r1.length*r1.length*r1.length)/3 + ((r2.breadth*r2.length*r2.length*r2.length)/12 + A2*y2*y2) + ((r1.breadth*r1.length*r1.length*r1.length)/12 + A3*y3*y3));
    M22=((2*(r1.length*r1.breadth*r1.breadth*r1.breadth))/3) +  ((r2.length*r2.breadth*r2.breadth*r2.breadth)/12 + A2*x2*x2);
   

    R1=Mx/A;

    R2=My/A;

    K1=sqrt(R1);

    K2=sqrt(R2);

    RRR1=M11/A;

    RRR2=M22/A;

    KKK1=sqrt(RRR1);

    KKK2=sqrt(RRR2);

    int N;

    cout<<" For Moi along the base axis enter '1' and for MoI along centroidal axis enter '2' "<<endl;
    cout<<" "<<endl;

    cin>>N;
    cout<<" "<<endl;

    Mp=Mx+My;

    if(N==1)
    {
    cout<<" The Moment of Inertia along the base axis Iox is "<< fixed << setprecision(3)<<M11<<" mm^4 "<<endl;
    cout<<"                                     "<<endl;
    
    
    cout<<" The Moment of Inertia along the base axis Ioy is "<< fixed << setprecision(3)<<M22<<" mm^4 "<<endl;
    cout<<"                                     "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The radius of gyration along the axis Iox is "<< fixed << setprecision(3)<<KKK1<<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" The radius of gyration along the Ioy axis is "<< fixed << setprecision(3)<< KKK2 <<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The polar moment of inertia along base axis Ioz is "<< fixed << setprecision(3)<<(M11+M22)<<" mm^4 "<<endl;
    cout<<" "<<endl;
    }

    else if(N==2)
    {
    cout<<" The Moment of Inertia along the centroidal axis Ixx is "<< fixed << setprecision(3)<<Mx<<" mm^4 "<<endl;
    cout<<"                                     "<<endl;
  
  
    cout<<" The Moment of Inertia along the centroidal axis Iyy is "<< fixed << setprecision(3)<<My<<" mm^4 "<<endl;
    cout<<"                                     "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

      cout<<" The radius of gyration along the axis Ixx is "<< fixed << setprecision(3)<<K1<<" mm "<<endl;
    cout<<" "<<endl;
    cout<<" The radius of gyration along the Iyy axis is "<< fixed << setprecision(3)<< K2 <<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The polar moment of inertia along centroidal axis Izz is "<< fixed << setprecision(3)<<Mp<<" mm^4 "<<endl;
    cout<<" "<<endl;

    }

    else
    {
        cout<<" Invalid input "<<endl;
    }

   
   
   
}
void Moi()
{
    struct square s1;
    struct square s2;
    float X1,Y1;
    float A4,A5;
    float P,Q;
    float Mxx1,Myy1;
    float Mxx2,Myy2;
    float Mxx,Myy;
    float Mox,Moy;
    float Mop;
    float Rs1,Rs2,Ks1,Ks2,Mpp;
    float Rss1,Rss2,Kss1,Kss2;


    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"                                                           @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;
    cout<<" "<<endl;             
    cout<<"                                                           @ The centroid, Moment of inertia of a    @ "<<endl;
    cout<<" "<<endl;
    cout<<"                                                           @ Square section with a hollow square     @ "<<endl;
    cout<<" "<<endl; 
    cout<<"                                                           @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"Enter all the values in mm "<<endl;
    cout<<" "<<endl;
    cout<<"Enter the length for the outer square"<<endl;
    cout<<" "<<endl;
    cin>>s1.length;
    cout<<" "<<endl;
    cout<<"Enter the length for the inner square"<<endl;
    cout<<" "<<endl;
    cin>>s2.length;

    cout<<"   "<<endl;
    cout<<"   "<<endl;



    cout<<" ----------------------------------------------- "<<"     ___     "<<endl;
    cout<<"|                                               |"<<"      |      "<<endl;
    cout<<"|                                               |"<<"      |      "<<endl;
    cout<<"|                                               |"<<"      |      "<<endl;
    cout<<"|           -------------------------    ___    |"<<"      |      "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|          |                         | "<< fixed << setprecision(3)<<s2.length<<          "   |"<<"   "<<s1.length<<"   "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|          |                         |    |     |"<<"      |      "<<endl;
    cout<<"|           -------------------------    ___    |"<<"      |      "<<endl;
    cout<<"|                                               |"<<"      |      "<<endl;
    cout<<"|          |----------"<<s2.length<<"---------|"<<  "          |      "<<"|"<<endl;
    cout<<"|                                               |"<<"      |      "<<endl;
    cout<<" ----------------------------------------------- "<<"     ___     "<<endl; 

    cout<<"  "<<endl;

    cout<<"|-------------------"<< fixed << setprecision(3)<<s1.length<<"---------------------|"<<endl;

    cout<<" "<<endl;

    cout<<"The dimension of the outer square is "<< fixed << setprecision(3)<<s1.length<<" mm "<<endl;
    cout<<" "<<endl;
    cout<<"The dimension of the inner square is "<< fixed << setprecision(3)<<s2.length<<" mm "<<endl;
    cout<<" "<<endl;

    X1=(s1.length)/2;
    Y1=(s1.length)/2;

    cout<<"The position of centroid of the outer square is "<< fixed << setprecision(3)<<"("<<X1<<","<<Y1<<")"<<endl;
    cout<<" "<<endl;
    cout<<"The position of centroid of the inner square is "<< fixed << setprecision(3)<<"("<<X1<<","<<Y1<<")"<<endl;
    cout<<" "<<endl;

    A4=s1.length*s1.length;
    A5=s2.length*s2.length;

    cout<<"The area of the outer square is "<< fixed << setprecision(3)<<A4<<" mm^2 "<<endl;
    cout<<" "<<endl;
    cout<<"The area of the inner square is "<< fixed << setprecision(3)<<A5<<" mm^2 "<<endl;
    cout<<" "<<endl;

    P=((A4*X1)-(A5*X1))/(A4-A5);
    Q=((A4*Y1)-(A5*Y1))/(A4-A5);

    cout<<"The final position of centroid of the whole figure is "<< fixed << setprecision(3)<<"("<<P<<","<<Q<<")"<<endl;
    cout<<" "<<endl;

    Mxx1=((s1.length)*(s1.length)*(s1.length)*(s1.length))/12;
    Myy1=((s1.length)*(s1.length)*(s1.length)*(s1.length))/12;
    Mxx2=((s2.length)*(s2.length)*(s2.length)*(s2.length))/12;
    Myy2=((s2.length)*(s2.length)*(s2.length)*(s2.length))/12;

    Mxx=Mxx1-Mxx2;
    Myy=Myy1-Myy2;

    Mox=((s1.length*s1.length*s1.length*s1.length)/3)-(Mxx2 + A5*Q*Q);
    Moy=((s1.length*s1.length*s1.length*s1.length)/3)-(Myy2 + A5*P*P);
   
    Mpp=Mxx+Myy;

    Mop=Mox+Moy;

    Rs1=Mxx/(A4-A5);
    Rs2=Myy/(A4-A5);

    Ks1=sqrt(Rs1);
    Ks2=sqrt(Rs2);

    Rss1=Mox/(A4-A5);
    Rss2=Moy/(A4-A5);

    Kss1=sqrt(Rss1);
    Kss2=sqrt(Rss2);

    int M;
    cout<<"For Moi along the base axis enter '1' and for MoI along centroidal axis enter '2' "<<endl;
    cout<<" "<<endl;
    cin>>M;
    cout<<" "<<endl;
    if(M==1)
    {
    cout<<"The moment of inertia along the base axis Iox is "<< fixed << setprecision(3)<< Mox <<" mm^4 "<<endl;
    cout<<" "<<endl;
    
    
    cout<<"The moment of inertia along the base axis Ioy is "<< fixed << setprecision(3)<< Moy <<" mm^4 "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"The radius of gyration of the compound figure along base axis Iox is "<< fixed << setprecision(3)<< Kss1 <<" mm "<<endl;
    cout<<" "<<endl;

    cout<<"The radius of gyration of the compound figure along base axis Ioy is "<< fixed << setprecision(3)<< Kss2 <<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"The polar moment of inertia of the fugure along the base axis Ioz  is "<< fixed << setprecision(3)<< Mop <<" mm^4 "<<endl;
    cout<<" "<<endl;

    }
    else if(M==2)
    {
    cout<<"The Moment of Inertia of the figure from the centroidal axis Ixx is  "<< fixed << setprecision(3)<<Mxx<<" mm^4 "<<endl;
    cout<<" "<<endl;
   
   cout<<" The moment of Inertia of the figure from the centroidal axis Iyy is  "<< fixed << setprecision(3)<<Myy<<" mm^4 "<<endl;
    cout<<" "<<endl;

     cout<<" "<<endl;
    cout<<" "<<endl;

     cout<<"The radius of gyration of the figure along Ixx axis is "<< fixed << setprecision(3)<< Ks1 <<" mm "<<endl;
    cout<<" "<<endl;
    cout<<"The radius of gyration of the figure along the Iyy axis is "<< fixed << setprecision(3)<< Ks2 <<" mm "<<endl;
    cout<<" "<<endl;

     cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"The polar moment of inertia of the figure along the centroidal axis Izz is "<< fixed << setprecision(3)<< Mpp <<" mm^4 "<<endl;
    cout<<" "<<endl;
    }

    else
    {
        cout<<" Invalid input "<<endl;
        cout<<" "<<endl;
    }

}

void Moi3()
{

    struct trapezium tr1;
    float yy1;
    float A8;
    float M1,M2,M3,M4;
    float RR1,RR2,RR3;
    float KK1,KK2,KK3;



    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"                                                                @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;
    cout<<" "<<endl;            
    cout<<"                                                                @ The centroid, Moment of inertia of a    @ "<<endl;
    cout<<" "<<endl;
    cout<<"                                                                @ trapezoid section.                      @ "<<endl;
    cout<<" "<<endl; 
    cout<<"                                                                @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" Enter all the values in millimeter. "<<endl;
    cout<<" "<<endl;


    cout<<"Enter the base length for trapezium "<<endl;
    cout<<" "<<endl;
    cin>>tr1.base;
    cout<<" "<<endl;

    cout<<"Enter the top length of a trapezium "<<endl;
    cout<<" "<<endl;
    cin>>tr1.top;
    cout<<" "<<endl;

    cout<<" Enter the height for the trapezium "<<endl;
    cout<<" "<<endl;
    cin>>tr1.height;
    cout<<" "<<endl;


    cout<<" "<<endl;

    cout<<"                      |-------  "<< fixed << setprecision(3) << tr1.top <<"  --------|"<<endl;

    cout<<" "<<endl;


    cout<<"                      *    *    *    *    *     *               ___    "<<endl;
    cout<<"                    * .                         . *              |     "<<endl;
    cout<<"                   *  .                         .  *             |     "<<endl;
    cout<<"                  *   .                         .   *            |     "<<endl;
    cout<<"                 *    .                         .    * "<<"        "<< fixed << setprecision(3) << tr1.height <<"               "<<endl;
    cout<<"                *     .                         .     *          |     "<<endl;
    cout<<"               *      .                         .      *         |     "<<endl;
    cout<<"              *       .                         .       *        |     "<<endl;
    cout<<"             *   *    *    *    *    *    *     *    *   *      ___    "<<endl;

    cout<<" "<<endl;
    
    cout<<"            |------------------  "<< fixed << setprecision(3) << tr1.base <<"  ------------------|"<<endl;

    cout<<" "<<endl;

    yy1=((tr1.height/3) * (((2*tr1.top)+tr1.base)/(tr1.top + tr1.base)));

    cout<<" The position of the centroid is "<< fixed << setprecision(3)<<"("<<(tr1.base)/2<<","<<yy1<<")"<<endl;
    cout<<" "<<endl;

    A8=(tr1.base + tr1.top)*((tr1.height)/2);

    cout<<" The area of the trapezium is "<< A8 << " mm^2 "<<endl;
    cout<<" "<<endl;

    M1=(((tr1.height)*(tr1.height)*(tr1.height))*(((tr1.top)*(tr1.top)) + (4*(tr1.base)*(tr1.top)) + ((tr1.base)*(tr1.base))))/((36)*(tr1.top + tr1.base));
    M2=(((tr1.height)*(tr1.base+tr1.top)*(((tr1.base)*(tr1.base))+((tr1.top)*(tr1.top)))))/(48);

    RR1=2 + (4*tr1.base*tr1.top)/((tr1.base + tr1.top)*(tr1.base + tr1.top));
    KK1=((tr1.height)*(sqrt(RR1)))/6;
    RR2=(6*((tr1.top)*(tr1.top)+ ((tr1.base)*(tr1.base))));
    KK2=(sqrt(RR2))/12;

    M3=((tr1.height*tr1.height*tr1.height)*(3*tr1.top + tr1.base))/12;

    RR3=(18*tr1.top + 6*tr1.base)/(tr1.base+tr1.top);
    KK3=((tr1.height)*(sqrt(RR3)))/6;


    int a;
    cout<<" Enter 1 to get moment of inertia along the base axis and 2 to get moment of inertia along centroidal axis "<<endl;
    cout<<" "<<endl;
    cin>>a;
    if(a==1)
    {
    cout<<" The moment of inertia of the given trapezium along Iox is "<< fixed << setprecision(3)<<M3<<" mm^4 "<<endl;
    cout<<" "<<endl;
    
    
    cout<<" The moment of inertia of the given trapezium along Ioy is "<< fixed << setprecision(3)<<M2<<" mm^4 "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The radius of gyration of the figure about Iox axis is "<< fixed << setprecision(3)<< KK3 <<" mm "<<endl;
    cout<<" "<<endl;
    cout<<" The radius of gyration of the figure about Ioy axis is "<< fixed << setprecision(3)<< KK2 <<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The polar moment of inertia along Ioz is "<< fixed << setprecision(3)<< (M3+M2) <<" mm^4 "<<endl;
    cout<<" "<<endl;
    }
    else if(a==2)
    {
    cout<<" The moment of inertia of the given trapezium along Ixx is "<< fixed << setprecision(3)<<M1<<" mm^4 "<<endl;
    cout<<" "<<endl;
   
   
    cout<<" The moment of inertia of the given trapezium along Iyy is "<< fixed << setprecision(3)<<M2<<" mm^4 "<<endl;
    cout<<" "<<endl;

     cout<<" "<<endl;
    cout<<" "<<endl;

     cout<<" The radius of gyration of the figure about Ixx axis is "<< fixed << setprecision(3)<< KK1 <<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" The radius of gyration of the figure about Iyy axis is "<< fixed << setprecision(3)<< KK2 <<" mm "<<endl;
    cout<<" "<<endl;

     cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The polar moment of inertia along Izz is "<< fixed << setprecision(3)<< (M1+M2) <<" mm^4 "<<endl;
    cout<<" "<<endl;
    }
    else
    {
        cout<<" Invalid input "<<endl;
        cout<<" "<<endl;
    }
    
    
}

void MoI4()
{
    struct circle c1;
    struct circle c2;
    float S1,S2;
    float AAA1,AAA2;
    float mmm1,mmm2,mmm3,mmm4,mmm5,mmm6;
    float rrr1,kkk1,rrr2,kkk2;
    float rrr3,kkk3,rrr4,kkk4;


    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"                                                               @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;
    cout<<" "<<endl;             
    cout<<"                                                               @ The centroid, Moment of inertia of a    @ "<<endl;
    cout<<" "<<endl;
    cout<<"                                                               @ circular section with an inner circle.  @ "<<endl;
    cout<<" "<<endl; 
    cout<<"                                                               @  @  @  @  @  @  @  @  @  @  @  @  @  @  @ "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

      cout<<" Enter all the values in millimeter. "<<endl;
      cout<<" "<<endl;



    cout<<" "<<endl;
    cout<<" PLease enter the radius of the outer circle "<<endl;
    cout<<" "<<endl;
    cin>>c1.radius;
    cout<<" "<<endl;
    cout<<" Please enter the radius of the hollow inner circle "<<endl;
    cout<<" "<<endl;
    cin>>c2.radius;

    cout<<" "<<endl;

    cout<<"                      ***********                     "<<endl;
    cout<<"                  ***             ***                 "<<endl;
    cout<<"               **                     **              "<<endl;
    cout<<"            **                           **           "<<endl;
    cout<<"          *                                 *         "<<endl;
    cout<<"        **              ******               **       "<<endl;
    cout<<"      **             **        **              **     "<<endl;
    cout<<"     *             **            **              *    "<<endl;
    cout<<"    *             *                *              *   "<<"  ___  "<<endl;
    cout<<"    *             *                *              *   "<<"   |   "<<endl;
    cout<<"     *             **            **              *    "<<"   |   "<<endl;
    cout<<"      **             **        **              **     "<<"   |   "<<endl;
    cout<<"        **              ******               **       "<<" "<<c1.radius<<" "<<endl;
    cout<<"          *                                 *         "<<"   |   "<<endl;
    cout<<"            **                           **           "<<"   |   "<<endl;
    cout<<"               **                     **              "<<"   |   "<<endl;
    cout<<"                  ***             ***                 "<<"   |   "<<endl;
    cout<<"                      ***********                     "<<"  ___  "<<endl;

    cout<<" "<<endl;
    cout<<"                           "<<"|--"<<c2.radius<<"--|"<<endl;

    cout<<" "<<endl;

    cout<<" The position of centroid of the outer circle is "<<"("<<c1.radius<<","<<c1.radius<<")"<<endl;
    cout<<" "<<endl;
    cout<<" The position of centroid of the inner circle is "<<"("<<c1.radius<<","<<c1.radius<<")"<<endl;
    cout<<" "<<endl;

    cout<<" The position of centroid of the compound figure is "<<"("<<c1.radius<<","<<c1.radius<<")"<<endl;
    cout<<" "<<endl;

    AAA1=(3.1414)*(c1.radius*c1.radius);
    AAA2=(3.1414)*(c2.radius*c2.radius);

    cout<<" The area of the outer circle is "<< AAA1 << " mm^2 "<<endl;
    cout<<" "<<endl;
    cout<<" The area of the inner circle is "<< AAA2 << " mm^2 "<<endl;
    cout<<" "<<endl;

    mmm1=((3.1416)*(c1.radius*c1.radius*c1.radius*c1.radius))/4;
    mmm2=((3.1416)*(c2.radius*c2.radius*c2.radius*c2.radius))/4;
    rrr1=(mmm1-mmm2)/(AAA1-AAA2);
    mmm3=(1.25*3.1416)*c1.radius*c1.radius*c1.radius*c1.radius;
    mmm4=mmm2+(AAA2*c1.radius*c1.radius);
    kkk1=sqrt(rrr1);
    rrr3=(mmm3-mmm4)/(AAA1-AAA2);
    kkk3=sqrt(rrr3);

    int aa;
    cout<<" For MoI along the base axis enter '1' or for MoI along the centroidal axis enter '2' "<<endl;
    cout<<" "<<endl;
    cin>>aa;
    cout<<" "<<endl;
    if(aa==1)
    {
    cout<<" The Moment of inertia along the base axis  Iox is "<<(mmm3-mmm4) <<" mm^4 "<<endl;
    cout<<" "<<endl;
  
  
    cout<<" The moment of inertia along the base axis Ioy is "<<(mmm3-mmm4) <<" mm^4 "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The radius of gyration along the base axis  Iox is "<<kkk3<<" mm "<<endl;
    cout<<" "<<endl;
    cout<<" The radius of gyration along the base axis Ioy  is "<<kkk3<<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<" The polar moment of inertia along the base axis Ioz "<<2*(mmm3-mmm4)<<" mm^4 "<<endl;
    cout<<" "<<endl;    
    }
    else if(aa=2)
    {

    cout<<" The Moment of inertia along the centroidal Ixx axis is "<<(mmm1-mmm2) <<" mm^4 "<<endl;
    cout<<" "<<endl;
   
   
    cout<<" The moment of inertia along the centroidal Iyy axis is "<<(mmm1-mmm2) <<" mm^4 "<<endl;
    cout<<" "<<endl;


    cout<<" "<<endl;
    cout<<" "<<endl;


    cout<<" The radius of gyration along the centroidal Ixx axis is "<<kkk1<<" mm "<<endl;
    cout<<" "<<endl;
    cout<<" The radius of gyration along the centroidal Iyy axis is "<<kkk1<<" mm "<<endl;
    cout<<" "<<endl;

    cout<<" "<<endl;
    cout<<" "<<endl;

    

    cout<<" The polar moment of inertia along the centroidal Izz axis "<<2*(mmm1-mmm2)<<" mm^4 "<<endl;
    cout<<" "<<endl;
    }
    else
    {
        cout<<" Invalid input"<<endl;
        cout<<" "<<endl;
    }




}

void nm()
{
    int n;
    
    cout<<" To get centroids, moment of inertia and radius of gyration:"<<endl;
    cout<<" "<<endl;
   
    cout<<"@  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @"<<endl;
    cout<<" "<<endl;
    cout<<"@  Enter '1' : 'I' beam section.                                     @"<<endl;
    cout<<" "<<endl;
    cout<<"@  Enter '2' : Square section with an inner hollow square.           @"<<endl;
    cout<<" "<<endl;
    cout<<"@  Enter '3' : Triangular section with an inner hollow square.       @"<<endl;
    cout<<" "<<endl;
    cout<<"@  Enter '4' : Trapezoidal section.                                  @"<<endl;
    cout<<" "<<endl;
    cout<<"@  Enter '5' : Circular section with an inner hollow circle.         @"<<endl;
    cout<<" "<<endl;
    cout<<"@  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @  @"<<endl;
    cout<<" "<<endl;
    cin>>n;
    cout<<" "<<endl;
     
    if(n==2)
    {
    Moi();
    }
    else if(n==1)
    {
    Moi1();
    }
    else if(n==3)
    {
        MoI2();
    }
    else if(n==4)
    {
        Moi3();
    }
    else if(n==5)
    {
        MoI4();
    }
    else
    {
        cout<<" Invalid input "<<endl;
        cout<<" "<<endl;
    }
}

void mn()
{
    int v;
    cout<<"Enjoying yet? There's always more in this world."<<endl;
    cout<<" "<<endl;
    cout<<"Enter 1 to continue and 2 to exit "<<endl;
    cout<<" "<<endl;
    cin>>v;
    cout<<" "<<endl;
    if(v==2)
    {
        cout<<" "<<endl;
        cout<<" Thank You!, hope you enjoyed. "<<endl;
        cout<<" "<<endl;

        cout<<" Ps:- We enjoyed the assignment. "<<endl;
        cout<<" "<<endl;

        cout<<" The assignment is done by the following students:- "<<endl;
        cout<<" "<<endl;
        cout<<" Dhyan Shah, 22BCP269 "<<endl;
        cout<<" "<<endl;
        cout<<" Aneri Shah, 22BCP280 "<<endl;
        cout<<" "<<endl;
        cout<<" Khushi Shah, 22BCP258 "<<endl;
        cout<<" "<<endl;
        cout<<" Ozee Pareek, 22BCP445 "<<endl;
        cout<<" "<<endl;
        cout<<" Heer Patel, 22BCP449 "<<endl;
        cout<<" "<<endl;

    }
    else if(v==1)
    {
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        nm();
        mn();
      
    }
    else
    {
        cout<<" Invalid input "<<endl;
        cout<<" "<<endl;
    }
    
}


int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"Good morning professor."<<endl;
    cout<<" "<<endl;
    cout<<"With your permission and blessings, we welcome you to the CoG and MoI world."<<endl;
    cout<<" "<<endl;

    cout<<"And the game begins, choose your first compound shape. "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;

    nm();
    mn();
   
   return 0;

}