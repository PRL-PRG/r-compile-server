#? stdlib
`base_rdxrefs_db` <- function () 
{
    packages <- .get_standard_package_names()$base
    rdxrefs <- lapply(packages, function(p) {
        db <- Rd_db(p, lib.loc = .Library)
        rdxrefs <- lapply(db, .Rd_get_xrefs)
        rdxrefs <- cbind(do.call(rbind, rdxrefs), Source = rep.int(names(rdxrefs), 
            vapply(rdxrefs, NROW, 0L)))
        rdxrefs
    })
    names(rdxrefs) <- packages
    rdxrefs
}
