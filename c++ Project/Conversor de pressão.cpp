#include <iostream>
#include <locale>


using namespace std;

int main(){                                   		/*Rodrigo de Abreu Araujo. 28 de Maio de 2020
                                                 	Projeto Apenas para testes de programa��o C++;
                                                	Todos os codigos funcionan, mas n�o deve ser usado para fins n�o did�ticos...*/
	
	setlocale(LC_ALL, "ptb");
int opcao = 0;	
float valorBar, valorPsi, valorKgf = 0;
int conversao = 0;
int final = 0;
	//Menu Inicial
	cout<<"---------------------###----------------------"<<endl;
	cout<<"       Tabela de Convers�o de Press�o"<<endl;
	cout<<"Autor: Rodrigo de Abreu Araujo"<<endl;
    //A op��o escolhida ser� armazenada na vari�vel 'opcao'.	
	cout<<"Escolha uma unidade no Menu Abaixo: "<<endl;
	
	cout<<"1: Bar"<<endl;
	cout<<"2: PSI"<<endl;
	cout<<"3: Kgf/cm�"<<endl;
	cin>>opcao;
   // Estrutura 'SWITCH', que utilizando o valor da vari�vel 'opcao', mostrar� o 'case', de acordo com a op��o do usuario.0	
switch(opcao){
	case 1:{
		cout<<"Op��o selecionada: [BAR]. Informe o valor em 'BAR' que deseja converter: "<<endl;
			cin>>valorBar;
		cout<<"Informe em qual unidade voc� deseja que seja feita a convers�o. Use os op��es n�mericas acima: "<<endl;
			cin>>conversao;
				if( conversao == 1){
			cout<<"Op��o inv�lida! N�o h� convers�o de mesma unidade. Inicie o programa e tente novamente."<<endl;
			}
				if( conversao == 2){
					valorBar = valorBar*14.504;
			cout<<"O valor convertido � de: "<<valorBar<<endl;
			}
				if(conversao == 3){
					valorBar = valorBar*1.02;
			cout<<"O valor convertido � de: "<<valorBar<<endl;
			}
		
	break; // O 'break', encerrar� o 'SWITCH', e o pograma seguir� o fluxo.
	}
	case 2:{
		cout<<"Op��o selecionada: [PSI]. Informe o valor em 'PSI' que deseja converter: "<<endl;
			cin>>valorPsi;
		cout<<"Informe em qual unidade voc� deseja que seja feita a convers�o. Use os op��es n�mericas acima: "<<endl;
			cin>>conversao;
				if(conversao == 1){
					valorPsi = valorPsi/14.504;
			cout<<"O valor convertido � de: "<<valorPsi<<endl;
				}
				if(conversao == 2){
			cout<<"Op��o inv�lida! N�o h� convers�o de mesma unidade. Inicie o programa e tente novamente."<<endl;
			}
				if(conversao == 3){
					valorPsi = valorPsi/14.223;
			cout<<"O Valor convertido � de: "<<valorPsi<<endl;
			}
	break;
	}
		case 3:{
			cout<<"Op��o selecionada: [Kgf/cm�]. Informe o valor em 'Kgf/cm�' que deseja converter: "<<endl;
				cin>>valorKgf;
			cout<<"Informe em qual unidade voc� deseja que seja feita a convers�o. Use os op��es n�mericas acima: "<<endl;
				cin>>conversao;
					if(conversao == 1){
						valorKgf = valorKgf/1.02;
			cout<<"O valor convertido � de: "<<valorKgf<<endl;
				}
			
					if(conversao == 2){
						valorKgf = valorKgf*14.22333;
			cout<<"O valor convertido � de: "<<valorKgf<<endl;
				}
					if(conversao == 3){
			cout<<"Op��o inv�lida! N�o h� convers�o de mesma unidade. Inicie o programa e tente novamente."<<endl;
				}
		break;
		}
		default:{
			cout<<"Op��o Inv�lida!!"<<endl;   // O 'default' eliminar� erros do usu�rio, condicionando suas op��es, �s dadas no menu.
		
		     	}
		
		
		
}
	
	/*
	cout<<"------------------------------------"<<endl;
	cout<<"Deseja realizar outra conver��o:  [SIM = 1]/[N�O = 2] ? "<<endl;
	cin>>final;
	
	for(final=1; final<2; final++){
		continue;
	}*/
		
	
	
	
}

	
	
	
	
	
	
	

