#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//small to big one -> behind
typedef struct{
    int kor;
    int eng;
    int math;
    char *name;

}Student;

Student stu[100001];

int alphOrder(int ix1, int ix2){
    int i=0;
    while(stu[ix1].name[i] == stu[ix2].name[i]){
        if(stu[ix1].name[i] =='\0'){
            return 0;
        }
        i++;
    };
        return (stu[ix1].name[i]) < (stu[ix2].name[i]) ? -1 : 1;
}

int isRightOrder(int ix1, int ix2){
    if(stu[ix1].kor>stu[ix2].kor){
        return 1;
    }else if(stu[ix1].kor == stu[ix2].kor){
        if(stu[ix1].eng<stu[ix2].eng){
            return 1;
        }else if(stu[ix1].eng==stu[ix2].eng){
            if(stu[ix1].math>stu[ix2].math){
                return 1;
            }else if(stu[ix1].math==stu[ix2].math){
                if(alphOrder(ix1,ix2)<0){
                    return 1;
                }else{
                    return 0;
                }
            }
        }
    }
    return 0;
}

void swap(int ix1, int ix2){
    int temp;
    int i;
    temp = stu[ix2].math;
    stu[ix2].math = stu[ix1].math;
    stu[ix1].math = temp;
    temp = stu[ix2].kor;
    stu[ix2].kor = stu[ix1].kor;
    stu[ix1].kor = temp;
    temp = stu[ix2].eng;
    stu[ix2].eng = stu[ix1].eng;
    stu[ix1].eng = temp;

    char *a = stu[ix1].name;
    stu[ix1].name =  stu[ix2].name;
    stu[ix2].name = a;
}

int partition(int low, int high){
    int pivot = (low+high)/2;
    swap(pivot,high);
    int itr;
    int k = low;
    for(itr = low; itr < high; itr++){
        if(isRightOrder(itr,high)){
            swap(itr,k);
            k++;
        }
    }
    swap(k,high);
    return k;
}

void quicksort(int low, int high){
    if(low<high){
        int pivot = partition(low,high);
        quicksort(low,pivot-1);
        quicksort(pivot+1,high);
    }
}

int main(){
    int i, n;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        stu[i].name = malloc(sizeof(char)*11);
        scanf("%s%d%d%d",stu[i].name,&stu[i].kor,&stu[i].eng,&stu[i].math);
    }

    quicksort(0,n-1);

    for(i=0;i<n;i++){
        printf("%s\n",stu[i].name);
    }

    return 0;
}
