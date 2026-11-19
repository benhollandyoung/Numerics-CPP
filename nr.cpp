#include <iostream>
#include <cstdlib>

struct NR_return {
    double root;
    int iterations;
    bool converged;
};

NR_return nr(double x0, 
        const std::function<double(double)>& f,
        const std::function<double(double)>& df,
        double f_threshold,
        double df_threshold,
        int n_max 
);


int main() {
    std::cout << "Hello, world!" << std::endl;


    auto f = [](double x) {
        return x*x-4;
    };

    auto df = [](double x) {
        return 2*x;
    };

    NR_return output = nr(-0.2, f, df, 1e-5, 1e-5, 1000);

    if (output.converged == true) {
        std::cout << "Converged!\n";
        std::cout << "With " << output.iterations << " iterations, to " << output.root << std::endl;
    } else {
        std::cout << "Did not converge." << std::endl;
    }



    return 0;
}




NR_return nr(double x0, 
        const std::function<double(double)>& f,
        const std::function<double(double)>& df,
        double f_threshold,
        double df_threshold,
        int n_max 
) {

    int counter{0};
    double x{x0};

    while (counter < n_max && abs(f(x)) > f_threshold && abs(df(x)) > df_threshold) {
        x -= f(x)/df(x);
        counter++;
    }

    NR_return return_value;
    return_value.converged = (f(x) <= f_threshold);
    return_value.iterations = counter;
    return_value.root = x;
    return return_value;





}
