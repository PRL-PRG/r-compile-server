#? stdlib
`packageNotFoundError` <- function (package, lib.loc, call = NULL) 
{
    if (length(package) == 1L) 
        msg <- gettextf("there is no package called %s", sQuote(package))
    else msg <- paste0(ngettext(length(package), "there is no package called", 
        "there are no packages called"), " ", paste(sQuote(package), 
        collapse = ", "))
    errorCondition(msg, package = package, lib.loc = lib.loc, 
        call = call, class = "packageNotFoundError")
}
