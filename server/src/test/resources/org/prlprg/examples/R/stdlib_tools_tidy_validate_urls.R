#? stdlib
`tidy_validate_urls` <- function (urls, verbose = interactive()) 
{
    destfile <- tempfile("tidy_validate")
    on.exit(unlink(destfile))
    tidy_validate_db(lapply(urls, function(u) {
        if (verbose) 
            message(sprintf("Processing %s ...", u))
        utils::download.file(u, destfile, quiet = TRUE)
        tidy_validate(destfile)
    }), urls)
}
