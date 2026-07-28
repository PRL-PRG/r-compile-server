#? stdlib
`.build_Rd_xref_db` <- function (package, dir, lib.loc = NULL) 
{
    db <- if (!missing(package)) 
        Rd_db(package, lib.loc = lib.loc)
    else Rd_db(dir = dir)
    lapply(db, .Rd_get_xrefs)
}
