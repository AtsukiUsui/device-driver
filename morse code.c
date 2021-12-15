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
    gpio_ base[7] = 1 <<25;
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
