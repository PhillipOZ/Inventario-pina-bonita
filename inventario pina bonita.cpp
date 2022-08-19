#include<stdio.h>
int aa,ab,ac,ad,ae,af,ag,ah,ai,aj;
float ba,bb,bc,bd,be,bf,bg,bh,bi,bj;
float ca,cb,cc,cd,ce,cf,cg,ch,ci,cj;
int x,y,w;


  main(){
  	printf("\n\n invetario de pina bonita\n");
  	printf("(1)Bolsas LV                          (2)bolsas formales\n");
  	printf("(3)Bolsas Gucci                       (4)bolsas nino\n");
  	printf("(5)Bolsas Genericas                   (6)bolsas kipling\n");
  	printf("(7)Bolsas chicas                      (8)bolsas unico.\n");
  	printf("(9)Bolsas Cangurera                   (10)bolsas 3D\n");
  	
  	printf("\nSelecione en numero del producto para modificarlo (presione 11 para ver el inventario y 12 para salir del inventario)\n");
  	scanf("%d",&x);



	if (x>=13){
	printf("el numero no es valido\n");
   return main();
   }
   if (x<=0){
   printf("el numero no es valido\n");
   return main();
    }
   y=(aa+ab+ac+ad+ae+af+ag+ah+ai+aj);
   w=(ca+cb+cc+cd+ce+cf+cg+ch+ci+cj);
    
    switch(x){
    	
    	
   case 1:
   	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&aa);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&ba); 
   	ca=aa*ba;
   	return main();
   	break;
        
   case 2:
   	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&ab);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bb); 
   	cb=ab*bb;
   	return main();
   	break;
   	
  case 3:
  	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&ac);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bc); 
   	cc=ac*bc;
   	return main();
   	break;
   	
  case 4:
  	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&ad);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bd); 
   	cd=ad*bd;
   	return main();
   	break;
   	
  case 5:
  	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&ae);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&be); 
   	ce=ae*be;
   	return main();
   	break;
   	
   case 6:
   	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&af);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bf); 
   	cf=af*bf;
   	return main();
   	break;
   	
   case 7:
   	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&ag);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bg); 
   	cg=ag*bg;
   	return main();
   	break;
   	
  case 8:
  	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&ah);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bh); 
   	ch=ah*bh;
   	return main();
   	break;
   	
  case 9:
  	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&ai);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bi); 
   	ci=ai*bi;
   	return main();
   	break;
   	
  case 10:
  	printf("\nintroduce la cantidad del producto");
   	scanf("%d",&aj);
   	printf("\nintroduce el precio del producto");
   	scanf("%f",&bj); 
   	cj=aj*bj;
   	return main();
   	break;
   		
  case 11:
  	printf("inventario registrado");
  	
  	printf("\n1                    existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",aa,ba,ca);
  	
  	printf("2                  existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ab,bb,cb);
  	
  	printf("3                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ac,bc,cc);
  	
  	printf("4                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ad,bd,cd);
  	
  	printf("5                    existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ae,be,ce);
  	
  	printf("6                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",af,bf,cf);
  	
  	printf("7                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ag,bg,cg);
  	
  	printf("8                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ah,bh,ch);
  	
  	printf("9                    existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ai,bi,ci);
  	
  	printf("10                 existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",aj,bj,cj);
  	
  	printf("\nTotal de heramintas..........%d                                           Suma total...$ %.2d\n",y,w);
  	
  	return main();
  	break;
  	
  	
  case 12:
  	printf("inventario registrado");
  	
  	printf("\n1                    existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",aa,ba,ca);
  	
  	printf("2                  existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ab,bb,cb);
  	
  	printf("3                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ac,bc,cc);
  	
  	printf("4                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ad,bd,cd);
  	
  	printf("5                    existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ae,be,ce);
  	
  	printf("6                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",af,bf,cf);
  	
  	printf("7                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ag,bg,cg);
  	
  	printf("8                   existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ah,bh,ch);
  	
  	printf("9                    existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",ai,bi,ci);
  	
  	printf("10                 existentes..............%d           Precio c/u....$ %.2f       Dinero total......$ %.2f\n",aj,bj,cj);
  	
  	printf("\nTotal de heramintas..........%d                                           Suma total...$ %.2d\n",y,w);
  	
  	break;
  	return 0;
  	
  	
  	
   	
	}
  	 
  
  	
           
  } 
  
  
