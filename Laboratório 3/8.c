#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char texto[100];
} Compromisso;

int main() {
    Horario meuHorario = {12, 00, 0};
    Data minhaData = {19, 11, 2023};

    printf("\nHorario: %02d:%02d:%02d\n", meuHorario.hora, meuHorario.minutos, meuHorario.segundos);
    printf("Data: %02d/%02d/%d\n", minhaData.dia, minhaData.mes, minhaData.ano);

    Compromisso compromisso1 = {
            .data = {19, 11, 2023},
            .horario = {12, 30, 0},
            .texto = "Reuniao de trabalho"
    };

    printf("\n\nProximos compromissos:\n");
    printf("Data: %02d/%02d/%d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minutos, compromisso1.horario.segundos);
    printf("Texto: %s\n\n", compromisso1.texto);

    return 0;
}
