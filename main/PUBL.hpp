#pragma once
#ifndef CLASS_MAIN___
#define CLASS_MAIN___


#include<glad/glad.h>
#include<GLFW/glfw3.h>



#include<iostream>
#include<string>
////////

#include"shader.h"
//#include"based_func.hpp"
//////
 #include "DEFINES.hpp"



//------
class main_
{
public:
	main_();
	~main_();
	//->
	void START();
	void _initGL_();
	void _render();
	void DELETE();



	/////////-----------------------------------------------

	int W_ = 1600; int H_ = 920;
	GLFWwindow* window;
	/////////-----------------------------------------------
	
protected:
private:




	
};
/////---globals___

#ifndef skip_funk

void resize(GLFWwindow*window, int w, int h);
void inpt(GLFWwindow* window);












#endif // !skip_funk
#endif CLASS_MAIN___
