// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// overlap
NumericVector overlap(IntegerMatrix rankMat);
RcppExport SEXP _SuperRanker_overlap(SEXP rankMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type rankMat(rankMatSEXP);
    rcpp_result_gen = Rcpp::wrap(overlap(rankMat));
    return rcpp_result_gen;
END_RCPP
}
// sracpp
NumericVector sracpp(IntegerMatrix rankMat, int maxlength, int B, IntegerVector cens, int type, NumericVector epsilon);
RcppExport SEXP _SuperRanker_sracpp(SEXP rankMatSEXP, SEXP maxlengthSEXP, SEXP BSEXP, SEXP censSEXP, SEXP typeSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type rankMat(rankMatSEXP);
    Rcpp::traits::input_parameter< int >::type maxlength(maxlengthSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cens(censSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(sracpp(rankMat, maxlength, B, cens, type, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// sracppfull
List sracppfull(IntegerMatrix rankMat, int type, NumericVector epsilon);
RcppExport SEXP _SuperRanker_sracppfull(SEXP rankMatSEXP, SEXP typeSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type rankMat(rankMatSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(sracppfull(rankMat, type, epsilon));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SuperRanker_overlap", (DL_FUNC) &_SuperRanker_overlap, 1},
    {"_SuperRanker_sracpp", (DL_FUNC) &_SuperRanker_sracpp, 6},
    {"_SuperRanker_sracppfull", (DL_FUNC) &_SuperRanker_sracppfull, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_SuperRanker(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
