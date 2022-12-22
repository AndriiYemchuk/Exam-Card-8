#include <iostream>
using namespace std;
int main()
{
   double array[] = {3, 1, 2, 0.5, 5, 8, -8, 6, 56, 13, 24, 0.3, -3, 2};
   int i=0;
   int j =0;
   double result;
   int sum2=0;
   int indicator =0;

   cout << endl;
   cout << "Початковий масив: ";

   while(j<14)
   {
      i=array[j];

      cout << array[j] << " ";

      j++;
   }
   cout << endl;
   cout << endl;
   j=0;
   while(j<14)
   {
      i = array[j];

      if((j%2)!=0)
      {
         result = result+array[j];
      }

      j++;
   }
   j=0;
   while(j<14)
   {
      i = array[j];

      if(array[j]<0&indicator==0)
      {
         indicator=1;
         j++;
      }
      else if(array[j]<0&indicator==1)
      {
         indicator=0;
      }
      if(indicator==1)
      {
         sum2= sum2+array[j];
      }


      j++;
   }
   cout << "Сума елементів масиву з непарними номерами: " << result << endl;
   cout << "Сума елементів масиву, розташованих між першим і останнім від’ємними елементами: " << sum2 << endl;
   cout << "Перероблений масив: ";

   j=0;
   while(j<14)
   {
      i = array[j];

      if(abs(array[j])<1)
      {
         cout << "0 ";
      }
      else if(abs(array[j])>=1)
      {
         cout << array[j] << " ";
      }


      j++;
   }
   cout << endl;
   cout << endl;

}