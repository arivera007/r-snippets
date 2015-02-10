// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// randperm
NumericVector randperm(const NumericVector x);
RcppExport SEXP zero323_randperm(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP );
        NumericVector __result = randperm(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sample2
NumericVector sample2(const NumericVector x, int k);
RcppExport SEXP zero323_sample2(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        NumericVector __result = sample2(x, k);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sortedmerge
NumericVector sortedmerge(const NumericVector first, const NumericVector second);
RcppExport SEXP zero323_sortedmerge(SEXP firstSEXP, SEXP secondSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const NumericVector >::type first(firstSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type second(secondSEXP );
        NumericVector __result = sortedmerge(first, second);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
