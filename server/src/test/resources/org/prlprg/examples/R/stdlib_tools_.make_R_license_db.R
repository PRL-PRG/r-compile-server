#? stdlib
`.make_R_license_db` <- function (paths = NULL) 
{
    if (is.null(paths)) 
        paths <- unlist(strsplit(Sys.getenv("R_LICENSE_DB_PATHS"), 
            .Platform$path.sep, fixed = TRUE))
    paths <- c(paths, file.path(R.home("share"), "licenses", 
        "license.db"))
    ldb <- Reduce(function(u, v) merge(u, v, all = TRUE), lapply(unique(normalizePath(paths)), 
        read.dcf))
    ldb <- as.matrix(ldb)
    ldb[is.na(ldb)] <- ""
    ldb[ldb[, "FOSS"] == "yes", "Restricts_use"] <- "no"
    ldb <- data.frame(ldb, stringsAsFactors = FALSE)
    ldb$Labels <- R_license_db_labels(ldb)
    ldb[!duplicated(ldb$Labels), ]
}
