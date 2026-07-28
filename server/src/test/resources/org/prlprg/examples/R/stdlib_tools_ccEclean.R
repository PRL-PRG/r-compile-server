#? stdlib
`ccEclean` <- function (lines, pattern = "Rtmp") 
{
    fline <- grepl("^#", lines)
    keep <- grepl(pattern, lines[fline])
    len <- diff(c(which(fline), length(lines) + 1))
    keep <- unlist(mapply(rep, keep, len, USE.NAMES = FALSE))
    lines <- lines[keep & !fline]
    lines
}
