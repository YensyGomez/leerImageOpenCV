#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    Mat grayImage; 
    // funcion que convierte una imagen a escala de grises
    
    cvtColor(image,grayImage, CV_BGR2GRAY);
    
    //crear el display y imshow arroja el resultado de la imagen
    namedWindow("Imagen RGB", WINDOW_AUTOSIZE );
    imshow("Imagen RGB", image);
    // display e imagen en escala de grises
    namedWindow("Image Gray", WINDOW_AUTOSIZE );
    imshow("Image Gray", grayImage);

    waitKey(0);

    return 0;
}