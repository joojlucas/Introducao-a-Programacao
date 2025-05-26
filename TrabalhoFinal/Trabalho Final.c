#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id;
	char nome[50];
	int semestre;
	int ano;
} Disciplina;

typedef struct{
	char rua[50];
	char bairro[50];
	int cep;
	char cidade[50];
	char uf[4];
} Endereco;

typedef struct{
	int matricula;
	char nome[100];
	int idade;
	int ndisciplinas;
	int disciplinas[20];
	Endereco endereco;
} Aluno;

FILE *disciplinas;
FILE *alunos;

void imprimeMenu(int n){
	switch(n){
		case 1:
			printf("\t1. Gerenciar Disciplinas\n\t2. Gerenciar Alunos\n\t3. Sair\n\n\t");
			break;
		case 2:
			printf("\t1. Inserir disciplina\n\t2. Pesquisar disciplina\n\t3. Atualizar dados de uma disciplina\n\t4. remover disciplina\n\t5. Sair\n\n\t");
			break;
		case 3: printf("\t1. Inserir aluno\n\t2. Pesquisar aluno\n\t3. Atualizar dados de um aluno\n\t4. Remover um aluno\n\t5. Sair\n\n\t");
			break;
	}
}

void mostraAluno(Aluno al){
	int i;
	Disciplina dis;
	printf("\tNome do aluno: %s\n", al.nome);
	printf("\tIdade do aluno: %d\n", al.idade);
	if(al.ndisciplinas){
		printf("\tDisciplinas matriculadas: \n");
		for(i = 0; i < al.ndisciplinas; i++){
			rewind(disciplinas);
			while(fread(&dis, sizeof(Disciplina), 1, disciplinas))
				if(dis.id == al.disciplinas[i])
					printf("\t\tID %d  |  %s  |  %d° semestre  |  %d\n", dis.id, dis.nome, dis.semestre, dis.ano);
		}
	}

	printf("\tRua do aluno: %s\n", al.endereco.rua);
	printf("\tBairro do aluno: %s\n", al.endereco.bairro);
	printf("\tCEP do aluno: %d\n", al.endereco.cep);
	printf("\tCidade do aluno: %s\n", al.endereco.cidade);
	printf("\tUF do aluno: %s\n\n", al.endereco.uf);
}

void mostraDisciplina(Disciplina dis){
	printf("\tNome da disciplina: %s\n", dis.nome);
	printf("\tSemestre da disciplina: %d\n", dis.semestre);
	printf("\tAno da disciplina: %d\n\n", dis.ano);
}

void insereDisciplina(){
	Disciplina dis;
	printf("\tInsira o ID da disciplina: ");
	scanf("%d", &dis.id);
	getchar();
	printf("\tInsira o nome da disciplina: ");
	scanf("%[^\n]", dis.nome);
	printf("\tInsira o semestre da disciplina: ");
	scanf("%d", &dis.semestre);
	printf("\tInsira o ano da disciplina: ");
	scanf("%d", &dis.ano);
	fwrite(&dis, sizeof(Disciplina), 1, disciplinas);
	printf("\tDisciplina inserida!\n\n");
}

void insereAluno(){
	Aluno al;
	int i;
	printf("\tInsira o numero de matricula do aluno: ");
	scanf("%d", &al.matricula);
	getchar();
	printf("\tInsira o nome completo do aluno: ");
	scanf("%[^\n]", al.nome);
	printf("\tInsira a idade do aluno: ");
	scanf("%d", &al.idade);
	printf("\tInsira o numero de disciplinas matriculadas: ");
	scanf("%d", &al.ndisciplinas);
	for(i = 0; i < al.ndisciplinas; i++){
		printf("\t\tInsira o ID da disciplina %d: ", i + 1);
		scanf("%d", &al.disciplinas[i]);
		getchar();
	}
	printf("\tInsira o nome da rua do aluno: ");
	scanf("%[^\n]", al.endereco.rua);
	getchar();
	printf("\tInsira o nome do bairro do aluno: ");
	scanf("%[^\n]", al.endereco.bairro);
	getchar();
	printf("\tInsira o CEP do aluno: ");
	scanf("%d", &al.endereco.cep);
	getchar();
	printf("\tInsira o nome da cidade do aluno: ");
	scanf("%[^\n]", al.endereco.cidade);
	getchar();
	printf("\tInsira a UF do aluno: ");
	scanf("%[^\n]", al.endereco.uf);
	getchar();
	fwrite(&al, sizeof(Aluno), 1, alunos);
	printf("\tAluno inserido!\n\n");
}

