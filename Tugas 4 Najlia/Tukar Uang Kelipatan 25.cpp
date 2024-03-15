#include <conio.h>
#include <iostream.h>
main()

{
   int uang, satuan, limapuluhan, ratusan, limaratusan, ribuan, sisa, puluhan;  
   int sisaAkhir;
   char mencoba;
   mencoba ='y';
   do
   {clrscr();
   cout<<"NILAI TUKAR PECAHAN RUPIAH"<<endl;
   cout<<"---------------------------------------------"<<endl<<endl;
   cout<<"Masukkan Jumlah Uang : Rp. "; cin>>uang; cout<<endl;
   cout<<"---------------------------------------------"<<endl<<endl;
   ribuan=uang/1000;
   sisa=uang-(ribuan*1000);
   {
    {if(sisa!=0)
     {limaratusan=sisa/500;
      sisa=sisa-(limaratusan*500);}
   else
     {limaratusan=0;}
     }
   {if(sisa!=0)
     {ratusan=sisa/100;
      sisa=sisa-(ratusan*100);}
   else
     {ratusan=0;}
     }
   {if(sisa!=0)
     {limapuluhan=sisa/50;
      sisa=sisa-(limapuluhan*50);}
   else
     {limapuluhan=0;}
     }
   {if(sisa!=0)
     {puluhan=sisa/25;
      sisa=sisa-(puluhan*25);}
   else
     {puluhan=0;}
     }
   {if(sisa!=0)
     {sisaAkhir=sisa;}
   else
     {sisaAkhir=0;}
     }
     }
   cout<<"("<<ribuan<<"x1000)"<<"+("<<limaratusan<<"x500)"<<"+(";
   cout<<ratusan<<"x100)"<<"+("<<limapuluhan<<"x50)"<<"+("<<puluhan<<"x25)";
   cout<<"+("<<sisaAkhir<<"Sisa)"<<endl<<endl;
   cout<<"-------------------------------------------- "<<endl<<endl;
   cout<<" Mencoba Lagi ? [Y/T] : "; cin>>mencoba;}
   while ((mencoba == 'Y')||(mencoba == 'y'));
   getch();
}