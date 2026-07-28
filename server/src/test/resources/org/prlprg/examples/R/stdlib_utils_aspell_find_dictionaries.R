#? stdlib
`aspell_find_dictionaries` <- function (dictionaries, dirnames = character()) 
{
    dictionaries <- as.character(dictionaries)
    if (!(n <- length(dictionaries))) 
        return(character())
    dirnames <- c(file.path(R.home("share"), "dictionaries"), 
        dirnames)
    if (any(ind <- !endsWith(dictionaries, ".rds"))) 
        dictionaries[ind] <- sprintf("%s.rds", dictionaries[ind])
    out <- character(n)
    ind <- grepl(.Platform$file.sep, dictionaries, fixed = TRUE)
    if (length(pos <- which(ind))) {
        pos <- pos[file_test("-f", dictionaries[pos])]
        out[pos] <- normalizePath(dictionaries[pos], "/")
    }
    if (length(pos <- which(!ind))) {
        out[pos] <- find_files_in_directories(dictionaries[pos], 
            dirnames)
    }
    out
}
