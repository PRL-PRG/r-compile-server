#? stdlib
`packageDate` <- function (pkg, lib.loc = NULL, date.fields = c("Date", "Packaged", 
    "Date/Publication", "Built"), tryFormats = c("%Y-%m-%d", 
    "%Y/%m/%d", "%D", "%m/%d/%y"), desc = packageDescription(pkg, 
    lib.loc = lib.loc, fields = date.fields)) 
{
    useDesc <- is.list(desc) && length(names(desc)) >= 1
    if (!useDesc && is.na(desc)) 
        return(.Date(NA))
    for (fld in date.fields) {
        res <- if (useDesc) {
            r <- desc[[fld]]
            if (is.null(r)) 
                NA_character_
            else r
        }
        else packageDescription(pkg, lib.loc = lib.loc, fields = fld)
        res <- if (fld == "Built" && !is.na(res)) 
            tryCatch(asDateBuilt(res), error = function(e) {
                warning("Invalid \"Built\": ", conditionMessage(e))
                NA_character_
            })
        else as.Date(res, tryFormats = tryFormats, optional = TRUE)
        if (!is.na(res)) 
            break
    }
    if (is.na(res)) 
        res
    else structure(res, field = fld)
}
