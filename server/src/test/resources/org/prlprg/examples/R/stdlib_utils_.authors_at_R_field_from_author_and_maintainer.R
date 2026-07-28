#? stdlib
`.authors_at_R_field_from_author_and_maintainer` <- function (a, m) 
{
    p <- as.person(a)
    r <- p[, "role"]
    e <- p[, "email"]
    i <- (lengths(lapply(r, intersect, "aut")) > 0L)
    if (!any(i)) 
        p[, "role"] <- r <- lapply(r, union, "aut")
    i <- (lengths(lapply(r, intersect, "cre")) > 0L)
    j <- (lengths(e) > 0L)
    if (any(i & j)) 
        return(structure(p, case = 1))
    s <- format(p, include = c("given", "family"))
    k <- which(nzchar(s) & startsWith(tolower(m), tolower(s)))
    if (length(k)) {
        k <- k[1L]
        if (!i[k]) 
            p[[k, "role"]] <- c(r[[k]], "cre")
        if (!j[k]) 
            p[[k, "email"]] <- tolower(sub(".*<(.*)>.*", "\\1", 
                m))
        return(structure(p, case = 2))
    }
    m <- as.person(m)
    m$role <- "cre"
    structure(c(p, m), case = 3)
}
