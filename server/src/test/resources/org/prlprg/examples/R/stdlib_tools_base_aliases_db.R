#? stdlib
`base_aliases_db` <- function () 
{
    packages <- .get_standard_package_names()$base
    aliases <- lapply(packages, function(p) {
        db <- Rd_db(p, lib.loc = .Library)
        aliases <- lapply(db, .Rd_get_metadata, "alias")
        aliases
    })
    names(aliases) <- packages
    aliases
}
