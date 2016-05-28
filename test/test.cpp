#include <ctest.h>
#include <testkv.h>

CTEST(solution_of_quadratic_equations, two_root)
{
	const int a = 1;
	const int b = -3;
	const int c = 2;
   
    float x1, x2;
	const int result = testkv(a, b, c, &x1, &x2);
	
	const float expected_x1 = 1, expected_x2 = 2;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
    ASSERT_EQUAL(FOUND_2_ROOT, result);
}

CTEST(solution_of_quadratic_equations, one_root)
{
    const int a = 1;
    const int b = -4;
    const int c = 4;

    float x1, x2;
    const int result = testkv(a, b, c, &x1, &x2);

    const float expected_x2 = 2;

    ASSERT_DBL_NEAR(expected_x2, x2);
    ASSERT_EQUAL(FOUND_1_ROOT, result);
}

CTEST(solution_of_quadratic_equations, no_root)
{
    const int a = 15;
    const int b = 1;
    const int c = 9;

    float x1, x2;
    const int result = testkv(a, b, c, &x1, &x2);

    ASSERT_EQUAL(ROOT_NOT_FOUND, result);
}

CTEST(solution_of_quadratic_equations, the_coefficients_are_not_correct)
{
   
    const int a = 0;
    const int b = -2;
    const int c = 10;
    
    float x1, x2;
    const int result = testkv(a, b, c, &x1, &x2);
   
    ASSERT_EQUAL(INVALID_ARGUMENTS, result);
}
