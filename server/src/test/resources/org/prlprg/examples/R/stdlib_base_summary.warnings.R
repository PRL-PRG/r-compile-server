#? stdlib
`summary.warnings` <- function (object, ...) 
{
    msgs <- names(object)
    calls <- as.character(object)
    ss <- " |<:>| "
    c.m. <- paste(calls, msgs, sep = ss)
    if (length(i.no.call <- which(calls == "NULL"))) 
        c.m.[i.no.call] <- substr(c.m.[i.no.call], nchar(paste0("NULL", 
            ss)) + 1L, 100000L)
    i.uniq <- which(!duplicated(object, incomparables = FALSE))
    tm <- table(factor(c.m., levels = c.m.[i.uniq]), deparse.level = 0L)
    structure(object[i.uniq], counts = as.vector(tm), class = "summary.warnings")
}
