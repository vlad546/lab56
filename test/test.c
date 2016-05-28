#include <ctest.h>
#include <calc.h>

CTEST(solution_of_quadratic_equations, two_root)
{
	const double a = 1;
	const double b = -3;
	const double c = 2;

    double x1 , x2 ;
    
	const int status = calc(a, b, c, &x1, &x2);
	
	const double expected_x1 = 1, expected_x2 = 2;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
    ASSERT_EQUAL(2, status);
}

CTEST(solution_of_quadratic_equations, one_root)
{
    const double a = 4;
    const double b = -12;
    const double c = 9;

    double x1 , x2 ;
    const int status = calc(a, b, c, &x1, &x2);

    const float expected_x1 = 1.5;

    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_EQUAL(1, status);
}

CTEST(solution_of_quadratic_equations, no_root)
{
    const int a = 15;
    const int b = 1;
    const int c = 9;

    float x1, x2;
    const int result = calc(a, b, c, &x1, &x2);

    const int ROOT_NOT_FOUND = 0;

    ASSERT_EQUAL(0, result);
}

CTEST(solution_of_quadratic_equations, the_coefficients_are_not_correct)
{

    const int a = 0;
    const int b = 1;
    const int c = 9;
    
    float x1, x2;
    const int result = calc(a, b, c, &x1, &x2);
    
    ASSERT_EQUAL(-1, result);
}
