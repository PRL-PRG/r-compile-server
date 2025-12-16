#? stdlib
`matchConcordance` <- function (linenum, concordance) 
{
    if (!all(c("offset", "srcLine", "srcFile") %in% names(concordance))) 
        stop("concordance is not valid")
    linenum <- as.numeric(linenum)
    srcLines <- concordance$srcLine
    srcFile <- rep_len(concordance$srcFile, length(srcLines))
    offset <- concordance$offset
    result <- matrix(character(), length(linenum), 2, dimnames = list(NULL, 
        c("srcFile", "srcLine")))
    for (i in seq_along(linenum)) {
        if (linenum[i] <= concordance$offset) 
            result[i, ] <- c("", "")
        else result[i, ] <- c(srcFile[linenum[i] - offset], with(concordance, 
            srcLine[linenum[i] - offset]))
    }
    result
}

# Examples
