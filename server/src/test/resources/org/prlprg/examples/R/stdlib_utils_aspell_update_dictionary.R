#? stdlib
`aspell_update_dictionary` <- function (dictionary, add = character()) 
{
    stopifnot(is.character(dictionary), length(dictionary) == 
        1L)
    if (!grepl(.Platform$file.sep, dictionary, fixed = TRUE)) {
        dictionary <- file.path(tools:::.R_top_srcdir_from_Rd(), 
            "share", "dictionaries", dictionary)
    }
    txt <- paste0(dictionary, ".txt")
    rds <- paste0(dictionary, ".rds")
    new <- unique(c(if (file.exists(txt)) readLines(txt, encoding = "UTF-8"), 
        enc2utf8(add)))
    new <- new[order(tolower(new), new)]
    new <- new[nzchar(new)]
    writeLines(new, txt, useBytes = TRUE)
    saveRDS(new, rds)
}
