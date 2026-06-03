#? stdlib
`.get_BibTeX_errors_from_blg_file` <- function (con) 
{
    lines <- readLines(con, warn = FALSE)
    if (any(ind <- is.na(nchar(lines, allowNA = TRUE)))) 
        lines[ind] <- iconv(lines[ind], "", "", sub = "byte")
    really_has_errors <- (any(startsWith(lines, "---")) || regexpr("There (was|were) ([0123456789]+) error messages?", 
        lines[length(lines)]) > -1L)
    pos <- grep("^(Warning|You|\\(There)", lines)
    if (!really_has_errors || !length(pos)) 
        return(character())
    ind <- seq.int(from = 3L, length.out = pos[1L] - 3L)
    lines[ind]
}
