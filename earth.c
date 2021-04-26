#include<stdio.h>
#include<math.h>
void main()
{
  float L1,L2,G1,G2,D;
  printf("Enter the latitudes in degrees: ");
  scanf("%f%f",&L1,&L2);
  L1=L1*(22/1260);
  L2=L2*(22/1260);
  printf("Enter the longitudes in degrees: ");
  scanf("%f%f",&G1,&G2);
  G1=G1*(22/1260);
  G2=G2*(22/1260);
  D=3963*acos((sin(L1)*sin(L2))+(cos(L1)*cos(L2)*cos(G2-G1)));
  printf("DISTANCE = %f Nautical Miles\n\n",D);
}