void pesquisaDisciplina(){
	int id, ip = 0;
	Disciplina dis;
	printf("\tInsira o ID da disciplina: ");
	scanf("%d", &id);
	rewind(disciplinas);
	while(fread(&dis, sizeof(Disciplina), 1, disciplinas)){
		if(id == dis.id){
			mostraDisciplina(dis);
			ip = 1;
		}
	}
	if(!ip)
		printf("\tDisciplina %d nao encontrada!\n\n", id);
}

void pesquisaAluno(){
	int matricula, ip = 0, i;
	Aluno al;
	printf("\tInsira o numero de matricula do aluno: ");
	scanf("%d", &matricula);
	rewind(alunos);
	while(fread(&al, sizeof(Aluno), 1, alunos)){
		if(matricula == al.matricula){
			mostraAluno(al);
			ip = 1;
		}
	}
	if(!ip)
		printf("\tAluno %d nao encontrado!\n\n", matricula);
}

void atualizaDisciplina(){
	int id, ip = 0, opcao;
	Disciplina dis;
	FILE *dummy = fopen("dummy", "a+b");
	printf("\tInsira o ID da disciplina: ");
	scanf("%d", &id);
	rewind(disciplinas);
	while(fread(&dis, sizeof(Disciplina), 1, disciplinas)){
		if(dis.id == id){
			mostraDisciplina(dis);
			printf("\t1. Atualizar o ID da disciplina\n\t2. Aualizar o nome da disciplina\n\t3. Atualizar o semestre da disciplina\n\t4. Atualizar o ano da disciplina\n\t");
			scanf("%d", &opcao);
			switch(opcao){
				case 1:
					printf("\tInsira o novo ID da disciplina: ");
					scanf("%d", &dis.id);
					break;
				case 2:
					getchar();
					printf("\tInsira o novo nome da disciplina: ");
					scanf("%[^\n]", dis.nome);
					break;
				case 3:
					printf("\tInsira o novo semestre da disciplina: ");
					scanf("%d", &dis.semestre);
					break;
				case 4: printf("\tInsira o novo ano da disciplina: ");
					scanf("%d", &dis.ano);
					break;
			}
			ip = 1;
		}
		fwrite(&dis, sizeof(Disciplina), 1, dummy);
	}
	if(!ip)
		printf("\tDisciplina %d nao encontrada!\n\n", id);
	else
		printf("\tDisciplina atualizada!\n\n");
	disciplinas = dummy;
	remove("disciplinas");
	rename("dummy", "disciplinas");
}

