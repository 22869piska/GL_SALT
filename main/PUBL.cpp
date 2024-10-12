#include"PUBL.hpp"


main_::main_()
{
	std::cout << "MAIN_CLASS_CREATE\n";
}
main_::~main_()
{
	std::cout << "MAIN_CLASS_DELETE\n";
}
//--------->
void main_::START()
{
	_initGL_();
	_render();
	DELETE();
}
//============================================================//
void main_::_initGL_()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//-//
	 window = glfwCreateWindow(W_,H_,"OPEN_ASS",0,0);
	glfwMakeContextCurrent(window);
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
	std::cout << "Failed to initialize GLAD" << std::endl;
	
	}
	//-->
	glViewport(0, 0, W_, H_);
	glfwSetFramebufferSizeCallback(window, resize);



	//--//





}
//============================================================//
void main_::_render()
{
	std::cout << "START_WHILE\n";
	while (!glfwWindowShouldClose(window))
	{
		inpt(window);


		//next->


		glfwSwapInterval(60);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();
}
//============================================================//
void main_::DELETE()
{
	
}
//====================================//END_START_FN//========================================//

void resize(GLFWwindow* window, int w, int h)
{
	glViewport(0, 0, w, h);
	std::cout << w<<"::"<< h << '\n';
}

void inpt(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}
