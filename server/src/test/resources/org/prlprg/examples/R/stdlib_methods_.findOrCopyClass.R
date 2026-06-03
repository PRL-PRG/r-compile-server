#? stdlib
`.findOrCopyClass` <- function (class, classDef, where, purpose) 
{
    whereIs <- findClass(classDef, where)
    if (length(whereIs)) 
        whereIs[[1L]]
    else {
        if (purpose != "subclass") 
            warning(gettextf("class %s is defined (with package slot %s) but no metadata object found to revise %s information---not imported?  Making a copy in package %s", 
                .dQ(class), sQuote(classDef@package), purpose, 
                sQuote(getPackageName(where, FALSE))), call. = FALSE, 
                domain = NA)
        where
    }
}