void atualizaAluno(){
	int matricula, ip, opcao, i;
	Aluno al;
	FILE *dummy = fopen("dummy", "a+b");
	printf("\tInsira o numero de matricula do aluno: ");
	scanf("%d", &matricula);
	rewind(alunos);
	while(fread(&al, sizeof(Aluno), 1, alunos)){
		if(al.matricula == matricula){
			mostraAluno(al);
			printf("\t1. Atualizar o numero de matricula do aluno\n\t2. Atualizar o nome do aluno\n\t3. Atualizar a idade do aluno\n\t4. Atualizar quais disciplinas o aluno esta matriculado\n\t5. Atualizar o endereco do aluno\n\t");
			scanf("%d", &opcao);
			switch(opcao){
				case 1:
					printf("\tInsira o novo numero de matricula do aluno: ");
					scanf("%d", &al.matricula);
					break;
				case 2:
					getchar();
					printf("\tInsira o novo nome do aluno: ");
					scanf("%[^\n]", al.nome);
					break;
				case 3:
					printf("\tInsira a nova idade do aluno: ");
					scanf("%d", &al.idade);
					break;
				case 4:
					printf("\tInsira quantas disciplinas o aluno esta matriculado: ");
					scanf("%d", &al.ndisciplinas);
					for(i = 0; i < al.ndisciplinas; i++){
						printf("\t\tInsira o ID da disciplina %d: ", i + 1);
						scanf("%d", &al.disciplinas[i]);
					}
					break;
				case 5:
					getchar();
					printf("\tInsira o nome da rua do aluno: ");
					scanf("%[^\n]", al.endereco.rua);
					getchar();
					printf("\tInsira o nome do bairro do aluno: ");
					scanf("%[^\n]", al.endereco.bairro);
					getchar();
					printf("\tInsira o CEP do aluno: ");
					scanf("%d", &al.endereco.cep);
					getchar();
					printf("\tInsira o nome da cidade do aluno: ");
					scanf("%[^\n]", al.endereco.cidade);
					getchar();
					printf("\tInsira a UF do aluno: ");
					scanf("%[^\n]", al.endereco.uf);
					getchar();
					break;
			}
			ip = 1;
		}
		fwrite(&al, sizeof(Aluno), 1, dummy);
	}
	if(!ip)
		printf("\tAluno %d nao encontrado!!\n\n", matricula);
	else
		printf("\tAluno atualizado!\n\n");
	alunos = dummy;
	remove("alunos");
	rename("dummy", "alunos");
}

void removeDisciplina(){
	int id, ip;
	Disciplina dis;
	FILE *dummy = fopen("dummy", "a+b");
	printf("\tInsira o ID da disciplina: ");
	scanf("%d", &id);
	rewind(disciplinas);
	while(fread(&dis, sizeof(Disciplina), 1, disciplinas)){
		if(dis.id != id)
			fwrite(&dis, sizeof(Disciplina), 1, dummy);
		else
			ip = 1;
	}
	if(!ip)
		printf("\tDisciplina %d nao encontrada!\n\n", id);
	else
		printf("\tDisciplina removida!\n\n");
	disciplinas = dummy;
	remove("disciplinas");
	rename("dummy", "disciplinas");
}

void removeAluno(){
	int matricula, ip;
	Aluno al;
	FILE *dummy = fopen("dummy", "a+b");
	printf("\tInsira o numero de matricula do aluno: ");
	scanf("%d", &matricula);
	rewind(alunos);
	while(fread(&al, sizeof(Aluno), 1, alunos)){
		if(al.matricula != matricula)
			fwrite(&al, sizeof(Aluno), 1, dummy);
		else
			ip = 1;
	}
	if(!ip)
		printf("\tAluno %d nao encontrado!\n\n", matricula);
	else
		printf("\tAluno removido!\n\n");
	alunos = dummy;
	remove("alunos");
	rename("dummy", "alunos");
}

void crud_disciplina(){
	int opcao;
	imprimeMenu(2);
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			insereDisciplina();
			break;
		case 2: 
			pesquisaDisciplina();
			break;
		case 3:
			atualizaDisciplina();
			break;
		case 4:
			removeDisciplina();
			break;
		case 5:
			return;
			break;
	}
}

void crud_alunos(){
	int opcao;
	imprimeMenu(3);
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			insereAluno();
			break;
		case 2:
			pesquisaAluno();
			break;
		case 3:
			atualizaAluno();
			break;
		case 4:
			removeAluno();
			break;
		case 5:
			return;
			break;
	}
}

int main(){
	int opcao;
	disciplinas = fopen("disciplinas", "a+b");
	alunos = fopen("alunos", "a+b");
	while(1){
		imprimeMenu(1);
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				crud_disciplina();
				break;
			case 2:
				crud_alunos();
				break;
			case 3:
				return 0;
				break;
			default:
				printf("opcao invalida!!\n");
				break;
		}
	}
	return 0;
}
