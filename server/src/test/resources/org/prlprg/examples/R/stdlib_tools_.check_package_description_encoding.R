#? stdlib
`.check_package_description_encoding` <- function (dfile) 
{
    dfile <- file_path_as_absolute(dfile)
    db <- .read_description(dfile)
    out <- list()
    if (any(ind <- !.is_ASCII(names(db)))) 
        out$fields_with_non_ASCII_tags <- names(db)[ind]
    if ("Encoding" %notin% names(db)) {
        ind <- !.is_ASCII(db)
        if (any(ind)) {
            out$missing_encoding <- TRUE
            out$fields_with_non_ASCII_values <- names(db)[ind]
        }
    }
    else {
        enc <- db[["Encoding"]]
        if (enc %notin% c("latin1", "latin2", "UTF-8")) 
            out$non_portable_encoding <- enc
    }
    class(out) <- "check_package_description_encoding"
    out
}
