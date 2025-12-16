#? stdlib
`check_doi_db` <- function (db, verbose = FALSE, parallel = FALSE, pool = NULL) 
{
    if (parallel && is.null(pool)) 
        pool <- curl::new_pool()
    .gather <- function(d = character(), p = list(), s = rep.int("", 
        length(d)), m = rep.int("", length(d))) {
        y <- list2DF(list(DOI = d, From = p, Status = s, Message = m))
        class(y) <- c("check_doi_db", "data.frame")
        y
    }
    .fetch_headers <- if (parallel) 
        function(urls, dois) .fetch_headers_via_curl(urls, verbose, 
            pool)
    else function(urls, dois) .fetch_headers_via_base(urls, verbose, 
        dois)
    .check <- function(h) {
        if (inherits(h, "error")) {
            s <- "Error"
            m <- sub("[[:space:]]*$", "", conditionMessage(h))
        }
        else {
            s <- as.character(attr(h, "status"))
            m <- table_of_HTTP_status_codes[s]
        }
        c(s, m)
    }
    bad <- .gather()
    if (!NROW(db)) 
        return(bad)
    if (inherits(db, "check_doi_db")) {
        parents <- db$From
        dois <- db$DOI
    }
    else {
        parents <- split(db$Parent, db$DOI)
        dois <- names(parents)
    }
    ind <- !grepl("/", dois, fixed = TRUE)
    if (any(ind)) {
        len <- sum(ind)
        bad <- rbind(bad, .gather(dois[ind], parents[ind], m = rep.int("Invalid DOI", 
            len)))
    }
    pos <- which(!ind)
    if (length(pos)) {
        doispos <- dois[pos]
        urlspos <- paste0("https://doi.org/api/handles/", vapply(doispos, 
            urlify_doi, ""))
        headers <- .fetch_headers(urlspos, doispos)
        results <- do.call(rbind, lapply(headers, .check))
        status <- results[, 1L]
        ind <- (status != "200")
        if (any(ind)) {
            pos <- pos[ind]
            s <- status[ind]
            m <- results[ind, 2L]
            m[is.na(m)] <- ""
            bad <- rbind(bad, .gather(dois[pos], parents[pos], 
                s, m))
        }
    }
    bad
}
