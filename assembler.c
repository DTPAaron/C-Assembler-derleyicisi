//02200201057
//HARUN ALTUN
//2. SINIF ÖRGÜN 4. ÖDEV 
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int index = 0, z = 0;
uint8_t x = 0;
uint8_t AX, BX, CX, DX;
uint8_t RAM[256];
char sayi[3];
int hrk(char kelime[]) {
  if (kelime[index] == 'H' && kelime[index + 1] == 'R' && kelime[index + 2] == 'K') {
    index += 3;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        index += 3;
        AX = BX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        index += 3;
        AX = CX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        index += 3;
        AX = DX;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        AX = RAM[x];
        index++;
      } else if (kelime[index] == ',') {
        index += 1;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];

          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        AX = x;
      }
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        index += 3;
        BX = AX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        index += 3;
        BX = CX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        index += 3;
        BX = DX;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        BX = RAM[x];
        index++;

      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index += 1;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        BX = x;
      }
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        index += 3;
        CX = AX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        index += 3;
        CX = BX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        index += 3;
        CX = DX;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        CX = RAM[x];
        index++;

      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index += 1;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        CX = x;
      }
    } else if (kelime[index] == 'D' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        index += 3;
        DX = AX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        index += 3;
        DX = CX;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        index += 3;
        DX = BX;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = RAM[x];
        index++;
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index += 1;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = x;
      }
    } else if (kelime[index] == '[') {
      index++;
      while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
        sayi[z] = kelime[index];
        z++;
        index++;
      }
      z = 0;
      x = atoi(sayi);

      if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'A' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = AX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'B' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] =BX ;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'C' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x]=CX  ;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'D' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = DX;
      }
    }
  }
}
int top(char kelime[]) {
  if (kelime[index] == 'T' && kelime[index + 1] == 'O' && kelime[index + 2] == 'P') {
    index += 3;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        AX = AX + AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        AX = AX + BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        AX = AX + CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        AX = AX + DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        AX = AX + RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        AX = AX + x;
      }
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        BX = BX + AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        BX = BX + BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        BX = BX + CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        BX = BX + DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        BX = BX + RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        BX = BX + x;
      }
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        CX = CX + AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        CX = CX + BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        CX = CX + CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        CX = CX + DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        CX = CX + RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        CX = CX + x;
      }
    } else if (kelime[index] == 'D' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = DX + AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = DX + BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = DX + CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        DX = DX + DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = DX + RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = DX + x;
      }
    } else if (kelime[index] == '[') {
      index++;
      while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
        sayi[z] = kelime[index];
        z++;
        index++;
      }
      z = 0;
      x = atoi(sayi);
      if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'A' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] + AX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'B' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] + BX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'C' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] + CX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'D' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] + DX;
      }
    }
  }
}
int cik(char kelime[]) {
  if (kelime[index] == 'C' && kelime[index + 1] == 'I' && kelime[index + 2] == 'K') {
    index += 3;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        AX = AX - AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        AX = AX - BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        AX = AX - CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        AX = AX - DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        AX = AX - RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        AX = AX - x;
      }
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        BX = BX - AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        BX = BX - BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        BX = BX - CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        BX = BX - DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        BX = BX - RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        BX = BX - x;
      }
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        CX = CX - AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        CX = CX - BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        CX = CX - CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        CX = CX - DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        CX = CX - RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        CX = CX - x;
      }
    } else if (kelime[index] == 'D' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = DX - AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = DX - BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = DX - CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        DX = DX - DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = DX - RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = DX - x;
      }
    } else if (kelime[index] == '[') {
      index++;
      while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
        sayi[z] = kelime[index];
        z++;
        index++;
      }
      z = 0;
      x = atoi(sayi);
      if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'A' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] - AX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'B' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] - BX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'C' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] - CX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'D' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] - DX;
      } 
    }
  }
}
int crp(char kelime[]) {
  if (kelime[index] == 'C' && kelime[index + 1] == 'R' && kelime[index + 2] == 'P') {
    index += 3;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        AX = AX * AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        AX = AX * BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        AX = AX * CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        AX = AX * DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        AX = AX * RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        AX = AX * x;
      }
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        BX = BX * AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        BX = BX * BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        BX = BX * CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        BX = BX * DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        BX = BX * RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        BX = BX * x;
      }
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        CX = CX * AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        CX = CX * BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        CX = CX * CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        CX = CX * DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        CX = CX * RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        CX = CX * x;
      }
    } else if (kelime[index] == 'D' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = DX * AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = DX * BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = DX * CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        DX = DX * DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = DX * RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = DX * x;
      }
    } else if (kelime[index] == '[') {
      index++;
      while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
        sayi[z] = kelime[index];
        z++;
        index++;
      }
      z = 0;
      x = atoi(sayi);
      if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'A' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] * AX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'B' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] * BX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'C' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] * CX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'D' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] * DX;
      }
    }
  }
}
int bol(char kelime[]) {
  if (kelime[index] == 'B' && kelime[index + 1] == 'O' && kelime[index + 2] == 'L') {
    index += 3;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = AX % AX;
        AX = AX / AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = AX % BX;
        AX = AX / BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = AX % CX;
        AX = AX / CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = AX % RAM[x];
        AX = AX / RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = AX % x;
        AX = AX / x;
      }
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = BX % AX;
        BX = BX / AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = BX % BX;
        BX = BX / BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = BX % CX;
        BX = BX / CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = BX % RAM[x];
        BX = BX - RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = BX % x;
        BX = BX / x;
      }
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = CX % AX;
        CX = CX / AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = CX % BX;
        CX = CX / BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = CX % CX;
        CX = CX / CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = CX % RAM[x];
        CX = CX / RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = CX % x;
        CX = CX / x;
      }
    } else if (kelime[index] == '[') {
      index++;
      while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
        sayi[z] = kelime[index];
        z++;
        index++;
      }
      z = 0;
      x = atoi(sayi);
      if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'A' && kelime[index + 3] == 'X') {
        index += 4;
        DX = RAM[x] % AX;
        RAM[x] = RAM[x] / AX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'B' && kelime[index + 3] == 'X') {
        index += 4;
        DX = RAM[x] % BX;
        RAM[x] = RAM[x] / BX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'C' && kelime[index + 3] == 'X') {
        index += 4;
        DX = RAM[x] % CX;
        RAM[x] = RAM[x] / CX;
      } 
    }
  }
}
int ve(char kelime[]) {
  if (kelime[index] == 'V' && kelime[index + 1] == 'E') {
    index += 2;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        AX = AX & AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        AX = AX & BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        AX = AX & CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        AX = AX & DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        AX = AX & RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        AX = AX & x;
      }
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        BX = BX & AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        BX = BX & BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        BX = BX & CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        BX = BX & DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        BX = BX & RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        BX = BX & x;
      }
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        CX = CX & AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        CX = CX & BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        CX = CX & CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        CX = CX & DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        CX = CX & RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        CX = CX & x;
      }
    } else if (kelime[index] == 'D' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = DX & AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = DX & BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = DX & CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        DX = DX & DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = DX & RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = DX & x;
      }
    } else if (kelime[index] == '[') {
      index++;
      while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
        sayi[z] = kelime[index];
        z++;
        index++;
      }
      z = 0;
      x = atoi(sayi);
      if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'A' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] & AX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'B' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] & BX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'C' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] & CX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'D' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] & DX;
      }
    }
  }
}
int veya(char kelime[]) {
  if (kelime[index] == 'V' && kelime[index + 1] == 'E' && kelime[index + 2] == 'Y' && kelime[index + 3] == 'A') {
    index += 4;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        AX = AX | AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        AX = AX | BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        AX = AX | CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        AX = AX | DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        AX = AX | RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        AX = AX | x;
      }
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        BX = BX | AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        BX = BX | BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        BX = BX | CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        BX = BX | DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        BX = BX | RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        BX = BX | x;
      }
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        CX = CX | AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        CX = CX | BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        CX = CX | CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        CX = CX | DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        CX = CX | RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        CX = CX | x;
      }
    } else if (kelime[index] == 'D' && kelime[index + 1] == 'X') {
      index += 2;
      if (kelime[index] == ',' && kelime[index + 1] == 'A' && kelime[index + 2] == 'X') {
        DX = DX | AX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'B' && kelime[index + 2] == 'X') {
        DX = DX | BX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'C' && kelime[index + 2] == 'X') {
        DX = DX | CX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == 'D' && kelime[index + 2] == 'X') {
        DX = DX | DX;
        index += 3;
      } else if (kelime[index] == ',' && kelime[index + 1] == '[') {
        index += 2;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        index++;
        x = atoi(sayi);
        DX = DX | RAM[x];
      } else if (kelime[index] == ',' && (kelime[index + 1] == '0' || kelime[index + 1] == '1' || kelime[index + 1] == '2' || kelime[index + 1] == '3' || kelime[index + 1] == '4' || kelime[index + 1] == '5' || kelime[index + 1] == '6' || kelime[index + 1] == '7' || kelime[index + 1] == '8' || kelime[index + 1] == '9')) {
        index++;
        while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
          sayi[z] = kelime[index];
          z++;
          index++;
        }
        z = 0;
        x = atoi(sayi);
        DX = DX | x;
      }
    } else if (kelime[index] == '[') {
      index++;
      while (kelime[index] == '0' || kelime[index] == '1' || kelime[index] == '2' || kelime[index] == '3' || kelime[index] == '4' || kelime[index] == '5' || kelime[index] == '6' || kelime[index] == '7' || kelime[index] == '8' || kelime[index] == '9') {
        sayi[z] = kelime[index];
        z++;
        index++;
      }
      z = 0;
      x = atoi(sayi);
      if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'A' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] | AX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'B' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] | BX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'C' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] | CX;
      } else if (kelime[index] == ']' && kelime[index + 1] == ',' && kelime[index + 2] == 'D' && kelime[index + 3] == 'X') {
        index += 4;
        RAM[x] = RAM[x] | DX;
      } 
    }
  }
}
int deg(char kelime[]) {
  if (kelime[index] == 'D' && kelime[index + 1] == 'E' && kelime[index + 2] == 'G') {
    index += 3;
    if (kelime[index] == 'A' && kelime[index + 1] == 'X') {
      index += 2;
      AX = ~AX;
    } else if (kelime[index] == 'B' && kelime[index + 1] == 'X') {
      index += 2;
      BX = ~BX;
    } else if (kelime[index] == 'C' && kelime[index + 1] == 'X') {
      index += 2;
      CX = ~CX;
    } else if (kelime[index] == 'D' && kelime[index + 1] == 'X') {
      index += 2;
      DX = ~DX;
    }

  }

}
int sayidizisifirlama(char sayi[]) {
  memset(sayi, ' ', 3);
}
int kontrol(char kelime[]) {
  if (kelime[index] == 'H') {
    hrk(kelime);
    sayidizisifirlama(sayi);
  } else if (kelime[index] == 'T') {
    top(kelime);
    sayidizisifirlama(sayi);
  } else if (kelime[index] == 'C' && kelime[index + 1] == 'R') {
    crp(kelime);
    sayidizisifirlama(sayi);
  } else if (kelime[index] == 'C' && kelime[index + 1] == 'I') {
    cik(kelime);
    sayidizisifirlama(sayi);
  } else if (kelime[index] == 'B') {
    bol(kelime);
    sayidizisifirlama(sayi);
  } else if (kelime[index] == 'V' && kelime[index + 1] == 'E' && kelime[index + 2] == 'Y') {
    veya(kelime);
    sayidizisifirlama(sayi);
  } else if (kelime[index] == 'V' && kelime[index + 1] == 'E') {
    ve(kelime);
    sayidizisifirlama(sayi);
  } else if (kelime[index] == 'D') {
    deg(kelime);
    sayidizisifirlama(sayi);
  }
}

