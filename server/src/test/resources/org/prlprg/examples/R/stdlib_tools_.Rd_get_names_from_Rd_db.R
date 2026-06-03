#? stdlib
`.Rd_get_names_from_Rd_db` <- function (db) 
{
    Rd_names <- lapply(db, .Rd_get_name)
    idx <- as.integer(lengths(Rd_names)) == 0L
    if (any(idx)) {
        Rd_paths <- names(db)
        if (is.null(Rd_paths)) {
            stop("cannot deal with Rd objects with missing/empty names")
        }
        else {
            stop(sprintf(ngettext(sum(idx), "missing/empty \\name field in Rd file\n%s", 
                "missing/empty \\name field in Rd files\n%s"), 
                paste0("  ", Rd_paths[idx], collapse = "\n")), 
                call. = FALSE, domain = NA)
        }
    }
    unlist(Rd_names)
}
