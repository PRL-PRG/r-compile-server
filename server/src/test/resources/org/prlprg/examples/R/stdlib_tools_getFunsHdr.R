#? stdlib
`getFunsHdr` <- function (fpath, lines) 
{
    if (missing(lines)) {
        lines <- readLines(fpath)
        name <- basename(fpath)
    }
    else name <- NULL
    lines <- ifelse(grepl("^#", lines), lines, gsub(".*\\s*NORET\\s*", 
        " ", lines))
    lines <- lines[!grepl("^#\\s*error", lines)]
    lines <- ccE(lines)
    lines <- dropBraces(lines)
    lines <- gsub("\\s*(const|extern|long|unsigned)\\s*", "", 
        lines)
    lines <- sub("^\\s*(\\w*[(])", "void \\1", lines)
    lines <- gsub("\\(\\s*\\*\\s*(\\w+)\\s*\\)", "(\\1)", lines)
    funcRegexp <- "^\\s*(?:(?:inline|static)\\s+){0,2}(?!else|typedef|return)\\w+\\s*\\*?\\s*\\(?(\\w+)\\)?\\s*\\([^0]+\\)?\\s*;?"
    m <- gregexec(funcRegexp, lines, perl = TRUE)
    v <- regmatches(lines, m)
    val <- sapply(v[lengths(v) > 0], `[[`, 2)
    val <- unique(as.character(val))
    val <- val[!(val %in% letters | val %in% LETTERS)]
    val <- val[!grepl("_t$", val)]
    val <- val[!grepl("user_(unif|norm)", val)]
    val <- val[!grepl("Quartz|Win32", val)]
    val
}
