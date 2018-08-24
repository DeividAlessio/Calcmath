#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{		int cat, lingua,m=1,r=1,name, pos, fimda=1;
		int ordem, i, j, det2, det3, det4;
		int A,a,B=1,b=1,C=0,c,D,d,E,e,Z=1,z=1,asdf=0,oiuy=0,yuio=0, bob,aux1=0,aux2=0;
		char n,slas;
		double y,Y,x,X,g,k;
		float aa, bb, cc, x1, x2, raiz, delta, V0, Ac, Te, Vel, Velq, delT, Ti, Tf, Respo, h, h0, varV;

printf("\nEscolha a língua: Digite 1 para português\nChoose the language: Type 2 for English\n\n");
scanf("%d", &lingua);
if(lingua==1)
{
while(r!=0)
{
printf("Escolha a categoria:\n\t Digite 1: Calculos Básicos\n\t Digite 2: Calculos Física\n\t Digite 3: Tabela Lógica\n\t Digite 0: Para sair\n");
scanf("%d", &cat);

if (cat==1){
	
while(b!=0)
{
	Z=1;
		//calculo básico
	printf("Soma Básica\n Digite 1: Soma e/ou subtração\n Digite 2: Divisão\n Digite 3: Multiplicação\n Digite 4: Tirar Raiz\n Digite 5: Colocar em Raiz\n Digite 6: Bháskara\n Digite 7: Regra de três \n Digite 8: Calcular determinante\n Para sair digite: 0\n");
	scanf("%d", &b);
	
	
		//se escolher determinante
		
		if(b==8){
		while(Z!=0){
		printf("Digite a ordem da matriz quadrada\n");
    scanf("%d", &ordem);
   
    int matriz[ordem][ordem];
   
    printf("Digite os numeros da matriz: \n");
   
    for(i=0; i<ordem; i++){
             for(j=0; j<ordem; j++){
                     
                      scanf("%d", &matriz[i][j]);
                     
                      }
             }
      
   
    printf("\nA matriz digitada foi:\n\n");
         
    for(i=0; i<ordem; i++){
             printf("\n");
             
             for(j=0; j<ordem; j++){
                     
                      printf(" %d ", matriz[i][j]);
                     
                      }
             }
     printf("\n\n");        

          if(ordem == 2){
         
          det2 = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
         
          printf("O determinante e: %d\n\n", det2);
               
          }
     
         
          if(ordem == 3){
         
          det3 = (matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][2]*matriz[1][0]*matriz[2][1])
          - ((matriz[0][1]*matriz[1][0]*matriz[2][2]) + (matriz[0][0]*matriz[1][2]*matriz[2][1]) + (matriz[0][2]*matriz[1][1]*matriz[2][0]));
         
          printf("O determinante e: %d\n\n", det3);
         
          }
         
          if(ordem == 4){
         
          det4 = (matriz[0][0] * ((matriz[1][1]*matriz[2][2]*matriz[3][3]) + (matriz[1][2]*matriz[2][3]*matriz[3][1]) + (matriz[1][3]*matriz[2][1]*matriz[3][2])
          - ((matriz[1][2]*matriz[2][1]*matriz[3][3]) + (matriz[1][1]*matriz[2][3]*matriz[3][2]) + (matriz[1][3]*matriz[2][2]*matriz[3][1]) )))
         
          + ( (-matriz[0][1]) * ((matriz[1][0]*matriz[2][2]*matriz[3][3]) + (matriz[1][2]*matriz[2][3]*matriz[3][0]) + (matriz[1][3]*matriz[2][0]*matriz[3][0])
          - ((matriz[1][2]*matriz[2][0]*matriz[3][3]) + (matriz[1][0]*matriz[2][3]*matriz[3][2]) + (matriz[1][3]*matriz[2][2]*matriz[3][0]) )))
         
          + ( matriz[0][2] * ((matriz[1][0]*matriz[2][1]*matriz[3][3]) + (matriz[1][1]*matriz[2][3]*matriz[3][0]) + (matriz[1][3]*matriz[2][0]*matriz[3][1])
          - ((matriz[1][1]*matriz[2][0]*matriz[3][3]) + (matriz[1][0]*matriz[2][3]*matriz[3][1]) + (matriz[1][3]*matriz[2][1]*matriz[3][0]) )))
         
          + ((-matriz[0][3]) * ((matriz[1][0]*matriz[2][1]*matriz[3][2]) + (matriz[1][1]*matriz[2][3]*matriz[3][0]) + (matriz[1][3]*matriz[2][0]*matriz[3][1])
          - ((matriz[1][1]*matriz[2][0]*matriz[3][2]) + (matriz[1][0]*matriz[2][3]*matriz[3][1]) + (matriz[1][3]*matriz[2][1]*matriz[3][0]))));    
   
          printf("O determinante e: %d\n\n", det4);
          }  
          printf("Para sair digite 0, caso contrario digite qualquer outro numero\n");
          scanf("%d", &Z);
		}
		}
		// fim determinante
		//se escolher soma
	if (b==1)
	{
		
		while(Z!=0)
		{	
			Z=0;
			C=0;

				printf("\nDigite os numeros para serem somados e/ou subtraidos, quando acabar tecle 0 \n");
				while(B!=0)
				{
					scanf("%d", &B);
					C=C+B;
				}
				printf("Resultado é = %d\n\n", C);
			Z=1;
			printf("Para sair tecle 0, para continuar digite qualquer outro número\n");
			scanf("%d", &Z);


		}
	}


		//fim soma

		//se escolher divisão

	if(b==2)
	{	
		while(Z!=0){
			printf("\nDigite os números a serem divididos\n");
			scanf("%lf%lf", &x, &X);
			y=0;
			y=x/X;
			printf("Resultado é = %.2lf\n\n", y);
			printf("Para sair tecle 0, para continuar digite qualquer outro número\n");
			scanf("%d", &Z);
		}	
	}


		//fim divisão


	
		//se escolher multiplicação
	 else if (b==3){	
	                          
	                          while(Z!=0){
						Y=1;
			                     printf("Na primeira linha digite quantos algarismo vão ser multiplicados\n");
			                     scanf("%lf", &y);			           
			                     while(y!=0){
				                      scanf("%lf", &x);
				                      Y=x*Y;
				                      y--;				           
			                      }
			                      printf("Resultado é = %.2lf\n\n", Y);
			                      printf("Para sair digite 0, para continuar digite qualquer outro número\n");
			                      scanf("%d", &Z);			          
			                  }		       
	                      }

		//fim multiplicação

		
		//se escolher tirar raiz
	 else if(b==4){	
	                              while(Z!=0){
		                             	printf("Digite na primeira linha qual é o tipo de raiz, (quadrada) ou (cubica)\n Digite 2 para raiz quadrada ou 3 para raiz cubica\n");	             	        
			                          C=0;
			                          c=0;
			                          scanf("%d", &Z);              
		
			                          if(Z==2){	
		                          	     printf("Digite o número\n");
		                          	     scanf("%d", &A);
			                              x=sqrt(A);
		                              	printf("%.2lf\n\n", x);
		                              	printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                                   scanf("%d", &Z);
			                          }

			                          else if(Z==3){
			                              printf("Digite o número\n");
			                              scanf("%d", &A);
				                          g=cbrt(A);
				                          printf("Resultado é = %.2lf\n\n", g);
				                          printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                                    scanf("%d", &Z);
			                          }
			                          else{
				                          printf("Desculpe mas esse programa calcula apenas raiz (quadrada) ou (cubica)\n");
				                          printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                                    scanf("%d", &Z);
			                          }	               
		                          }	               
	                      }
	

		//se escolher colocar raiz
		
		 else if(b==5){	
		                      while(Z!=0){
	
		                      	printf("Digite na primeira linha qual é o tipo de raiz, (quadrada) ou (cubica)\n Digite 2 para raiz quadrada ou 3 para raiz cubica\n");
		                      	C=0;
		                      	scanf("%d", &a);

		                      	if(a<2 || a>3){
		                      		 printf("Desculpe mas esse programa calcula apenas raiz (quadrada) ou (cubica)\n");
				                     printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                               scanf("%d", &Z);
		                      	}

		                      	if(a==2){
		                      	    printf("Digite o número\n");
		                          	scanf("%d", &d);
	
		                      		C=d*d;
		                      		a--;
		                          	printf("Resultado é = %d\n", C);
		                          	printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                              scanf("%d", &Z);
		                      	}
                      	    	if(a==3){	
                      	    	    printf("Digite o número\n");
                          			scanf("%d", &d);
                      				D=d*d*d;
                      				a--;
                          			printf("Resultado é = %d\n", D);
                          	          printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                              scanf("%d", &Z);
                      			}
                      		}
                      	}	
	
		//fim colocar raiz


		//se escolher Bháskara


		 else if(b==6){
			                  while(Z!=0){
			                        printf ("\n Digite o valor do fator A: ");
				                   scanf  ("%d", &a); 
                                       printf ("\n Digite o valor do fator B: ");
                                       scanf ("%d", &b);
                                       printf ("\n Digite o valor do fator C: ");
                                       scanf ("%d", &c);
                                       bob = (b*b)-4*a*c; 
                                       if ((bob < 0)){
                                             printf ("\n  O delta e %d, ou seja, negativo, portanto nao existem raizes reais! \n\n", bob);
	                  	                	printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                                   scanf("%d", &Z);    
                                       }
                                       else{
                                            raiz = sqrt(bob);
                                            x1 = (-b+raiz)/2*a;
                                            x2 = (-b-raiz)/2*a;
                                            printf ("\n   O resultado e: X1 = %.2f e X2 = %.2f !\n\n", x1,x2);
		                                  printf("Para sair digite 0, para continuar digite qualquer outro número\n");
		                                  scanf("%d", &Z);   
                                       }
                                }
			            }		            

		
	

		//fim Bháskara
      else if(b==7)
     {
          while(Z!=0)
          {	
	/*	printf("\nAntes de fazer uma regra de três precisamos saber se o resultado tende a ser maior ou menor do numero comparado\nSe tende a ser menor digite: 1\nSe tende a ser maior digite: 2\n\n");
		scanf("%d", &a);
		if (a==1)
		{*/
			printf("\nAbaixo temos um exemplo de regra de três\n\n Z ----- Y\n X ----- Y2\n\n Digite o valor correspondente para Z:\t");
                	scanf("%lf", &x);
               		printf(" Digite o valor correspondente para Y:\t");
               		scanf("%lf", &y); 
               		printf(" Digite o valor correspondente para Y2:\t");
               		scanf("%lf", &Y);	
               		X=(x*Y)/y;
			printf("O resultado é: %.2lf\n\n", X);
               		printf("Para sair tecle 0, para continuar digite qualquer outro número\n");
			scanf("%d", &Z);
		/*}
		else if (a==2)
			{	
					printf("\nAbaixo temos um exemplo de regra de três\n\n Z ----- Y\n X ----- Y2\n\n 	Digite o valor correspondente para Z:\t");
	                	scanf("%lf", &x);
	               		printf(" Digite o valor correspondente para Y:\t");
	               		scanf("%lf", &y); 
	               		printf(" Digite o valor correspondente para Y2:\t");
	               		scanf("%lf", &Y);	
	               		X=(x*y)/Y;
				printf("O resultado é: %.2lf\n\n", X);
	               		printf("Para sair tecle 0, para continuar digite qualquer outro número\n");
				scanf("%d", &Z);
	
			}
			else
			{
			printf("Acho que você não leu com atenção\n\n");	
			Z=1;
			}*/
	          }
		}
		
	}
	}
	m=1;
	if (cat==2)
	while (m!=0)
{
		{
		printf("O que gostaria de descobrir?\n\t Digite 1: Velocidade\n\t Digite 2: Altura Final (movimento vertical)\n\t Digite 3: Aceleração\n\t Digite 4: Deslocamento/Posição\n");
		scanf("%d", &b);
	
		asdf=0;
		oiuy=0;
		yuio=0;
		
		if(b==3)
		{
			printf("Adicione valores para os itens a seguir, se não tiver um valor coloque apenas 'n'\n");
			printf("Velocidade inicial: ");
			scanf("%f", &Vel);
			printf("Velocidade final: ");
			scanf("%f", &Velq);
			if(Velq==n || Vel==n)
				{
				printf("Variação da Velocidade: ");
				scanf("%f", &varV);
				asdf=1;
				}
			printf("Tempo inicial: ");
			scanf("%f", &Ti);
			printf("Tempo final: ");
			scanf("%f", &Tf);
			if(Ti==n || Tf==n)
			{
				printf("Variação de Tempo: ");
				scanf("%f", &delT);
				oiuy=1;
			}
			printf("Variação da Distância: ");
			scanf("%f", &cc);
			
			
	
	
			
			if(aa==n && bb==n)
			{
				if(asdf==1 && oiuy==1)
				{
					Ac=varV/delT;
					printf("O resultado é = %.2f\n", Ac);
				}
				else if(asdf==1 && oiuy==0)
				{
					Ac=varV/(Tf-Ti);
					printf("O resultado é = %.2f\n", Ac);
				}
				else if(asdf==0 && oiuy==1)
				{
					Ac=(Velq-Vel)/delT;
					printf("O resultado é = %.2f\n", Ac);
				}
				else if(asdf==0 && oiuy==0)
				{
					Ac=(Velq-Vel)/(Tf-Ti);
					printf("O resultado é %.2f\n", Ac);
				}
				
				
				else if(Ti==n && Tf==n)
				{	
				Ac=((Velq*Velq)-(Vel*Vel))/(2*cc);
				printf("A resposta é = %.2f\n", Ac);
				if(Velq==n && Vel==n)
				{
					printf("Ops, erro!!!\n");
				}
				}
	
				else if(Velq==n && Vel!=n && cc!=n)
				{
				if(asdf==1)
				{
					Ac=(cc-Vel*(Ti-Tf))/(1/2*((Ti-Tf)*(Ti-Tf)));
					printf("A resposta é = %.2f\n", Ac);
				}
				
				else if(asdf==0)
				{
					Ac=(cc-Vel*delT)/(1/2*(delT*delT));
					printf("A resposta é = %.2f\n", Ac);
				}
				else
				{
					printf("Aparentemente houve um erro!!!\n");
				}
				}
			}
				if(asdf==0 && Ti!=n && Tf!=n && Vel!=n && Velq!=n && oiuy==0 && aa!=n && bb!=n)
				{
					printf("Ouve um erro!!!\n");
				}
	
		}
	
		if (b==2)
		{
			printf("Adicione valores para os itens a seguir\n");
			printf("Altura inicial: ");
			scanf("%f", &h0);
			printf("Velocidade Inicial: ");
			scanf("%f", &V0);
			printf("Tempo: ");
			scanf("%f", &delT);
			if(h0!=n && V0!=n && delT!=n)
			{
				h=h0+V0*delT-1/2*9,8*(delT*delT);
				printf("%.2f\n", h);
			}
			else
			{
				printf("Parece ter alguma coisa errada!!!\n");
			}
		}



	
	
		if (b==4)
		{
			printf("Adicione valores para os itens a seguir, caso não tenha algum valor coloque 'n'\n");
			printf("ΔT, variação do Tempo: ");
			scanf("%f", &delT);
	
			if (delT==n)
			{
				printf("TI, tempo inicial: ");
				scanf("%f", &Ti);
				printf("TF, tempo final: ");
				scanf("%f", &Tf);
				delT=Tf-Tf;
			}
			printf("V, velocidade: ");
			scanf("%f", &Vel);
			printf("V0, velocidade inicial: ");
			scanf("%f", &V0);
			printf("S0, posição inicial: ");
			scanf("%f", &x1);
			printf("A, valor de aceleração: ");
			scanf("%f", &Ac);
				
			if(Vel==n)
			{
					Respo=x1+V0*delT+1/2*Ac*(delT*delT);
					printf("%.2f", Respo);
			}
			else if(V0==n && Ac==n)
			{
					Respo=x1+Vel*delT;
					printf("%.2f", Respo);
			}
			else
			{
				printf("Parece ter um erro!!!\n\n");	
			}
		}


	

	

		if(b==1)
		{
			printf("Agregue valores para os itens a seguir, caso você não tenha um valor coloque a letra 'n'\n\n");
			printf("Valor de Velocidade Inicial = ");
			scanf("%f", &V0);
			printf("\n");
			printf("Valor de aceleração = ");
			scanf("%f", &Ac);
			printf("\n");
			printf("Valor de tempo = ");
			scanf("%f", &Te);
			printf("\n");
			printf("Valor de X final ou Y final = ");
			scanf("%f", &x1);
			printf("\n");
			printf("Valor de X inicial ou Y inicial = ");
			scanf("%f", &x2);
			printf("\n");
			
			if(V0!=n && Ac!=n && x1!=n && x2!=n)
			{
			V0=V0*V0;
			x1=x2-x1;
			Ac=Ac*x1;
			x2=Ac*2;
			Te=sqrt(x2+V0);
			printf("Resultado é = %.2f\n", Te);
			}	

			else if(x1 == n || x2 == n)
			{
				if(a==n)
				{
					Vel=V0-(9,8*Te);
				}
				else
				{
					Vel=V0+(Ac*Te);
				}
				printf("A velocidade é = %.2f\n\n", Vel);
				
				if(Te==n)
				{
				if(a==n)
				{
					Velq=V0*V0+(-2*9,8)*x1-x2;
					Vel=sqrt(Velq);
				}
				else
				{
					Velq=V0*V0+(2*Ac)*x1-x2;
					Vel=sqrt(Velq);
				}
				printf("A velocidade é = %.2f\n\n", Vel);
				
			}
			}

		}
printf("Para sair dessa categoria digite 0, caso contrário digite qualquer outro número\n");
			scanf("%d", &m);
	}
	}
	if(cat==3)
	{
	while(fimda!=0)
	{
	printf("Selecione\nRegras de Equivalência = Digite 1\nRegras de Inferência = Digite 2\n");
	scanf("%d", &pos);
	if(pos==1)
	{
	printf("Digite o número correspondente:\n Comutativa (com) = Digite 1\n Associatividade (ass) = Digite 2\n De Morgan (dmor) = Digite 3\n Condicional (cond) = Digite 4\n Dupla Negação (dp) = Digite 5\n Contraposição (cont) = Digite 6\n Auto-referência (auto) = Digite 7\n Distributividade (dist) = Digite 8\n") ;
	scanf("%d", &name);
	if(name==1)
	{
		printf("Comutatividade - Regra de Equivalência\n\tExpressão\tEquivale\n\tP ∨ Q\t\tQ ∨ P\n\tP ∧ Q\t\tQ ∧ P\n");
	}
	else if(name==2)
	{
		printf("Associatividade - Regra de Equivalência\n\tExpressão\tEquivale\n\t(P ∨ Q) ∨ R\t\tP ∨ (Q ∨ P)\n(P ∧ Q) ∧ R\t\tP ∧ (Q ∧ P)\n");
	}
	else if(name==3)
	{
		printf("De Morgan - Regra de Equivalência\n\tExpressão\tEquivale\n\t¬(P ∨ Q)\t\t¬P ∧ ¬Q\n¬(P ∧ Q)\t\t¬P ∨ ¬Q\n");
	}
	else if(name==4)
	{
		printf("Condicional - Regra de Equivalência\n\tExpressão\tEquivale\n\tP → Q\t\t¬P ∨ Q\n");
	}
	else if(name==5)
	{
		printf("Dupla Negação - Regra de Equivalência\n\tExpressão\tEquivale\n\tP\t\t¬(¬P)\n");
	}
	else if(name==6)
	{
		printf("Contraposição - Regra de Equivalência\n\tExpressão\tEquivale\n\tP → Q\t\t¬Q → ¬P\n");
	}
	else if(name==7)
	{
		printf("Auto-referência - Regra de Equivalência\n\tExpressão\tEquivale\n\tP ∨ P\t\tP\nP\t\tP ∧ P\n");
	}
	else if(name==8)
	{
		printf("Distributividade - Regra de Equivalência\n\tExpressão\tEquivale\n\tP ∧ (Q ∨ R)\t\t(P ∧ Q) ∨ (P ∧ R)\n");
	}

	}


	else if(pos==2)
	{
	printf("Modus Ponens (mp) = Digite 1\n Modus Tollens (mt) = Digite 2\n Conjunção (conj) = Digite 3\n Simplificação (simp) = Digite 4\n Adição (ad) = Digite 5\n Sislogismo Hipotético (sh) = Digite 6\n SIslogismo Disjuntivo (sd) = Digite 7\n Exportação (exp) = Digite 8\n Absorção = Digite 9\n Dilema Construtivo = Digite 10\n Dilema Destrutivo = Digite 11\n");
	scanf("%d", &name);
	if(name==1)
	{
		printf("Modus Ponens - Regra de Inferência\n\tExpressão\tEquivale\n\tP, P → Q\t\tQ\n");
	}
	if(name==2)
	{
		printf("Modus Tollens - Regra de Inferência\n\tExpressão\tEquivale\n\tP → Q, ¬Q\t\t¬P\n");
	}
	if(name==3)
	{
		printf("Conjunção - Regra de Inferência\n\tExpressão\tEquivale\n\tP, Q\t\tP ∧ Q\n");
	}
	if(name==4)
	{
		printf("Simplificação - Regra de Inferência\n\tExpressão\tEquivale\n\tP ∧ Q\t\tP, Q\n");
	}
	if(name==5)
	{
		printf("Adição - Regra de Inferência\n\tExpressão\tEquivale\n\tP\t\tP ∨ Q\n");
	}
	if(name==6)
	{
		printf("Sislogismo Hipotético - Regra de Inferência\n\tExpressão\tEquivale\n\tP → Q, Q → R\t\tP → R\n");
	}
	if(name==7)
	{
		printf("Sislogismo Disjuntivo - Regra de Inferência\n\tExpressão\tEquivale\n\tP ∧ Q, ¬P\t\tQ\n");
	}
	if(name==8)
	{
		printf("Exportação - Regra de Inferência\n\tExpressão\tEquivale\n\t(P ∧ Q) → R\t\tP → (Q → R)\n");
	}
	if(name==9)
	{
		printf("Absorção - Regra de Inferência\n\tExpressão\tEquivale\n\tP → Q\t\tP → (P ∧ Q)\n");
	}
	if(name==10)
	{
		printf("Dilema Construtivo - Regra de Inferência\n\tExpressão\tEquivale\n\tP → Q, R → S, P ∨ R\tQ ∨ S\n");
	}
	if(name==11)
	{
		printf("Dilema Destrutivo - Regra de Inferência\n\tExpressão\tEquivale\n\tP → Q, R → S, ¬Q ∨ ¬S\t¬P ∨ ¬R\n");
	}
	}
	printf("Para sair digite 0, caso contrário digite outro número\n");
	scanf("%d", &fimda);
	}
	}
printf("Para voltar à categoria digite 0, caso contrário digite qualquer outro número\n");
scanf("%d", &r);



}
}
if(lingua==2)
{
while(r!=0)
{
printf("Choose a category: \n\t Type 1: Basic Calculations \n\t Type 2: Physics calculations \n\t Type 3: Table Logic\n");
scanf("%d", &cat);

if (cat==1){
	
while(b!=0)
{
	Z=1;
		//calculo básico
	printf("Basic Sum \n Type 1: Sum and / or Subtraction \n Type 2: Division \n Type 3: Multiplication \n Type 4: Taking Root \n Type 5: Set up root \n Type 6: Bháskara \n Type 7: Rule of Three \n Type 8: Determinant of the Matrix  \n to exit type: 0\n");
	scanf("%d", &b);
		//determinante
				if(b==8){
		while(Z!=0){
		printf("Enter the order of a square matrix\n");
    scanf("%d", &ordem);
   
    int matriz[ordem][ordem];
   
    printf("Enter the numbers of the matrix: \n");
   
    for(i=0; i<ordem; i++){
             for(j=0; j<ordem; j++){
                     
                      scanf("%d", &matriz[i][j]);
                     
                      }
             }
      
   
    printf("\nThe matrix was typed:\n\n");
         
    for(i=0; i<ordem; i++){
             printf("\n");
             
             for(j=0; j<ordem; j++){
                     
                      printf(" %d ", matriz[i][j]);
                     
                      }
             }
     printf("\n\n");        

          if(ordem == 2){
         
          det2 = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
         
          printf("The determinant is: %d\n\n", det2);
               
          }
     
         
          if(ordem == 3){
         
          det3 = (matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][2]*matriz[1][0]*matriz[2][1])
          - ((matriz[0][1]*matriz[1][0]*matriz[2][2]) + (matriz[0][0]*matriz[1][2]*matriz[2][1]) + (matriz[0][2]*matriz[1][1]*matriz[2][0]));
         
          printf("The determinant is: %d\n\n", det3);
         
          }
         
          if(ordem == 4){
         
          det4 = (matriz[0][0] * ((matriz[1][1]*matriz[2][2]*matriz[3][3]) + (matriz[1][2]*matriz[2][3]*matriz[3][1]) + (matriz[1][3]*matriz[2][1]*matriz[3][2])
          - ((matriz[1][2]*matriz[2][1]*matriz[3][3]) + (matriz[1][1]*matriz[2][3]*matriz[3][2]) + (matriz[1][3]*matriz[2][2]*matriz[3][1]) )))
         
          + ( (-matriz[0][1]) * ((matriz[1][0]*matriz[2][2]*matriz[3][3]) + (matriz[1][2]*matriz[2][3]*matriz[3][0]) + (matriz[1][3]*matriz[2][0]*matriz[3][0])
          - ((matriz[1][2]*matriz[2][0]*matriz[3][3]) + (matriz[1][0]*matriz[2][3]*matriz[3][2]) + (matriz[1][3]*matriz[2][2]*matriz[3][0]) )))
         
          + ( matriz[0][2] * ((matriz[1][0]*matriz[2][1]*matriz[3][3]) + (matriz[1][1]*matriz[2][3]*matriz[3][0]) + (matriz[1][3]*matriz[2][0]*matriz[3][1])
          - ((matriz[1][1]*matriz[2][0]*matriz[3][3]) + (matriz[1][0]*matriz[2][3]*matriz[3][1]) + (matriz[1][3]*matriz[2][1]*matriz[3][0]) )))
         
          + ((-matriz[0][3]) * ((matriz[1][0]*matriz[2][1]*matriz[3][2]) + (matriz[1][1]*matriz[2][3]*matriz[3][0]) + (matriz[1][3]*matriz[2][0]*matriz[3][1])
          - ((matriz[1][1]*matriz[2][0]*matriz[3][2]) + (matriz[1][0]*matriz[2][3]*matriz[3][1]) + (matriz[1][3]*matriz[2][1]*matriz[3][0]))));    
   
          printf("The determinant is: %d\n\n", det4);
          }  
          printf("To exit press 0 to continue enter any other number\n");
          scanf("%d", &Z);
		}
		}

		//fim determinante
		//se escolher soma
		
	if (b==1)
	{
		B=1;
		while(B!=0)
		{	
			Z=0;
			C=0;

				printf("\nEnter the numbers to be added and/or subtracted, when finished press 0\n");
				while(B!=0)
				{
					scanf("%d", &B);
					C=C+B;
				}
				printf("Result is = %d\n\n", C);
			Z=1;
			printf("To exit press 0 to continue enter any other number\n");
			scanf("%d", &B);


		}
	}


		//fim soma

		//se escolher divisão

	if(b==2)
	{	
		while(Z!=0){
			printf("\nEnter the numbers to be divided\n");
			scanf("%lf%lf", &x, &X);
			y=0;
			y=x/X;
			printf("Result is = %.2lf\n\n", y);
			printf("To exit press 0 to continue enter any other number\n");
			scanf("%d", &Z);
		}	
	}


		//fim divisão


	
		//se escolher multiplicação
	 else if (b==3){	
	                          
	                          while(Z!=0){
						Y=1;
			                     printf("On the first line type how many number will be multiplied\n");
			                     scanf("%lf", &y);			           
			                     while(y!=0){
				                      scanf("%lf", &x);
				                      Y=x*Y;
				                      y--;				           
			                      }
			                      printf("Result is = %.2lf\n\n", Y);
			                      printf("To exit press 0 to continue enter any other number\n");
			                      scanf("%d", &Z);			          
			                  }		       
	                      }

		//fim multiplicação

		
		//se escolher tirar raiz
 else if(b==4){	
	                              while(Z!=0){
		                             	printf("Type in the first line which is the root type (square) or (cubic)\n Type 2 to square root or 3 to cubic root\n");	             	        
			                          C=0;
			                          c=0;
			                          scanf("%d", &Z);              
		
			                          if(Z==2){	
		                          	     printf("Type the number\n");
		                          	     scanf("%d", &A);
			                              x=sqrt(A);
		                              	printf("%.2lf\n\n", x);
		                              	printf("To exit press 0 to continue enter any other number\n");
		                                   scanf("%d", &Z);
			                          }

			                          else if(Z==3){
			                              printf("Type the number\n");
			                              scanf("%d", &A);
				                          g=cbrt(A);
				                          printf("Result is = %.2lf\n\n", g);
				                          printf("To exit press 0 to continue enter any other number\n");
		                                    scanf("%d", &Z);
			                          }
			                          else{
				                          printf("Sorry but this program calculates only root (square) and (cubic)\n");
				                          printf("To exit type 0, continue to enter any other number\n");
		                                    scanf("%d", &Z);
			                          }	               
		                          }	               
	                      }
	

		//se escolher colocar raiz
		
		 else if(b==5){		Z=1;
		                      while(Z!=0){
	
		                      	printf("Type in the first line which is the root type ( square ) or ( cubic )\n Type 2 to square root or 3 to cubic root\n");
		                      	C=0;
		                      	scanf("%d", &a);

		                      	if(a<2 || a>3){
		                      		 printf("Sorry but this program calculates only root (square ) or ( cubic )\n");
				                     printf("To exit type 0 , continue to enter any other number\n");
		                               scanf("%d", &Z);
		                      	}

		                      	if(a==2){
		                      	    printf("Enter the number\n");
		                          	scanf("%d", &d);
	
		                      		C=d*d;
		                      		a--;
		                          	printf("result is = %d\n", C);
		                          	printf("To exit type 0 , continue to enter any other number\n");
		                              scanf("%d", &Z);
		                      	}
                      	    	if(a==3){	
                      	    	    printf("Enter the number\n");
                          			scanf("%d", &d);
                      				D=d*d*d;
                      				a--;
                          			printf("result is = %d\n", D);
                          	          printf("To exit type 0 , continue to enter any other number\n");
		                              scanf("%d", &Z);
                      			}
                      		}
                      	}	
	
		//fim colocar raiz


		//se escolher Bháskara


		else if(b==6){
			                  while(Z!=0){
			                        printf ("\n Enter the amount of factor A: ");
				                   scanf  ("%d", &a); 
                                       printf ("\n Enter the amount of factor B: ");
                                       scanf ("%d", &b);
                                       printf ("\n Enter the amount of factor C: ");
                                       scanf ("%d", &c);
                                       bob = (b*b)-4*a*c; 
                                       if ((bob < 0)){
                                             printf ("\n  The delta is %d, or negative, so there are not real roots! \n\n", bob);
	                  	                	printf("To exit press 0 to continue enter any other number\n");
		                                   scanf("%d", &Z);    
                                       }
                                       else{
                                            raiz = sqrt(bob);
                                            x1 = (-b+raiz)/2*a;

                                            x2 = (-b-raiz)/2*a;
                                            printf ("\n   Result is: X1 = %.2f e X2 = %.2f !\n\n", x1,x2);
		                                  printf("To exit press 0 to continue enter any other number\n");
		                                  scanf("%d", &Z);   
                                       }
                                }
			            }	
		
	

		//fim Bháskara
      else if(b==7)
     {
          while(Z!=0)
          {	
	/*	printf("\nAntes de fazer uma regra de três precisamos saber se o resultado tende a ser maior ou menor do numero comparado\nSe tende a ser menor digite: 1\nSe tende a ser maior digite: 2\n\n");
		scanf("%d", &a);
		if (a==1)
		{*/
			printf("\nBelow is an example of rule of three\n\n Z ----- Y\n X ----- Y2\n\n Digite o valor correspondente para Z:\t");
                	scanf("%lf", &x);
               		printf(" Enter the corresponding value for Y:\t");
               		scanf("%lf", &y); 
               		printf(" Enter the corresponding value for Y2:\t");
               		scanf("%lf", &Y);	
               		X=(x*Y)/y;
			printf("Result is: %.2lf\n\n", X);
               		printf("To exit press 0 to continue enter any other number\n");
			scanf("%d", &Z);
		/*}
		else if (a==2)
			{	
					printf("\nAbaixo temos um exemplo de regra de três\n\n Z ----- Y\n X ----- Y2\n\n 	Digite o valor correspondente para Z:\t");
	                	scanf("%lf", &x);
	               		printf(" Digite o valor correspondente para Y:\t");
	               		scanf("%lf", &y); 
	               		printf(" Digite o valor correspondente para Y2:\t");
	               		scanf("%lf", &Y);	
	               		X=(x*y)/Y;
				printf("O Result is: %.2lf\n\n", X);
	               		printf("To exit press 0 to continue enter any other number\n");
				scanf("%d", &Z);
	
			}
			else
			{
			printf("Acho que você não leu com atenção\n\n");	
			Z=1;
			}*/
	          }
		}
		
	}
	}
	m=1;
	if (cat==2)
	while (m!=0)
{
		{
		printf("What would you like to find out?\n\t Type 1: Speed\n\t Type 2: Final Height (vertical motion)\n\t Type 3: Acceleration\n\t Type 4: Displacement / position\n");
		scanf("%d", &b);
	
		asdf=0;
		oiuy=0;
		yuio=0;
		
		if(b==3)
		{
			printf("Add values for the following items if you have not put a value only 'n'\n");
			printf("Initial speed: ");
			scanf("%f", &Vel);
			printf("Final speed: ");
			scanf("%f", &Velq);
			if(Velq==n || Vel==n)
				{
				printf("Speed Variation: ");
				scanf("%f", &varV);
				asdf=1;
				}
			printf("Initial Time: ");
			scanf("%f", &Ti);
			printf("Final Time: ");
			scanf("%f", &Tf);
			if(Ti==n || Tf==n)
			{
				printf("Time Variation: ");
				scanf("%f", &delT);
				oiuy=1;
			}
			printf("Distance Variation: ");
			scanf("%f", &cc);
			
			
	
	
			
			if(aa==n && bb==n)
			{
				if(asdf==1 && oiuy==1)
				{
					Ac=varV/delT;
					printf("Result is = %.2f\n", Ac);
				}
				else if(asdf==1 && oiuy==0)
				{
					Ac=varV/(Tf-Ti);
					printf("Result is = %.2f\n", Ac);
				}
				else if(asdf==0 && oiuy==1)
				{
					Ac=(Velq-Vel)/delT;
					printf("Result is = %.2f\n", Ac);
				}
				else if(asdf==0 && oiuy==0)
				{
					Ac=(Velq-Vel)/(Tf-Ti);
					printf("Result is %.2f\n", Ac);
				}
				
				
				else if(Ti==n && Tf==n)
				{	
				Ac=((Velq*Velq)-(Vel*Vel))/(2*cc);
				printf("Resul is = %.2f\n", Ac);
				if(Velq==n && Vel==n)
				{
					printf("Hey, error!!!\n");
				}
				}
	
				else if(Velq==n && Vel!=n && cc!=n)
				{
				if(asdf==1)
				{
					Ac=(cc-Vel*(Ti-Tf))/(1/2*((Ti-Tf)*(Ti-Tf)));
					printf("Result is = %.2f\n", Ac);
				}
				
				else if(asdf==0)
				{
					Ac=(cc-Vel*delT)/(1/2*(delT*delT));
					printf("Result is = %.2f\n", Ac);
				}
				else
				{
					printf("Error!!!\n");
				}
				}
			}
				if(asdf==0 && Ti!=n && Tf!=n && Vel!=n && Velq!=n && oiuy==0 && aa!=n && bb!=n)
				{
					printf("Error!!!\n");
				}
	
		}
	
		if (b==2)
		{
			printf("Add values for the following items\n");
			printf("height initial: ");
			scanf("%f", &h0);
			printf("Initial speed: ");
			scanf("%f", &V0);
			printf("Time: ");
			scanf("%f", &delT);
			if(h0!=n && V0!=n && delT!=n)
			{
				h=h0+V0*delT-1/2*9,8*(delT*delT);
				printf("%.2f\n", h);
			}
			else
			{
				printf("Error!!!\n");
			}
		}



	
	
		if (b==4)
		{
			printf("Add values for the following items if you have not put any value 'n'\n");
			printf("ΔT, time variation: ");
			scanf("%f", &delT);
	
			if (delT==n)
			{
				printf("TI, initial time: ");
				scanf("%f", &Ti);
				printf("TF, final time: ");
				scanf("%f", &Tf);
				delT=Tf-Tf;
			}
			printf("V, speed: ");
			scanf("%f", &Vel);
			printf("V0, Initial speed: ");
			scanf("%f", &V0);
			printf("S0, initial position: ");
			scanf("%f", &x1);
			printf("A, value of acceleration: ");
			scanf("%f", &Ac);
				
			if(Vel==n)
			{
					Respo=x1+V0*delT+1/2*Ac*(delT*delT);
					printf("%.2f", Respo);
			}
			else if(V0==n && Ac==n)
			{
					Respo=x1+Vel*delT;
					printf("%.2f", Respo);
			}
			else
			{
				printf("Error!!!\n\n");	
			}
		}


	

	

		if(b==1)
		{
			printf("Aggregate values for the following items, if you do not have a value put the letter 'n'\n\n");
			printf("Value of Initial speed = ");
			scanf("%f", &V0);
			printf("\n");
			printf("Value of acceleration = ");
			scanf("%f", &Ac);
			printf("\n");
			printf("Value of time = ");
			scanf("%f", &Te);
			printf("\n");
			printf("Value of X final or Y final = ");
			scanf("%f", &x1);
			printf("\n");
			printf("Value of X inicial or Y inicial = ");
			scanf("%f", &x2);
			printf("\n");
			
			if(V0!=n && Ac!=n && x1!=n && x2!=n)
			{
			V0=V0*V0;
			x1=x2-x1;
			Ac=Ac*x1;
			x2=Ac*2;
			Te=sqrt(x2+V0);
			printf("Result is = %.2f\n", Te);
			}	

			else if(x1 == n || x2 == n)
			{
				if(a==n)
				{
					Vel=V0-(9,8*Te);
				}
				else
				{
					Vel=V0+(Ac*Te);
				}
				printf("The speed is = %.2f\n\n", Vel);
				
				if(Te==n)
				{
				if(a==n)
				{
					Velq=V0*V0+(-2*9,8)*x1-x2;
					Vel=sqrt(Velq);
				}
				else
				{
					Velq=V0*V0+(2*Ac)*x1-x2;
					Vel=sqrt(Velq);
				}
				printf("The speed is = %.2f\n\n", Vel);
				
			}
			}

		}
printf("To exit this category type 0, otherwise enter any other number\n");
			scanf("%d", &m);
	}
	}
	if(cat==3)
	{
	while(fimda!=0)
	{
	printf("Select \n Equivalentnce Rules = Type 1 \n Rules Inference = Type 2\n");
	scanf("%d", &pos);
	if(pos==1)
	{
		printf("Enter the corresponding number:\n commutative (with) = Type 1 \n associativity (ass) = Type 2 \n Morgan (dmor) = Type 3 \n Conditional (cond) = Type 4 \n Double Negation (DN) = type 5 \n contrast (cont) = type 6 \n self-reference (self) = type 7 \n distributiveness (dist) = type 8\n");

	scanf("%d", &name);
	if(name==1)
	{	

		
		printf("commutative - Rule Equivalentnce\n\tExpression\tEquivalent\n\tP ∨ Q\t\tQ ∨ P\n\tP ∧ Q\t\tQ ∧ P\n");
	}
	else if(name==2)
	{
		printf("associativity - Rule Equivalentnce\n\tExpression\tEquivalent\n\t(P ∨ Q) ∨ R\t\tP ∨ (Q ∨ P)\n(P ∧ Q) ∧ R\t\tP ∧ (Q ∧ P)\n");
	}
	else if(name==3)
	{
		printf("De Morgan - Rule Equivalentnce\n\tExpression\tEquivalent\n\t¬(P ∨ Q)\t\t¬P ∧ ¬Q\n¬(P ∧ Q)\t\t¬P ∨ ¬Q\n");
	}
	else if(name==4)
	{
		printf("Conditional - Rule Equivalentnce\n\tExpression\tEquivalent\n\tP → Q\t\t¬P ∨ Q\n");
	}
	else if(name==5)
	{
		printf("Double Negation - Rule Equivalentnce\n\tExpression\tEquivalent\n\tP\t\t¬(¬P)\n");
	}
	else if(name==6)
	{
		printf("contrast - Rule Equivalentnce\n\tExpression\tEquivalent\n\tP → Q\t\t¬Q → ¬P\n");
	}
	else if(name==7)
	{
		printf("self-reference - Rule Equivalentnce\n\tExpression\tEquivalent\n\tP ∨ P\t\tP\nP\t\tP ∧ P\n");
	}
	else if(name==8)
	{
		printf("distributiveness - Rule Equivalentnce\n\tExpression\tEquivalent\n\tP ∧ (Q ∨ R)\t\t(P ∧ Q) ∨ (P ∧ R)\n");
	}

	}


	else if(pos==2)
	{
	printf("Modus ponens (mp) = Type 1 \n Modus Tollens (mt) = Type 2 \n Conjunction (conj) = Type 3 \n Simplification (simp) = Type 4 \n Addition (d) = Type 5 \n Sislogismo Hypothetical ( sh) = Type 6 \n Sislogismo disjunctive (sd) = Type 7 \n Export (exp) = Type 8 \n Absorption = Type 9 \n Dilema Constructive = Type 10 \n Dilema Destructive = Type 11\n");
	scanf("%d", &name);
	if(name==1)
	{
		printf("Modus Ponens - Rule Inference\n\tExpression\tEquivalent\n\tP, P → Q\t\tQ\n");
	}
	if(name==2)
	{
		printf("Modus Tollens - Rule Inference\n\tExpression\tEquivalent\n\tP → Q, ¬Q\t\t¬P\n");
	}
	if(name==3)
	{
		printf("Conjunction - Rule Inference\n\tExpression\tEquivalent\n\tP, Q\t\tP ∧ Q\n");
	}
	if(name==4)
	{
		printf("Simplification - Rule Inference\n\tExpression\tEquivalent\n\tP ∧ Q\t\tP, Q\n");
	}
	if(name==5)
	{
		printf("Addition - Rule Inference\n\tExpression\tEquivalent\n\tP\t\tP ∨ Q\n");
	}
	if(name==6)
	{
		printf("Sislogismo Hypothetical - Rule Inference\n\tExpression\tEquivalent\n\tP → Q, Q → R\t\tP → R\n");
	}
	if(name==7)
	{
		printf("Sislogismo disjunctive - Rule Inference\n\tExpression\tEquivalent\n\tP ∧ Q, ¬P\t\tQ\n");
	}
	if(name==8)
	{
		printf("Export - Rule Inference\n\tExpression\tEquivalent\n\t(P ∧ Q) → R\t\tP → (Q → R)\n");
	}
	if(name==9)
	{
		printf("Absorption - Rule Inference\n\tExpression\tEquivalent\n\tP → Q\t\tP → (P ∧ Q)\n");
	}
	if(name==10)
	{
		printf("Dilema Constructive - Rule Inference\n\tExpression\tEquivalent\n\tP → Q, R → S, P ∨ R\tQ ∨ S\n");
	}
	if(name==11)
	{
		printf("Dilema Destructive - Rule Inference\n\tExpression\tEquivalent\n\tP → Q, R → S, ¬Q ∨ ¬S\t¬P ∨ ¬R\n");
	}
	}
	printf("To exit type 0, otherwise enter another number\n");
	scanf("%d", &fimda);
	}
	}
printf("To back the category type 0, otherwise enter any other number\n");
scanf("%d", &r);
}
}
	if(lingua!=1 && lingua!=2)
	{
		printf("Só disponível em português e inglês!\nOnly available in Portuguese and English!\n");
	}
	return 0;
}
