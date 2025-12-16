#? stdlib
`.persons_from_metadata` <- function (dir) 
{
    meta <- .get_package_metadata(dir)
    if (!is.na(aar <- meta["Authors@R"])) {
        aar <- tryCatch(utils:::.read_authors_at_R_field(aar), 
            error = identity)
        if (inherits(aar, "person")) 
            return(aar)
    }
    NULL
}
