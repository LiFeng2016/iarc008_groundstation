#include "example_ceres.h"

void example_ceres(int argc, char** argv)
{
    google::InitGoogleLogging(argv[0]);
    // The variable to solve for with its initial value. It will be
    // mutated in place by the solver.
    double x = 0.5;
    const double initial_x = x;
    // Build the problem.
    Problem problem;
    // Set up the only cost function (also known as residual). This uses
    // auto-differentiation to obtain the derivative (jacobian).
    CostFunction* cost_function = new AutoDiffCostFunction<CostFunctor, 1, 1>(new CostFunctor);
    problem.AddResidualBlock(cost_function, NULL, &x);
    // Run the solver!
    Solver::Options options;
    options.minimizer_progress_to_stdout = true;
    Solver::Summary summary;
    Solve(options, &problem, &summary);
    std::cout << summary.BriefReport() << "\n";
    std::cout << "x : " << initial_x << " -> " << x << "\n";
}
