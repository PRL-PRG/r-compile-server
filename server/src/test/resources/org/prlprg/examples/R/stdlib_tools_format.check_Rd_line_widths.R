#? stdlib
`format.check_Rd_line_widths` <- function (x, ...) 
{
    if (!length(x)) 
        return(character())
    .truncate <- function(s) {
        ifelse(nchar(s) > 140L, paste(substr(s, 1, 140L), "... [TRUNCATED]"), 
            s)
    }
    limit <- attr(x, "limit")
    limit <- limit - 5L
    sections <- names(limit)
    .fmt <- function(nm) {
        y <- x[[nm]]
        c(sprintf("Rd file '%s':", nm), unlist(lapply(sections, 
            function(s) {
                lines <- y[[s]]
                if (!length(lines)) character() else {
                  c(sprintf("  \\%s lines wider than %d characters:", 
                    s, limit[s]), .truncate(lines))
                }
            }), use.names = FALSE), "")
    }
    as.character(unlist(lapply(names(x), .fmt)))
}
