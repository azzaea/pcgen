// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gemmaMVLMM
bool gemmaMVLMM(CharacterVector genoinputs, std::string kfile, NumericVector colnums, double miss, double maf, double r2, double hwe, bool notsnp, int lmmMode, std::string gxe, std::string outprefix, std::string outdir, bool license);
RcppExport SEXP _pcgen2_gemmaMVLMM(SEXP genoinputsSEXP, SEXP kfileSEXP, SEXP colnumsSEXP, SEXP missSEXP, SEXP mafSEXP, SEXP r2SEXP, SEXP hweSEXP, SEXP notsnpSEXP, SEXP lmmModeSEXP, SEXP gxeSEXP, SEXP outprefixSEXP, SEXP outdirSEXP, SEXP licenseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type genoinputs(genoinputsSEXP);
    Rcpp::traits::input_parameter< std::string >::type kfile(kfileSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type colnums(colnumsSEXP);
    Rcpp::traits::input_parameter< double >::type miss(missSEXP);
    Rcpp::traits::input_parameter< double >::type maf(mafSEXP);
    Rcpp::traits::input_parameter< double >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< double >::type hwe(hweSEXP);
    Rcpp::traits::input_parameter< bool >::type notsnp(notsnpSEXP);
    Rcpp::traits::input_parameter< int >::type lmmMode(lmmModeSEXP);
    Rcpp::traits::input_parameter< std::string >::type gxe(gxeSEXP);
    Rcpp::traits::input_parameter< std::string >::type outprefix(outprefixSEXP);
    Rcpp::traits::input_parameter< std::string >::type outdir(outdirSEXP);
    Rcpp::traits::input_parameter< bool >::type license(licenseSEXP);
    rcpp_result_gen = Rcpp::wrap(gemmaMVLMM(genoinputs, kfile, colnums, miss, maf, r2, hwe, notsnp, lmmMode, gxe, outprefix, outdir, license));
    return rcpp_result_gen;
END_RCPP
}
// gemmaGK
bool gemmaGK(CharacterVector genoinputs, int gk, double miss, double maf, double r2, double hwe, bool notsnp, std::string gxe, std::string outprefix, std::string outdir, bool license);
RcppExport SEXP _pcgen2_gemmaGK(SEXP genoinputsSEXP, SEXP gkSEXP, SEXP missSEXP, SEXP mafSEXP, SEXP r2SEXP, SEXP hweSEXP, SEXP notsnpSEXP, SEXP gxeSEXP, SEXP outprefixSEXP, SEXP outdirSEXP, SEXP licenseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type genoinputs(genoinputsSEXP);
    Rcpp::traits::input_parameter< int >::type gk(gkSEXP);
    Rcpp::traits::input_parameter< double >::type miss(missSEXP);
    Rcpp::traits::input_parameter< double >::type maf(mafSEXP);
    Rcpp::traits::input_parameter< double >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< double >::type hwe(hweSEXP);
    Rcpp::traits::input_parameter< bool >::type notsnp(notsnpSEXP);
    Rcpp::traits::input_parameter< std::string >::type gxe(gxeSEXP);
    Rcpp::traits::input_parameter< std::string >::type outprefix(outprefixSEXP);
    Rcpp::traits::input_parameter< std::string >::type outdir(outdirSEXP);
    Rcpp::traits::input_parameter< bool >::type license(licenseSEXP);
    rcpp_result_gen = Rcpp::wrap(gemmaGK(genoinputs, gk, miss, maf, r2, hwe, notsnp, gxe, outprefix, outdir, license));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pcgen2_gemmaMVLMM", (DL_FUNC) &_pcgen2_gemmaMVLMM, 13},
    {"_pcgen2_gemmaGK", (DL_FUNC) &_pcgen2_gemmaGK, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_pcgen2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
