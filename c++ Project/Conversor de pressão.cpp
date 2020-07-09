#include <iostream>
#include <locale>


using namespace std;

int main(){                                   		/*Rodrigo de Abreu Araujo. 28 de Maio de 2020
                                                 	Projeto Apenas para testes de programação C++;
                                                	Todos os codigos funcionan, mas não deve ser usado para fins não didáticos...*/
	
	setlocale(LC_ALL, "ptb");
int opcao = 0;	
float valorBar, valorPsi, valorKgf = 0;
int conversao = 0;
int final = 0;
	//Menu Inicial
	cout<<"---------------------###----------------------"<<endl;
	cout<<"       Tabela de Conversão de Pressão"<<endl;
	cout<<"Autor: Rodrigo de Abreu Araujo"<<endl;
    //A opção escolhida será armazenada na variável 'opcao'.	
	cout<<"Escolha uma unidade no Menu Abaixo: "<<endl;
	
	cout<<"1: Bar"<<endl;
	cout<<"2: PSI"<<endl;
	cout<<"3: Kgf/cm²"<<endl;
	cin>>opcao;
   // Estrutura 'SWITCH', que utilizando o valor da variável 'opcao', mostrará o 'case', de acordo com a opção do usuario.0	
switch(opcao){
	case 1:{
		cout<<"Opção selecionada: [BAR]. Informe o valor em 'BAR' que deseja converter: "<<endl;
			cin>>valorBar;
		cout<<"Informe em qual unidade você deseja que seja feita a conversão. Use os opções númericas acima: "<<endl;
			cin>>conversao;
				if( conversao == 1){
			cout<<"Opção inválida! Não há conversão de mesma unidade. Inicie o programa e tente novamente."<<endl;
			}
				if( conversao == 2){
					valorBar = valorBar*14.504;
			cout<<"O valor convertido é de: "<<valorBar<<endl;
			}
				if(conversao == 3){
					valorBar = valorBar*1.02;
			cout<<"O valor convertido é de: "<<valorBar<<endl;
			}
		
	break; // O 'break', encerrará o 'SWITCH', e o pograma seguirá o fluxo.
	}
	case 2:{
		cout<<"Opção selecionada: [PSI]. Informe o valor em 'PSI' que deseja converter: "<<endl;
			cin>>valorPsi;
		cout<<"Informe em qual unidade você deseja que seja feita a conversão. Use os opções númericas acima: "<<endl;
			cin>>conversao;
				if(conversao == 1){
					valorPsi = valorPsi/14.504;
			cout<<"O valor convertido é de: "<<valorPsi<<endl;
				}
				if(conversao == 2){
			cout<<"Opção inválida! Não há conversão de mesma unidade. Inicie o programa e tente novamente."<<endl;
			}
				if(conversao == 3){
					valorPsi = valorPsi/14.223;
			cout<<"O Valor convertido é de: "<<valorPsi<<endl;
			}
	break;
	}
		case 3:{
			cout<<"Opção selecionada: [Kgf/cm²]. Informe o valor em 'Kgf/cm²' que deseja converter: "<<endl;
				cin>>valorKgf;
			cout<<"Informe em qual unidade você deseja que seja feita a conversão. Use os opções númericas acima: "<<endl;
				cin>>conversao;
					if(conversao == 1){
						valorKgf = valorKgf/1.02;
			cout<<"O valor convertido é de: "<<valorKgf<<endl;
				}
			
					if(conversao == 2){
						valorKgf = valorKgf*14.22333;
			cout<<"O valor convertido é de: "<<valorKgf<<endl;
				}
					if(conversao == 3){
			cout<<"Opção inválida! Não há conversão de mesma unidade. Inicie o programa e tente novamente."<<endl;
				}
		break;
		}
		default:{
			cout<<"Opção Inválida!!"<<endl;   // O 'default' eliminará erros do usuário, condicionando suas opções, às dadas no menu.
		
		     	}
		
		
		
}
	
	/*
	cout<<"------------------------------------"<<endl;
	cout<<"Deseja realizar outra converção:  [SIM = 1]/[NÂO = 2] ? "<<endl;
	cin>>final;
	
	for(final=1; final<2; final++){
		continue;
	}*/
		
	
	
	
}

	
	
	
	
	
	
	

