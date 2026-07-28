#? stdlib
`getVigDepMtrx` <- function (vigDeps) 
{
    if (length(vigDeps)) {
        z <- unlist(strsplit(vigDeps, ",", fixed = TRUE))
        z <- sub("^[[:space:]]*(.*)", "\\1", z)
        z <- sub("(.*)[[:space:]]*$", "\\1", z)
        pat <- "^([^\\([:space:]]+)[[:space:]]*\\(([^\\)]+)\\).*"
        depMtrx <- cbind(sub(pat, "\\1", z), sub(pat, "\\2", 
            z), NA)
        noversion <- depMtrx[, 1L] == depMtrx[, 2L]
        depMtrx[noversion, 2L] <- NA
        pat <- "[[:space:]]*([[<>=]+)[[:space:]]+(.*)"
        depMtrx[!noversion, 2:3] <- c(sub(pat, "\\1", depMtrx[!noversion, 
            2L]), sub(pat, "\\2", depMtrx[!noversion, 2L]))
        depMtrx
    }
    else NA
}
