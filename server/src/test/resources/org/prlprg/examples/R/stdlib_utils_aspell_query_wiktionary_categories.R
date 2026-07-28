#? stdlib
`aspell_query_wiktionary_categories` <- function (x) 
{
    if (inherits(x, "aspell")) {
        x <- unique(x$Original)
    }
    verbose <- getOption("verbose")
    n <- length(x)
    k <- n%/%50L
    ind <- c(rep.int(seq_len(k), rep.int(50L, k)), rep.int(k + 
        1L, n%%50L))
    y <- lapply(split(x, ind), function(s) {
        q <- URLencode(sprintf("https://en.wiktionary.org/w/api.php?action=query&prop=categories&format=json&cllimit=20&titles=%s", 
            paste(s, collapse = "|")))
        if (verbose) 
            message(sprintf("Performing query %s", q))
        u <- ""
        v <- list()
        repeat {
            w <- jsonlite::fromJSON(paste0(q, u))
            v <- c(v, w$query$pages)
            if (is.null(u <- w$continue$clcontinue)) 
                break
            u <- paste0("&clcontinue=", URLencode(u))
        }
        v <- do.call(rbind, lapply(v, function(e) list(e$title, 
            e$categories$title)))
        lapply(split(v[, 2L], unlist(v[, 1L], use.names = FALSE)), 
            unlist, use.names = FALSE)
    })
    Reduce(c, y)[x]
}