int main() {
  char kelime[400], isim[30], harf;
  int i, k, enterkont;
  FILE * fp;
  printf("Dosya adini giriniz: ");
  scanf("%s", & isim);
  fp = fopen(isim, "r");

  if (fp != NULL) {
    harf = fgetc(fp);
    kelime[0] = harf;
    while (harf != EOF) {
      harf = fgetc(fp);
      kelime[i] = harf;
      i++;
    }
  } else {
    printf("Dosya ismini kontrol edin ve tekrar girin.");
  }
  int boyut = strlen(kelime);

  //bosluk enter tab silme
  for (i = 0; i < boyut; i++) {
    if (kelime[i] == 32) {
      for (k = i; k < boyut; k++) {
        kelime[k] = kelime[k + 1];
      }
      boyut = boyut - 1;
    }
    if (kelime[i] == 10) {
      for (k = i; k < boyut; k++) {
        kelime[k] = kelime[k + 1];
      }
      boyut = boyut - 1;
      enterkont++;
    }

  }
  boyut = boyut - 4;
  for (i = 0; i < 256; i++) {
    RAM[i] = i;
  }
  for (i = 0; i <= enterkont; i++) {
    kontrol(kelime);
  }

  printf("AX:%u\n", AX);
  printf("BX:%u\n", BX);
  printf("CX:%u\n", CX);
  printf("DX:%u\n", DX);
  fclose(fp);
}
