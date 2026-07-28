#? stdlib
`tidy_validate` <- function (f, tidy = "tidy") 
{
    z <- suppressWarnings(system2(tidy, c("-language en", "-qe", 
        Sys.getenv("_R_CHECK_RD_VALIDATE_RD2HTML_OPTS_", ""), 
        f), stdout = TRUE, stderr = TRUE))
    if (!length(z)) 
        return(NULL)
    z <- trimws(z, which = "right")
    s <- readLines(f, warn = FALSE)
    m <- regmatches(z, regexec("^line ([0-9]+) column ([0-9]+) - (.+)$", 
        z))
    m <- unique(do.call(rbind, m[lengths(m) == 4L]))
    p <- m[, 2L]
    concordance <- as.Rconcordance(grep("^<!-- concordance:", 
        s, value = TRUE))
    result <- cbind(line = p, col = m[, 3L], msg = m[, 4L], txt = s[as.numeric(p)])
    if (!is.null(concordance)) 
        result <- cbind(result, matchConcordance(p, concordance = concordance))
    result
}
