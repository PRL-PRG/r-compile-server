#? stdlib
`tidy_validate_package_Rd_files` <- function (package, dir, lib.loc = NULL, auto = NA, verbose = interactive()) 
{
    if (!missing(dir)) 
        return(tidy_validate_package_Rd_files_from_dir(dir, auto, 
            verbose))
    if (!length(package)) 
        return(NULL)
    n <- 3L
    one <- function(p) {
        if (verbose) 
            message(sprintf("* Package: %s", p))
        db <- Rd_db(p, lib.loc = lib.loc)
        files <- sub("[Rr]d$", "html", basename(names(db)))
        results <- lapply(files, function(f) {
            if (verbose) 
                message(sprintf("Processing %s ...", f))
            path <- sprintf("/library/%s/html/%s", p, f)
            tryCatch(tidy_validate_R_httpd_path(path), error = identity)
        })
        tidy_validate_db(results, sprintf("%s/%s", p, files))
    }
    do.call(rbind, lapply(package, one))
}
