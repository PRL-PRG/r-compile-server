#? stdlib
`addConcordance` <- function (conc, s) 
{
    prev <- stringToConcordance(s)
    if (!is.null(prev)) {
        conc$srcFile <- rep_len(conc$srcFile, length(conc$srcLine))
        i <- seq_along(prev$srcLine)
        conc$srcFile[prev$offset + i] <- prev$srcFile
        conc$srcLine[prev$offset + i] <- prev$srcLine
    }
    conc
}
