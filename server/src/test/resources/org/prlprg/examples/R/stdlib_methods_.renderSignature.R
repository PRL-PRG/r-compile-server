#? stdlib
`.renderSignature` <- function (f, signature) 
{
    nm <- names(signature)
    nm[nzchar(nm)] <- paste0(nm[nzchar(nm)], "=")
    msig <- paste0(nm, "\"", as.vector(signature), "\"")
    msig <- paste(msig, collapse = ",")
    gettextf("in method for %s with signature %s: ", sQuote(f), 
        sQuote(msig))
}
