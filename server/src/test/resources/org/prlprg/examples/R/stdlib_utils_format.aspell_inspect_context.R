#? stdlib
`format.aspell_inspect_context` <- function (x, ..., byfile = FALSE, indent = 2L) 
{
    if (!nrow(x)) 
        return(character())
    chunks <- if (byfile) {
        chunks <- split(x, x$File)
        Map(function(u, e) c(sprintf("File '%s':", u), sprintf("  Line %s: \"%s\", \"%s\", \"%s\"", 
            format(e$Line), gsub("\"", "\\\"", e$Left), e$Original, 
            gsub("\"", "\\\"", e$Right)), ""), names(chunks), 
            chunks)
    }
    else {
        p <- strrep(" ", indent)
        y <- sprintf("%s%s:%s:%s\n%s%s%s%s\n%s%s%s", p, x$File, 
            x$Line, x$Column, p, x$Left, x$Original, x$Right, 
            p, strrep(" ", as.integer(x$Column) - 1L), strrep("^", 
                nchar(x$Original)))
        chunks <- split(y, x$Original)
        Map(function(u, v) paste(c(paste("Word:", u), v), collapse = "\n"), 
            names(chunks), chunks)
    }
    unlist(chunks, use.names = FALSE)
}
