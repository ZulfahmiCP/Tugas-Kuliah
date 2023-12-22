#include <stdio.h>

struct Siswa {
    char name[100];
    float score[100], avg;
};

int main() {

    // N adalah jumlah siswa dan M adalah jumlah ujian
    int N,M; 
    printf("Masukkan jumlah siswa : ");
    scanf("%d", &N);
    printf("Masukkan jumlah ujian : ");
    scanf("%d", &M);

    struct Siswa siswa[N];

    printf("Masukkan nama - nama siswa\n");
    for(int i = 0; i < N; i++){
        scanf("%s", &siswa[i].name);
    }

    printf("Masukkan nilai ujian masing - masing siswa\n");
    for(int i = 0; i < N; i++){
        float sum = 0;
        for(int j = 0; j < M; j++){
            scanf("%f", &siswa[i].score[j]);
            sum += siswa[i].score[j];
        }

        siswa[i].avg = sum / N;
    }

    for(int i = 0; i < N; i++)
        printf("Rata - rata dari %s adalah %f\n", siswa[i].name, siswa[i].avg);

    return 0;
}