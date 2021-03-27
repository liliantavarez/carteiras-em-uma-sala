A sala 104 da UEPB será reformada em breve.
Você foi contratado pela UEPB para criar um programa que descubra quantas carteiras cabem dentro da sala de aula. Dessa forma, faz-se necessário que você saiba as dimensões da sala de aula (comprimento e largura) e as dimensões de uma carteira. Com isso, considere que:
• Entre duas fileiras deve haver 0,5 m de espaço;
• Entre duas cadeiras na mesma fileira deve haver 0,2 m de espaço; 
• Deve ser reservada ao professor um espaço de 1,5 m de comprimento. O programa deve informar quantas carteiras cabem na sala 104.


#include <stdio.h>
#include <stdlib.h>

float carteiras_largura (float larguradasala, float larguradacarteira){
      float  largura,quantidadeL ; 

        largura = larguradasala-larguradacarteira ;
        larguradacarteira = larguradacarteira+0.5 ;
        quantidadeL = largura/larguradacarteira; 

    return (quantidadeL) ; 
}

float carteiras_comprimento (float comprimentosala, float comprimentocarteira) {
      float comprimento, quantidadeC ;
        
        comprimento = comprimentosala - (comprimentocarteira+1.5) ; 
        comprimentocarteira = comprimentocarteira + 0.2 ;
        quantidadeC = comprimento/comprimentocarteira ; 

    return (quantidadeC);
}

int main (){
    float comprimentoS, larguraS, larguraC, comprimentoC,cadeirasC,cadeirasL,totalcadeiras;

    printf ("INSIRA AS MEDIDAS (m)\n");
    printf ("Largura da sala: ");
    scanf ("%f",&larguraS);
    printf ("Comprimento da sala: ");
    scanf ("%f",&comprimentoS);
    printf ("Largura da carteira: ");
    scanf ("%f",&larguraC);
    printf ("Comprimento da carteira: ");
    scanf ("%f",&comprimentoC);

    cadeirasC = carteiras_comprimento (comprimentoS, comprimentoC) ; 
    cadeirasL = carteiras_largura (larguraS,larguraC) ;
    totalcadeiras = ((cadeirasC+1) * (cadeirasL+1)) ;

    printf ("\n");
    printf ("Quantidade de carteiras possiveis na sala: %1.f\n",totalcadeiras);
    
   return  0 ; 
} 