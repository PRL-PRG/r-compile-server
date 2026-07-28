#? stdlib
`followConcordance` <- function (concordance, prevConcordance) 
{
    if (!is.null(prevConcordance)) {
        curLines <- concordance$srcLine
        curFile <- rep_len(concordance$srcFile, length(curLines))
        curOfs <- concordance$offset
        prevLines <- prevConcordance$srcLine
        prevFile <- rep_len(prevConcordance$srcFile, length(prevLines))
        prevOfs <- prevConcordance$offset
        if (prevOfs) {
            prevLines <- c(rep(NA_integer_, prevOfs), prevLines)
            prevFile <- c(rep(NA_character_, prevOfs), prevFile)
            prevOfs <- 0
        }
        n0 <- max(curLines)
        n1 <- length(prevLines)
        if (n1 < n0) {
            prevLines <- c(prevLines, rep(NA_integer_, n0 - n1))
            prevFile <- c(prevFile, rep(NA_character_, n0 - n1))
        }
        new <- is.na(prevLines[curLines])
        concordance$srcFile <- ifelse(new, curFile, prevFile[curLines])
        concordance$srcLine <- ifelse(new, curLines, prevLines[curLines])
    }
    concordance
}
