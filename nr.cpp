#include <iostream>
#include <string>
#include <functional>
#include <cmath>


enum class Outcome {
    success,
    maxed,
    tooflat,
};

struct NR_return {
    double root;
    int iterations;
    
    std::string outcome_description() const {
        switch (outcome) {
            case Outcome::success:
                return "Success";
            case Outcome::maxed:
                return "Maxed out";
            case Outcome::tooflat:
                return "Too flat";
            default:
                return "Unknown outcome";
        }
    }

    Outcome outcome;


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

    double f_t;
    double df_t;
    int n_m;
    double x0;

    std::cout << "F threshold?\n";
    std::cin >> f_t;

    std::cout << "DF threshold?\n";
    std::cin >> df_t;

    std::cout << "N_max threshold?\n";
    std::cin >> n_m;

    std::cout << "X0 starter?\n";
    std::cin >> x0;

    auto f = [](double x) {
        return x*x-2;
    };

    auto df = [](double x) {
        return 2*x;
    };

    NR_return output = nr(x0, f, df, f_t, df_t, n_m);

    std::cout << "Iterations: " << output.iterations << "\n";
    std::cout << "Root: " << output.root << "\n";
    std::cout << "Outcome: " << output.outcome_description() << std::endl;
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

    while (counter < n_max && std::abs(f(x)) > f_threshold && std::abs(df(x)) > df_threshold) {
        x -= f(x)/df(x);
        counter++;
    }

    NR_return return_value;
    return_value.iterations = counter;
    return_value.root = x;
    
    if (std::abs(f(x)) <= f_threshold) {
        return_value.outcome = Outcome::success;
    } else if (counter == n_max) {
        return_value.outcome = Outcome::maxed;
    } else {
        return_value.outcome = Outcome::tooflat;
    }


    return return_value;





}
