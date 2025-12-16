#? stdlib
`CRAN_Rd_xref_reverse_dependencies` <- function (packages, db = NULL, details = FALSE) 
{
    if (is.null(db)) 
        db <- CRAN_Rd_xref_db_with_expansions()
    y <- split.data.frame(db, db[, "T_Package"])[packages]
    if (!details) 
        y <- lapply(y, function(e) unique(e[, "S_Package"]))
    y
}
