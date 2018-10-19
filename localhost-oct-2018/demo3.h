// This is a comment
void void_fn();
char char_fn();
// This is also a comment
int arg_fn(int x);
float two_arg_gn(double x, double y);

// Struct types
vector2 struct_fn(vector2 p1, vector2 p2);

// Pointers are also useful to parse
char *ptr_fn(int *x, float* y);

GLFWAPI GLFWwindow* glfwCreateWindow(int width, int height, const char* title, GLFWmonitor* monitor, GLFWwindow* share);

// C Macros

#define MACRO 12345

// C function-like macros

#define FN_MACRO(a, b) a + b
#define FN_MULTILINE_MACRO(a, b) {\\
  foo(a, b);\\
}
