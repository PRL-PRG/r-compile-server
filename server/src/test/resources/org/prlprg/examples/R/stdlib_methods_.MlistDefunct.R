#? stdlib
`.MlistDefunct` <- function (this = "<default>", instead) 
{
    base::.Defunct(msg = paste0(if (missing(this)) 
        "Use of the \"MethodsList\" meta data objects is defunct."
    else if (is.character(this)) 
        gettextf("%s, along with other use of the \"MethodsList\" metadata objects, is defunct.", 
            dQuote(this))
    else gettextf("In %s: use of \"MethodsList\" metadata objects is defunct.", 
        deparse(this)), " ", if (!missing(instead)) 
        gettextf("Use %s instead. ", dQuote(instead)), "See ?MethodsList."))
}
