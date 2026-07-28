#? stdlib
`tidy_validate_files` <- function (files, verbose = interactive()) 
{
    tidy_validate_db(lapply(files, function(f) {
        if (verbose) 
            message(sprintf("Processing %s ...", f))
        tidy_validate(f)
    }), files)
}
