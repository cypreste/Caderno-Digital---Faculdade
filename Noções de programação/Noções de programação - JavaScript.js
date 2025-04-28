//Manipulação singular de dados
/*
img = new SimpleImage("circulo.bmp"); // Carrega a imagem circulo.bmp na memória e a armazena na variável chamada img.
img.setZoom(20); // 20 vezes o tamanho original para a imagem armazenada na variável img. Um zoom menor do que 0 (zero) equivale a um afastamento. Por exemplo, um zoom de 0.5 equivale a um afastamento de 2x.
pixel = img.getPixel(4,0) // Obtém a referência ao pixel (4,4) da imagem armazenada na variável img e atribui essa referência à variável pixel. 
pixel.setRed(255) // Instrui o computador a ajustar para 255 o nível de vermelho para o pixel em questão.
print(img);

    pixel.setRed(numero) // Ajusta o nível de vermelho do pixel para o número armazenado na variável numero- 0/255.
    pixel.setGreen(numero) 
    pixel.setBlue(numero) 
*/ 

img = new SimpleImage ("img/circulo.bmp");
img.setZoom(20);
pixel = img.getPixel(4,0);
pixel.setRed(0);
pixel.setGreen(255);
pixel.setBlue(0);
print(img); 



