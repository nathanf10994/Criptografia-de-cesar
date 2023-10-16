/*
Projeto de criptografia de cesar feito em sala de aula
Developed by Nathan Ferreira
GitHub: nathanf10994
*/

#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

using namespace std;

char codif(char l);
char decodif(char l);
void letreiro();

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
	char opc; 
	int senha;
		
	cout<<"\n Digite a Senha para acesso: ";
	cin>>senha;
	
		if(senha != 123456){
			system("cls");
			cout<<"\nACESSO NEGADO! \n\n";
			
			return 0;
		}
		
		
		else{
				
			do{
					
					char *mensagem = new char;
					
					system("cls");
					letreiro();			
					cout<<"\n1- Criptografar";
					cout<<"\n2- Descriptografar";
					cout<<"\n\nEscolha sua opção -> ";
					cin>>opc;
					
					switch(opc){
						
						case '1':
							system("cls");
							letreiro();
							cout<<"\nDigite a mensagem a ser criptografada.\n\n-> ";
							cin.ignore();
							gets(mensagem);
							
								for(int i=0; i< strlen(mensagem); i++){
									mensagem[i] = codif(mensagem[i]);
								}
								
							system("cls");
							cout<<"Mensagem criptografada -> "<<mensagem;
							break;
								
						case '2':
							system("cls");
							letreiro();
							cout<<"\n Digite a mensagem a ser descriptografada.\n\n-> ";
							cin.ignore();
							gets(mensagem);
							
								for(int i=0; i< strlen(mensagem); i++){
									mensagem[i] = decodif(mensagem[i]);
								}
								
							system("cls");
							cout<<"Mensagem descriptografada -> "<<mensagem;	
							break;
						
						default: 
							system("cls");
							letreiro();
							cout<<"\nOpção inválida!"<<endl;
					}
					
					cout<<"\n\nDigite [0] para ENCERRAR, ou qualquer outro valor para CONTINUAR -> ";
					cin>>opc;
					delete mensagem;
											
				}while(opc != '0');
			
			system("cls");
			cout<<"Programa Encerrado.\n\n";
		}
			
	
	return 0;
	
}

char codif(char l){
	
	if( l >= 'a' && l <= 'z'){
		return (l == 'z') ? l='a' : l+=1;
	} else if(l >= '0' && l <= '9'){
		return (l == '9') ? l = '0' : l+=1;
	} else if(l >= 'A' && l <='Z'){
		return (l == 'Z') ? l='a' : l+=33;
	} else if(l == ' ') return l=' ';
 	  else return l='*';
}

char decodif(char l){
	
	if( l >= 'a' && l<= 'z'){
		return (l == 'a') ? l='z' : l-=1;	
	} else if(l >= '0' && l <= '9'){
		return (l == '0') ? l = '9' : l-=1;
	} else if(l >= 'A' && l <='Z'){
		return (l == 'A') ? l='z' : l+=31;	
	} else if(l == ' ') return l=' ';
	  else return l = '*';
}




void letreiro(){
	
	cout<<"============================================================================================================";
	cout<<"\n************************************************************************************************************";
	cout<<"\n*==========================================================================================================*";
	cout<<"\n**                                                                                                        **";
	cout<<"\n**    @@@@@@   @@@@@@   @   @@@@@@   @@@@@@@   @@@@@@   @@@@@@   @@@@@@   @@@@@@   @@@@@@   @   @@@@@@    **";
	cout<<"\n**    @        @    @   @   @    @      @      @    @   @        @    @   @    @   @        @   @    @    **";
	cout<<"\n**    @        @@@@@@   @   @@@@@@      @      @    @   @        @@@@@@   @@@@@@   @@@@     @   @@@@@@    **";
	cout<<"\n**    @        @ @      @   @           @      @    @   @  @@@   @ @      @    @   @        @   @    @    **";
	cout<<"\n**    @        @  @     @   @           @      @    @   @    @   @  @     @    @   @        @   @    @    **";
	cout<<"\n**    @@@@@@   @   @    @   @           @      @@@@@@   @@@@@@   @   @    @    @   @        @   @    @    **";
	cout<<"\n**                                                                                                        **";
	cout<<"\n*==========================================================================================================*";
	cout<<"\n************************************************************************************************************";
	cout<<"\n============================================================================================================";
	cout<<"\n\n";
		
}
