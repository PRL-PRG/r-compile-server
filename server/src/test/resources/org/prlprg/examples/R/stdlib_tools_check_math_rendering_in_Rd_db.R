#? stdlib
`check_math_rendering_in_Rd_db` <- function (db, eq = NULL, katex = .make_KaTeX_checker()) 
{
    if (is.null(eq)) 
        eq <- .Rd_get_equations_from_Rd_db(db)
    out <- matrix(character(), 0L, 3L)
    results <- lapply(eq[, 3L], katex)
    msg <- vapply(results, `[[`, "", "error")
    ind <- nzchar(msg)
    if (any(ind)) {
        msg <- msg[ind]
        msg <- sub("^KaTeX parse error: (.*) at position.*:", 
            "\\1 in", msg)
        msg <- sub("^KaTeX parse error: ", "", msg)
        msg <- gsub("…", "...", msg)
        msg <- gsub("̲", "", msg)
        l1 <- eq[ind, 5L]
        l2 <- eq[ind, 6L]
        tst <- (l1 == l2)
        pos <- is.na(tst)
        l1[pos] <- ""
        pos <- which(!pos)
        l1[pos] <- paste0(":", l1[pos])
        pos <- which(!tst[pos])
        l1[pos] <- paste0(l1[pos], "-", l2[pos])
        out <- cbind(eq[ind, 1L], l1, msg)
    }
    colnames(out) <- c("path", "pos", "msg")
    out
}
