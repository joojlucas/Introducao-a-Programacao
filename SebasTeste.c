#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int id;
	char nome[200];
	int semestre;
	int ano;
}dis;

typedef struct{
	char bairro[200];
	char rua[200];
	int cep;
	char cidade[200];
	char UF[2];
}end;

typedef struct{
	int matricula;
	char nomecomp[100];
	int idade;
	int ndisci;
	int discimat[20];
	end endereco;
}al;

FILE *disciplinapoint;
FILE *alunopoint;
FILE *newdisci;
FILE *newalu;

void GerenciarDisciplinas(){
	dis disciplinastr;
	int n1;
	printf("------------Digite 1 para inserir uma nova disciplina----------\n");
	printf("------------Digite 2 para pesquisar alguma disciplina----------\n");
	printf("------------Digite 3 para atualizar dados de alguma disciplina-\n");
	printf("------------Digite 4 para remover alguma disciplina------------\n");
	printf("------------Digite 5 para retornar ao menu princial------------\n\n");
	scanf("%d", &n1);
	while (n1 != 1 && n1 != 2 && n1 != 3 && n1 != 4 && n1 != 5) {
		printf("\nDigito invalido, tente novamente!\n\n");
		scanf("%d", &n1);
	}
	if(n1 == 1){
		printf("------------Insira o ID da disciplina--------------------\n");
		scanf("%d", &disciplinastr.id);
		getchar();
		printf("\n------------Insira o nome da disciplina------------------\n");
		scanf("%[^\n]", disciplinastr.nome);
		printf("\n------------Insira o semestre da disciplina (1 ou 2)-----\n");
		scanf("%d", &disciplinastr.semestre);
		printf("\n------------Insira o ano de oferecimento da disciplina---\n");
		scanf("%d", &disciplinastr.ano);
		
		
		fwrite(&disciplinastr, sizeof(dis), 1, disciplinapoint);
		
		printf("\n\n\n------------Disciplina cadastrada com sucesso----------\n\n\n\n\n\n");
	}
	else if(n1 == 2){
		printf("------------Insira o ID da disciplina: ");
		int id, i = 0, j;
		dis aux;
		scanf("%d", &id);
		rewind(disciplinapoint);
		while(fread(&aux, sizeof(dis), 1, disciplinapoint)){
			if(id == aux.id){
				printf("\n\nDisciplina: %s\n", aux.nome);
				printf("Semestre da disciplina: %d\n", aux.semestre);
				printf("Ano de oferecimento da disciplina: %d\n\n\n", aux.ano);
				i++;
			}
		}
		if(i == 0) printf("\n\n\nID de disciplina nao identificado.\n\n\n");
	}
	else if(n1 == 3){
		printf("Digite o ID da disciplina que deseja atualizar os dados: ");
		dis aux;
		int j, id, b = 0;
		scanf("%d", &id);
		rewind(disciplinapoint);
		newdisci = fopen("disciplinaarq", "a+b");
		while(feof(disciplinapoint) == 0){
			fread(&aux, sizeof(dis), 1, disciplinapoint);
			if(id == aux.id){
				printf("\n\nDisciplina identifcada: %s\n", aux.nome);
				printf("\nDigite 1 para alterar o ID da disciplina\n");
				printf("\nDigite 2 para alterar o nome da disciplina\n");
				printf("\nDigite 3 para alterar o semestre da disciplina\n");
				printf("\nDigite 4 para alterar o ano da disciplina\n");
				scanf("%d", &j);
				if(j == 1){
					printf("\n\nID atual da disciplina: %d\n", aux.id);
					printf("Insira o novo ID da disciplina: ");
					scanf("%d", &aux.id);
				}
				else if(j == 2){
					printf("\n\nNome atual da disciplina: %s\n", aux.nome);
					printf("Insira o novo nome da disciplina: ");
					scanf("%[^\n]", aux.nome);
				}
				else if(j == 3){
					printf("\n\nSemestre atual da disciplina: %d\n", aux.semestre);
					printf("Insira o novo semestre de oferecimento da disciplina: ");
					scanf("%d", &aux.semestre);
				}
				else if(j == 4){
					printf("\n\nAno atual da disciplina: %d\n", aux.ano);
					printf("Insira o novo ano da disciplina: ");
					scanf("%d", &aux.ano);
				}
				fwrite(&aux, sizeof(dis), 1, newdisci);
				b++;
			}
			else{
				fwrite(&aux, sizeof(dis), 1, newdisci);
			}
		}
		if(b == 0)printf("\n\nDisciplina nao identifcada\n\n\n\n");
		else printf("\n\nDados atualizados com sucesso!\n\n\n\n");
		remove("disciplinaarq");
		disciplinapoint = newdisci;
	}
	else if(n1 == 4){
		printf("Digite o ID da disciplina que deseja remover: ");
		int id, c = 0;
		dis aux;
		scanf("%d", &id);
		rewind(disciplinapoint);
		newdisci = fopen("disciplinaarq", "a+b");
		while(feof(disciplinapoint) == 0){
			fread(&aux, sizeof(dis), 1, disciplinapoint);
			if(id != aux.id){
			fwrite(&aux, sizeof(dis), 1, newdisci);
			}
			else c++;
		}
		if(c == 0) printf("\n\nO ID de disciplina nao foi indetificado\n\n\n\n");
		else printf("\n\nDisciplina removida com sucesso\n\n\n\n");
	}
	else if(n1 == 5){
		return;
	}	
}

