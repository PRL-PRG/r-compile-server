#? stdlib
`write_texts_to_dir` <- function (lst, dir, verbose = FALSE) 
{
    dir.create(dir, showWarnings = FALSE, recursive = FALSE)
    Map(function(m, s) {
        if (verbose) 
            message(sprintf("Processing %s ...", m))
        writeLines(paste(s, collapse = "\n\n"), file.path(dir, 
            sprintf("%s.txt", m)))
    }, names(lst), lst)
    invisible()
}
