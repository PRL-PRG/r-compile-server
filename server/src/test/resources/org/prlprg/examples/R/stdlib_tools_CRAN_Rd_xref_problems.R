#? stdlib
`CRAN_Rd_xref_problems` <- function () 
{
    y <- list()
    db <- CRAN_Rd_xref_db_with_expansions()
    db <- db[nzchar(db[, "T_Package"]), , drop = FALSE]
    db <- cbind(db, T_ID = .Rd_object_id(db[, "T_Package"], db[, 
        "T_File"]))
    current <- sub("_.*", "", rownames(CRAN_current_db()))
    db1 <- db[!is.na(match(db[, "T_Package"], current)), , drop = FALSE]
    y$broken_xrefs_to_current_CRAN_packages <- db1[is.na(match(db1[, 
        "T_ID"], CRAN_Rd_xref_available_target_ids())), , drop = FALSE]
    repos <- .get_standard_repository_URLs()
    archived <- setdiff(names(CRAN_archive_db()), c(rownames(utils::available.packages(filters = list(), 
        repos = repos)), unlist(.get_standard_package_names(), 
        use.names = FALSE)))
    y$xrefs_likely_to_archived_CRAN_packages <- db[!is.na(match(db[, 
        "T_Package"], archived)), , drop = FALSE]
    y
}
