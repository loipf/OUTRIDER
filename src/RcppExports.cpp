// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// predictMatY
arma::mat predictMatY(arma::mat x, arma::mat E, arma::mat D, arma::vec b);
RcppExport SEXP _OUTRIDER_predictMatY(SEXP xSEXP, SEXP ESEXP, SEXP DSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(predictMatY(x, E, D, b));
    return rcpp_result_gen;
END_RCPP
}
// predictMatC
arma::mat predictMatC(arma::mat x, arma::mat E, arma::mat D, arma::vec b, arma::vec sf);
RcppExport SEXP _OUTRIDER_predictMatC(SEXP xSEXP, SEXP ESEXP, SEXP DSEXP, SEXP bSEXP, SEXP sfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type E(ESEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    rcpp_result_gen = Rcpp::wrap(predictMatC(x, E, D, b, sf));
    return rcpp_result_gen;
END_RCPP
}
// truncLogLiklihoodD
double truncLogLiklihoodD(arma::vec par, arma::mat H, arma::vec k, arma::vec sf, arma::vec exclusionMask, double theta, double minMu);
RcppExport SEXP _OUTRIDER_truncLogLiklihoodD(SEXP parSEXP, SEXP HSEXP, SEXP kSEXP, SEXP sfSEXP, SEXP exclusionMaskSEXP, SEXP thetaSEXP, SEXP minMuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type minMu(minMuSEXP);
    rcpp_result_gen = Rcpp::wrap(truncLogLiklihoodD(par, H, k, sf, exclusionMask, theta, minMu));
    return rcpp_result_gen;
END_RCPP
}
// gradientD
arma::vec gradientD(arma::vec par, arma::mat H, arma::vec k, arma::vec sf, arma::vec exclusionMask, double theta, double minMu);
RcppExport SEXP _OUTRIDER_gradientD(SEXP parSEXP, SEXP HSEXP, SEXP kSEXP, SEXP sfSEXP, SEXP exclusionMaskSEXP, SEXP thetaSEXP, SEXP minMuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type minMu(minMuSEXP);
    rcpp_result_gen = Rcpp::wrap(gradientD(par, H, k, sf, exclusionMask, theta, minMu));
    return rcpp_result_gen;
END_RCPP
}
// truncLogLiklihoodE
double truncLogLiklihoodE(arma::vec e, arma::mat D, arma::mat k, arma::vec b, arma::mat x, arma::vec sf, arma::vec theta, arma::mat exclusionMask, double minMu);
RcppExport SEXP _OUTRIDER_truncLogLiklihoodE(SEXP eSEXP, SEXP DSEXP, SEXP kSEXP, SEXP bSEXP, SEXP xSEXP, SEXP sfSEXP, SEXP thetaSEXP, SEXP exclusionMaskSEXP, SEXP minMuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type e(eSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< double >::type minMu(minMuSEXP);
    rcpp_result_gen = Rcpp::wrap(truncLogLiklihoodE(e, D, k, b, x, sf, theta, exclusionMask, minMu));
    return rcpp_result_gen;
END_RCPP
}
// gradientE
arma::mat gradientE(arma::vec e, arma::mat D, arma::mat k, arma::vec b, arma::mat x, arma::vec sf, arma::vec theta, arma::mat exclusionMask, double minMu);
RcppExport SEXP _OUTRIDER_gradientE(SEXP eSEXP, SEXP DSEXP, SEXP kSEXP, SEXP bSEXP, SEXP xSEXP, SEXP sfSEXP, SEXP thetaSEXP, SEXP exclusionMaskSEXP, SEXP minMuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type e(eSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type exclusionMask(exclusionMaskSEXP);
    Rcpp::traits::input_parameter< double >::type minMu(minMuSEXP);
    rcpp_result_gen = Rcpp::wrap(gradientE(e, D, k, b, x, sf, theta, exclusionMask, minMu));
    return rcpp_result_gen;
END_RCPP
}
// truncLogLiklihood
SEXP truncLogLiklihood(arma::mat k, arma::mat x, arma::mat W, arma::vec b, arma::vec s, arma::vec theta);
RcppExport SEXP _OUTRIDER_truncLogLiklihood(SEXP kSEXP, SEXP xSEXP, SEXP WSEXP, SEXP bSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(truncLogLiklihood(k, x, W, b, s, theta));
    return rcpp_result_gen;
END_RCPP
}
// truncLogLiklihoodNonOutlier
SEXP truncLogLiklihoodNonOutlier(arma::mat k, arma::mat x, arma::mat W, arma::vec b, arma::vec s, arma::vec theta, arma::mat outlier);
RcppExport SEXP _OUTRIDER_truncLogLiklihoodNonOutlier(SEXP kSEXP, SEXP xSEXP, SEXP WSEXP, SEXP bSEXP, SEXP sSEXP, SEXP thetaSEXP, SEXP outlierSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type outlier(outlierSEXP);
    rcpp_result_gen = Rcpp::wrap(truncLogLiklihoodNonOutlier(k, x, W, b, s, theta, outlier));
    return rcpp_result_gen;
END_RCPP
}
// gradLogLiklihood
SEXP gradLogLiklihood(arma::mat k, arma::mat x, arma::mat W, arma::vec b, arma::vec s, arma::vec theta);
RcppExport SEXP _OUTRIDER_gradLogLiklihood(SEXP kSEXP, SEXP xSEXP, SEXP WSEXP, SEXP bSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(gradLogLiklihood(k, x, W, b, s, theta));
    return rcpp_result_gen;
END_RCPP
}
// gradLogLiklihoodNonOutlier
SEXP gradLogLiklihoodNonOutlier(arma::mat k, arma::mat x, arma::mat W, arma::vec b, arma::vec s, arma::vec theta, arma::mat outlier);
RcppExport SEXP _OUTRIDER_gradLogLiklihoodNonOutlier(SEXP kSEXP, SEXP xSEXP, SEXP WSEXP, SEXP bSEXP, SEXP sSEXP, SEXP thetaSEXP, SEXP outlierSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type outlier(outlierSEXP);
    rcpp_result_gen = Rcpp::wrap(gradLogLiklihoodNonOutlier(k, x, W, b, s, theta, outlier));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_OUTRIDER_predictMatY", (DL_FUNC) &_OUTRIDER_predictMatY, 4},
    {"_OUTRIDER_predictMatC", (DL_FUNC) &_OUTRIDER_predictMatC, 5},
    {"_OUTRIDER_truncLogLiklihoodD", (DL_FUNC) &_OUTRIDER_truncLogLiklihoodD, 7},
    {"_OUTRIDER_gradientD", (DL_FUNC) &_OUTRIDER_gradientD, 7},
    {"_OUTRIDER_truncLogLiklihoodE", (DL_FUNC) &_OUTRIDER_truncLogLiklihoodE, 9},
    {"_OUTRIDER_gradientE", (DL_FUNC) &_OUTRIDER_gradientE, 9},
    {"_OUTRIDER_truncLogLiklihood", (DL_FUNC) &_OUTRIDER_truncLogLiklihood, 6},
    {"_OUTRIDER_truncLogLiklihoodNonOutlier", (DL_FUNC) &_OUTRIDER_truncLogLiklihoodNonOutlier, 7},
    {"_OUTRIDER_gradLogLiklihood", (DL_FUNC) &_OUTRIDER_gradLogLiklihood, 6},
    {"_OUTRIDER_gradLogLiklihoodNonOutlier", (DL_FUNC) &_OUTRIDER_gradLogLiklihoodNonOutlier, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_OUTRIDER(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