void GerenciarAlunos(){
	al alunostr;
	end endereco;
	int n2, i, j;
	printf("\n------------Digite 1 para inserir um(a) novo(a) aluno(a)----------\n");
	printf("------------Digite 2 para pesquisar um(a) aluno(a)---------------\n");
	printf("------------Digite 3 para atualizar os dados de um(a) aluno(a)---\n");
	printf("------------Digite 4 remover algum(a) aluno(a)-------------------\n");
	printf("------------Digite 5 retornar para o menu principal--------\n\n");
	scanf ("%d", &n2);
	while (n2 != 1 && n2 != 2 && n2 != 3 && n2 != 4 && n2 != 5) {
		printf("\nDigito invalido, tente novamente!\n\n");
		scanf("%d", &n2);
	}
	if(n2 == 1){
		printf("------------Insira o numero de matricula do(a) aluno(a)----------------------\n");
		scanf("%d", &alunostr.matricula);
		getchar();
		printf("\n------------Insira o nome completo do(a) aluno(a)--------------------------\n");
		scanf("%[^\n]", alunostr.nomecomp);
		getchar();
		printf("\n------------Insira a idade do(a) aluno(a)----------------------------------\n");
		scanf("%d", &alunostr.idade);
		getchar();
		printf("\n------------Insira a quantidade de disciplinas matriculadas do(a) aluno(a)-\n");
		scanf("%d", &alunostr.ndisci);
		getchar();
		for(j = 0; j < alunostr.ndisci; j++){
			printf("\n------------Insira a Id da disciplina numero %d----------------------\n", j + 1);
			scanf("%d", &alunostr.discimat[j]);
			getchar();
		}
		printf("\n------------Insira o endereco completo do(a) aluno(a)----------------------\n");
		printf("\n\nNome do Bairro : ");
		scanf("%[^\n]", alunostr.endereco.bairro);
		getchar();
		printf("\n\nNome da Rua : ");
		scanf("%[^\n]", alunostr.endereco.rua);
		getchar();
		printf("\n\nNumero do CEP (sem ponto e sem hifen) : ");
		scanf("%d", &alunostr.endereco.cep);
		getchar();
		printf("\n\nNome da Cidade : ");
		scanf("%[^\n]", alunostr.endereco.cidade);
		getchar();
		printf("\n\nUF : ");
		scanf("%[^\n]", alunostr.endereco.UF);
		getchar();
		printf("\n\n\n");
		
		fwrite(&alunostr, sizeof(al), 1, alunopoint);
		
		printf("\n------------Aluno(a) cadastrado com sucesso----------\n\n\n\n\n");
	}
	else if(n2 == 2){
		int m;
		i = 0;
		al aux;
		dis aux1;
		printf("------------Insira o numero de matricula do(a) aluno(a): ");
		scanf("%d", &m);
		rewind(alunopoint);
		while(fread(&aux, sizeof(al), 1, alunopoint)){
			if(m == aux.matricula){
				printf("\n\nNome completo do(a) aluno(a): %s\n", aux.nomecomp);
				printf("idade do aluno: %d\n", aux.idade);
				printf("Numero de disciplinas matriculadas: %d\n", aux.ndisci);
				for(i = 0; i < aux.ndisci; i++){
					printf("ID da disciplina %d: %d\n", i + 1, aux.discimat[i]);
					rewind(disciplinapoint);
					while(fread(&aux1, sizeof(dis), 1, disciplinapoint)){
						if(aux.discimat[i] == aux1.id){
							printf("Nome da disciplina %d: %s\n", i + 1, aux1.nome);
							printf("Semestre da disciplina %d: %d\n", i + 1, aux1.semestre);
							printf("Ano da disciplina %d: %s\n", i + 1, aux1.ano);
						}
					}
				}
				printf("Endereco do(a) aluno(a): \n");
				printf("CEP : %d\n", aux.endereco.cep);
				printf("Rua : %s\n", aux.endereco.rua);
				printf("Bairro : %s\n", aux.endereco.bairro);
				printf("Cidade : %s\n", aux.endereco.cidade);
				printf("UF : %s\n\n\n\n\n", aux.endereco.UF);
				i++;
			}
		}
		if(i == 0) printf("Matricula de aluno nao identificada\n");	
	}
	else if(n2 == 3){
		printf("Digite o numero de matricula do aluno cujo deseja alterar os dados: ");
		int k, b;
		al aux;
		scanf("%d", &k);
		rewind(alunopoint);
		while(feof(alunopoint) == 0){
			fread(&aux, sizeof(al), 1, alunopoint);
			if(k == aux.matricula){
				printf("\n\nAluno(a) identifcado(a): %s\n", aux.nomecomp);
				printf("\nDigite 1 para alterar a matricula do(a) aluno(a)\n");
				printf("\nDigite 2 para alterar o nome do(a) aluno(a)\n");
				printf("\nDigite 3 para alterar a idade do(a) aluno(a)\n");
				printf("\nDigite 4 para alterar adicionar ou remover alguma disciplina do(a) aluno(a)\n");
				printf("\nDigite 5 para alterar algum elemento do endereco do(a) aluno(a)\n");
				int k1, k2, k3;
				scanf("%d", &k1);
				getchar();
				if (k1 == 1){
					printf("\n\nMatricula atual do aluno: %d\n", aux.matricula);
					printf("Insira o novo numero de matricula do aluno: ");
					scanf("%d", &aux.matricula);
					printf("\nConcluido\n\n\n");
					getchar();
				}
				else if (k1 == 2){
					printf("\n\nNome completo atual do aluno: %s\n", aux.nomecomp);
					printf("Insira o novo nome completo do aluno: ");
					scanf("%[^\n]", aux.nomecomp);
					printf("\nConcluido\n\n\n");
				}
				else if(k1 == 3){
					printf("\n\nMatricula atual do aluno: %s\n", aux.nomecomp);
					printf("Insira o novo nome completo do aluno: ");
					scanf("%[^\n]", aux.nomecomp);
					printf("\nConcluido\n\n\n");
				}
				else if(k1 == 4){
					printf("\n\nDigite 1 para Adicionar alguma disciplina\n");
					printf("\n\nDigite 2 para Remover alguma disciplina\n");
					scanf("%d", &k2);
					if(k2 == 1){
						printf("\n\nInsira a Id da disciplina: ");
						scanf("%d", &aux.discimat[aux.ndisci]);
						printf("\n\nDisciplina adicionada com sucesso!\n\n");
					}
					else if(k2 == 2){
						printf("\n\nInsira a Id da disciplina que deseja remover: ");
						scanf("%d", &k3);
						for(i = 0; i < aux.ndisci; i++){
							if(k3 == aux.discimat[i]) aux.discimat[i] = 0;
						}
						printf("\n\nDisciplina removida com sucesso!\n\n");
					}
				}
				else if (k1 == 5){
					int k4;
					printf("\nDigite 1 para alterar a rua\n");
					printf("\nDigite 2 para alterar o bairro\n");
					printf("\nDigite 3 para alterar o CEP\n");
					printf("\nDigite 4 para alterar a cidade\n");
					printf("\nDigite 5 para alterar a UF\n");
					scanf("%d", &k4);
					getchar();
					if(k4 == 1){
						printf("Nome atual da rua: %s\n\n", aux.endereco.rua);
						printf("Digite o nome da nova rua: ");
						scanf("%[^\n]", aux.endereco.rua);
						printf("\nConcluido\n\n\n");
					}
					else if(k4 == 2){
						printf("Nome atual do bairro: %s\n\n", aux.endereco.bairro);
						printf("Digite o nome do novo bairro: ");
						scanf("%[^\n]", aux.endereco.bairro);
						printf("\nConcluido\n\n\n");
					}
					else if(k4 == 3){
						printf("CEP atual: %s\n\n", aux.endereco.cep);
						printf("Digite o novo CEP: ");
						scanf("%d", aux.endereco.cep);
						getchar();
						printf("\nConcluido\n\n\n");
					}
					else if(k4 == 4){
						printf("Nome atual da cidade: %s\n\n", aux.endereco.cidade);
						printf("Digite o nome da nova cidade: ");
						scanf("%[^\n]", aux.endereco.cidade);
						printf("\nConcluido\n\n\n");
					}
					else if(k4 == 5){
						printf("UF atual: %s\n\n", aux.endereco.UF);
						printf("Digite o novo UF: ");
						scanf("%[^\n]", aux.endereco.UF);
						printf("\nConcluido\n\n\n");
					}
				}
				fwrite(&aux, sizeof(al), 1, newalu);
				b++;
			}
			else{
				fwrite(&aux, sizeof(al), 1, newalu);
			}
		}
		if(b == 0)printf("\n\nAluno(a) nao identifcado\n\n\n\n");
		else printf("\n\nDados atualizados com sucesso!\n\n\n\n");
		remove("alunoarq");
		alunopoint = newalu;
	}
	else if(n2 == 4){
		printf("Digite o numero de matricula do aluno que deseja remover: ");
		int mat, c = 0;
		al aux;
		scanf("%d", &mat);
		rewind(alunopoint);
		newalu = fopen("alunoarq", "a+b");
		while(feof(alunopoint) == 0){
			fread(&aux, sizeof(dis), 1, alunopoint);
			if(mat != aux.matricula){
				fwrite(&aux, sizeof(dis), 1, newalu);
			}
			else c++;
		}
		if(c == 0) printf("\n\nO aluno nao foi indetificado\n\n\n\n");
		else printf("\n\nAluno removido com sucesso\n\n\n\n");
	}
	else if(n2 == 5) {
		return;
	}
}


int main(){
	
	disciplinapoint = fopen("disciplinaarq", "a+b");
	alunopoint = fopen("alunoarq", "a+b");
	
	int n = 1;
	while(n != 3){
		printf("------------Digite 1 para Gerenciar Disciplinas------------\n");
		printf("------------Digite 2 para Gerenciar Alunos-----------------\n");
		printf("------------Digite 3 para Sair-----------------------------\n\n\n");
	
		scanf("%d", &n);
		
		if(n == 1) GerenciarDisciplinas();
		else if(n == 2) GerenciarAlunos();
		else if(n == 3) return 0;
		else printf("\nDigito invalido, tente novamente!\n\n");
	}
	
	return 0;
}
