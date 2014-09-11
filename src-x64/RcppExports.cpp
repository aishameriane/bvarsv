// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mvndrawC
arma::colvec mvndrawC(arma::colvec mu, arma::mat sig);
RcppExport SEXP bvarsv_mvndrawC(SEXP muSEXP, SEXP sigSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::colvec >::type mu(muSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type sig(sigSEXP );
        arma::colvec __result = mvndrawC(mu, sig);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// carterkohn
List carterkohn(arma::mat y, arma::mat Z, arma::mat Ht, arma::mat Qt, double m, double p, double t, arma::colvec B0, arma::mat V0);
RcppExport SEXP bvarsv_carterkohn(SEXP ySEXP, SEXP ZSEXP, SEXP HtSEXP, SEXP QtSEXP, SEXP mSEXP, SEXP pSEXP, SEXP tSEXP, SEXP B0SEXP, SEXP V0SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Ht(HtSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Qt(QtSEXP );
        Rcpp::traits::input_parameter< double >::type m(mSEXP );
        Rcpp::traits::input_parameter< double >::type p(pSEXP );
        Rcpp::traits::input_parameter< double >::type t(tSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type B0(B0SEXP );
        Rcpp::traits::input_parameter< arma::mat >::type V0(V0SEXP );
        List __result = carterkohn(y, Z, Ht, Qt, m, p, t, B0, V0);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// alphahelper
arma::mat alphahelper(arma::mat y, arma::mat Z, arma::mat Btdraw);
RcppExport SEXP bvarsv_alphahelper(SEXP ySEXP, SEXP ZSEXP, SEXP BtdrawSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Btdraw(BtdrawSEXP );
        arma::mat __result = alphahelper(y, Z, Btdraw);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sigmahelper1
arma::mat sigmahelper1(arma::mat Atdraw, double M);
RcppExport SEXP bvarsv_sigmahelper1(SEXP AtdrawSEXP, SEXP MSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type Atdraw(AtdrawSEXP );
        Rcpp::traits::input_parameter< double >::type M(MSEXP );
        arma::mat __result = sigmahelper1(Atdraw, M);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sigmahelper2
List sigmahelper2(arma::mat capAt, arma::mat yhat, arma::colvec qs, arma::colvec ms, arma::colvec u2s, arma::mat Sigtdraw, arma::mat Zs, arma::mat Wdraw, arma::colvec sigma_prmean, arma::mat sigma_prvar);
RcppExport SEXP bvarsv_sigmahelper2(SEXP capAtSEXP, SEXP yhatSEXP, SEXP qsSEXP, SEXP msSEXP, SEXP u2sSEXP, SEXP SigtdrawSEXP, SEXP ZsSEXP, SEXP WdrawSEXP, SEXP sigma_prmeanSEXP, SEXP sigma_prvarSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type capAt(capAtSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type yhat(yhatSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type qs(qsSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type ms(msSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type u2s(u2sSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Sigtdraw(SigtdrawSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Zs(ZsSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Wdraw(WdrawSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type sigma_prmean(sigma_prmeanSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type sigma_prvar(sigma_prvarSEXP );
        List __result = sigmahelper2(capAt, yhat, qs, ms, u2s, Sigtdraw, Zs, Wdraw, sigma_prmean, sigma_prvar);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sigmahelper3
List sigmahelper3(arma::mat capAt, arma::mat sigt);
RcppExport SEXP bvarsv_sigmahelper3(SEXP capAtSEXP, SEXP sigtSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type capAt(capAtSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type sigt(sigtSEXP );
        List __result = sigmahelper3(capAt, sigt);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getvc
List getvc(arma::mat Ht);
RcppExport SEXP bvarsv_getvc(SEXP HtSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type Ht(HtSEXP );
        List __result = getvc(Ht);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// makeregs_fcC
arma::mat makeregs_fcC(arma::mat ydat, double p);
RcppExport SEXP bvarsv_makeregs_fcC(SEXP ydatSEXP, SEXP pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type ydat(ydatSEXP );
        Rcpp::traits::input_parameter< double >::type p(pSEXP );
        arma::mat __result = makeregs_fcC(ydat, p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// mz
arma::colvec mz(double n);
RcppExport SEXP bvarsv_mz(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        arma::colvec __result = mz(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// meye
arma::mat meye(double n);
RcppExport SEXP bvarsv_meye(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        arma::mat __result = meye(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vechC
arma::colvec vechC(arma::mat x);
RcppExport SEXP bvarsv_vechC(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        arma::colvec __result = vechC(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getfcsts
List getfcsts(arma::colvec Bt0, arma::colvec At0, arma::colvec Sigt0, arma::mat Qdraw, arma::mat Sdraw, arma::mat Wdraw, arma::mat ydat, double nf, double p);
RcppExport SEXP bvarsv_getfcsts(SEXP Bt0SEXP, SEXP At0SEXP, SEXP Sigt0SEXP, SEXP QdrawSEXP, SEXP SdrawSEXP, SEXP WdrawSEXP, SEXP ydatSEXP, SEXP nfSEXP, SEXP pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::colvec >::type Bt0(Bt0SEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type At0(At0SEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type Sigt0(Sigt0SEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Qdraw(QdrawSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Sdraw(SdrawSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type Wdraw(WdrawSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type ydat(ydatSEXP );
        Rcpp::traits::input_parameter< double >::type nf(nfSEXP );
        Rcpp::traits::input_parameter< double >::type p(pSEXP );
        List __result = getfcsts(Bt0, At0, Sigt0, Qdraw, Sdraw, Wdraw, ydat, nf, p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// wishdrawC
arma::mat wishdrawC(arma::mat h, double n);
RcppExport SEXP bvarsv_wishdrawC(SEXP hSEXP, SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type h(hSEXP );
        Rcpp::traits::input_parameter< double >::type n(nSEXP );
        arma::mat __result = wishdrawC(h, n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// makeregs2_fcC
arma::rowvec makeregs2_fcC(arma::mat dat, double p);
RcppExport SEXP bvarsv_makeregs2_fcC(SEXP datSEXP, SEXP pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type dat(datSEXP );
        Rcpp::traits::input_parameter< double >::type p(pSEXP );
        arma::rowvec __result = makeregs2_fcC(dat, p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// matmult
arma::mat matmult(arma::mat x, double nt);
RcppExport SEXP bvarsv_matmult(SEXP xSEXP, SEXP ntSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< double >::type nt(ntSEXP );
        arma::mat __result = matmult(x, nt);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// varfcst
List varfcst(arma::mat b, arma::mat sig, arma::mat y, double nf);
RcppExport SEXP bvarsv_varfcst(SEXP bSEXP, SEXP sigSEXP, SEXP ySEXP, SEXP nfSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type b(bSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type sig(sigSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< double >::type nf(nfSEXP );
        List __result = varfcst(b, sig, y, nf);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
