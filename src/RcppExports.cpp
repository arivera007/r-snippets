// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

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