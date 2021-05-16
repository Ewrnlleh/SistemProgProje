// Fields ile ilgili örnek

#include "fields.h"

int main()
{
  IS is;

  // Yeni bir dosya okuyucusu tanımla
  is = new_inputstruct(NULL);  // NULL --> stdin

  while(get_line(is) >= 0){
    printf("Satır %d.\n", is->line);

    //    for(int i = 0; i < is->NF; i++)
      printf("%s\n", is->fields[2]);    
  }

  //printf("Kelime sayısı: %d\n", is->NF);

  
  // Çıkmadan önce bellekte kullanılan yerlerin geri bırakılması
  jettison_inputstruct(is);
}
