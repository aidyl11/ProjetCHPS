#ifndef _MANDEL_
#define _MANDEL_

#include <iostream>
#include <iomanip>

#include <gmp.h>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

#include "color.hpp"

class Mandelbrot
{
	private:
		mpf_t pos_x, pos_y;
		mpf_t width,height;
		int im_width,im_height;
		int surEchantillonage;
	
	public:
		Mandelbrot(mpf_t x, mpf_t y, mpf_t w, mpf_t h, int im_w, int im_h, int supSample);
		~Mandelbrot();
		void draw(int iterations);
		bool isNice();
};

#endif