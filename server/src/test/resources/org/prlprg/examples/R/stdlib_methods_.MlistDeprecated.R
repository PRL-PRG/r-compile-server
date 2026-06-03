#? stdlib
`.MlistDeprecated` <- function (this = "<default>", instead) 
{
    if (is.character(this)) {
        if (exists(this, envir = .MlistDepTable, inherits = FALSE)) 
            return()
        else assign(this, TRUE, envir = .MlistDepTable)
    }
    base::.Deprecated(msg = paste0(if (missing(this)) 
        "Use of the \"MethodsList\" meta data objects is deprecated."
    else if (is.character(this)) 
        gettextf("%s, along with other use of the \"MethodsList\" metadata objects, is deprecated.", 
            dQuote(this))
    else gettextf("In %s: use of \"MethodsList\" metadata objects is deprecated.", 
        deparse(this)), "\n ", if (!missing(instead)) 
        gettextf("Use %s instead. ", dQuote(instead)), "See ?MethodsList. (This warning is shown once per session.)"))
}
