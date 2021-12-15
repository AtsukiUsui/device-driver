int i;
if(c == '0'){
  for(i = 0 ; i < 5 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}
 
else if(c == '1'){
  gpio_base[7] = 1 <<25;
  msleep(1000/3);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);

  for(i = 0 ; i < 4 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == '2'){
  for(i = 0 ; i < 2 ; i++){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 3 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == '3'){
  for(i = 0 ; i < 3 ; i++){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == '4'){
  for(i = 0 ; i < 4 ; i++){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 1 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

if(c == '5'){
  for(i = 0 ; i < 5 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == '6'){
  for(i = 0 ; i < 1 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 4 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == '7'){
  for(i = 0 ; i < 2 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 3 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == '8'){
  for(i = 0 ; i < 3 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}
   
else if(c == '9'){
  for(i = 0 ; i < 4 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 1 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'A'){
  gpio_base[7] = 1 <<25;
  msleep(1000/3);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);
  
  gpio_base[7] = 1 << 25;
  msleep(1000);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);
  }
}

else if(c == 'B'){
  for(i = 0 ; i < 1 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 3 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'C'){
  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'D'){
  for(i = 0 ; i < 1 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
   for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'E'){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
}

else if(c == 'F'){
  for(i = 0 ; i < 2 ; i++){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  
  gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
}

else if(c == 'G'){
  for(i = 0 ; i < 2 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  
}

if(c == 'H'){
  for(i = 0 ; i < 4 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

if(c == 'I'){
  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'J'){
  gpio_base[7] = 1 <<25;
  msleep(1000/3);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);

  for(i = 0 ; i < 3 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'K'){
   gpio_base[7] = 1 <<25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  
   gpio_base[7] = 1 <<25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
}

else if(c == 'L'){
  gpio_base[7] = 1 <<25;
  msleep(1000/3);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);
  
  gpio_base[7] = 1 << 25;
  msleep(1000);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);
  
  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

if(c == 'M'){
  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'N'){
 
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  
}

if(c == 'O'){
  for(i = 0 ; i < 3 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'P'){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  
  for(i = 0 ; i < 2 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  
}

else if(c == 'Q'){
  for(i = 0 ; i < 2 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
  gpio_base[7] = 1 << 25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  
  gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  
}

else if(c == 'R'){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  
  for(i = 0 ; i < 1 ; i++){
   gpio_base[7] = 1 << 25;
   msleep(1000);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  
}

if(c == 'S'){
  for(i = 0 ; i < 3 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

if(c == 'T'){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
}

else if(c == 'U'){
  for(i = 0 ; i < 2 ; i++){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
}

else if(c == 'V'){
  for(i = 0 ; i < 3 ; i++){
   gpio_base[7] = 1 <<25;
   msleep(1000/3);
   gpio_base[10] = 1 <<25;
   msleep(1000/3);
  }
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
}

else if(c == 'W'){
  gpio_base[7] = 1 <<25;
  msleep(1000/3);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);

  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == 'X'){
  
  gpio_base[7] = 1 << 25;
  msleep(1000);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);
  
  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 <<25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
    
    gpio_base[7] = 1 <<25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  
}

else if(c == 'Y'){
  gpio_base[7] = 1 << 25;
  msleep(1000);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);
  
  gpio_base[7] = 1 <<25;
  msleep(1000/3);
  gpio_base[10] = 1 <<25;
  msleep(1000/3);

  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  } 
}

else if(c == 'Z'){
  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
  for(i = 0 ; i < 2 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}

else if(c == '.'){
  for(i = 0 ; i < 3 ; i++){
    gpio_base[7] = 1 << 25;
    msleep(1000/3);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  
    gpio_base[7] = 1 << 25;
    msleep(1000);
    gpio_base[10] = 1 <<25;
    msleep(1000/3);
  }
}
