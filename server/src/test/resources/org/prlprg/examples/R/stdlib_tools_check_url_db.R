#? stdlib
`check_url_db` <- function (db, remote = TRUE, verbose = FALSE, parallel = FALSE, 
    pool = NULL) 
{
    use_curl <- !parallel && config_val_to_logical(Sys.getenv("_R_CHECK_URLS_USE_CURL_", 
        "TRUE")) && requireNamespace("curl", quietly = TRUE)
    if (parallel && is.null(pool)) 
        pool <- curl::new_pool()
    .gather <- function(u = character(), p = list(), s = rep.int("", 
        length(u)), m = rep.int("", length(u)), new = rep.int("", 
        length(u)), cran = rep.int("", length(u)), spaces = rep.int("", 
        length(u)), R = rep.int("", length(u))) {
        y <- list2DF(list(URL = u, From = p, Status = s, Message = m, 
            New = new, CRAN = cran, Spaces = spaces, R = R))
        class(y) <- c("check_url_db", "data.frame")
        y
    }
    .fetch_headers <- if (parallel) 
        function(urls) .fetch_headers_via_curl(urls, verbose, 
            pool)
    else function(urls) .fetch_headers_via_base(urls, verbose)
    .check_ftp <- function(u, h) {
        if (inherits(h, "error")) {
            s <- "-1"
            msg <- sub("[[:space:]]*$", "", conditionMessage(h))
        }
        else {
            s <- as.character(attr(h, "status"))
            msg <- table_of_FTP_server_return_codes[s]
        }
        c(s, msg, "", "")
    }
    .check_http <- if (remote) 
        function(u, h) c(.check_http_A(u, h), .check_http_B(u))
    else function(u, h) c(rep.int("", 3L), .check_http_B(u))
    .check_http_A <- function(u, h) {
        newLoc <- ""
        if (inherits(h, "error")) {
            s <- "-1"
            msg <- sub("[[:space:]]*$", "", conditionMessage(h))
            if (grepl(paste(c("server certificate verification failed", 
                "failed to get server cert", "libcurl error code (51|60)"), 
                collapse = "|"), msg)) {
                h2 <- tryCatch(curlGetHeaders(u, verify = FALSE), 
                  error = identity)
                s2 <- as.character(attr(h2, "status"))
                msg <- paste0(msg, "\n\t(Status without verification: ", 
                  table_of_HTTP_status_codes[s2], ")")
            }
        }
        else {
            s <- as.character(attr(h, "status"))
            msg <- table_of_HTTP_status_codes[s]
        }
        if (grepl(" 301 ", h[1L], useBytes = TRUE)) {
            h <- split(h, c(0L, cumsum(h == "\r\n")[-length(h)]))
            i <- vapply(h, function(e) grepl(" 301 ", e[1L], 
                useBytes = TRUE), NA)
            h <- h[[which(!i)[1L] - 1L]]
            pos <- grep("^[Ll]ocation: ", h, useBytes = TRUE)
            if (length(pos)) {
                loc <- sub("^[Ll]ocation: ([^\r]*)\r\n", "\\1", 
                  h[pos[1L]])
                newParts <- parse_URI_reference(loc)
                if (nzchar(newParts[1L, "scheme"])) {
                  newLoc <- loc
                  if (newParts[1L, "fragment"] == "") {
                    uParts <- parse_URI_reference(u)
                    if (nzchar(uFragment <- uParts[1L, "fragment"])) {
                      newLoc <- paste0(newLoc, "#", uFragment)
                    }
                  }
                }
            }
        }
        if ((s != "200") && use_curl) {
            g <- .curl_fetch_memory_status_code(u)
            if (g == "200") {
                s <- g
                msg <- "OK"
            }
        }
        if (s == "503" && any(grepl("www.sciencedirect.com", 
            c(u, newLoc)))) 
            s <- "405"
        c(s, msg, newLoc)
    }
    .check_http_B <- function(u) {
        ul <- tolower(u)
        cran <- ((grepl("^https?://cran.r-project.org/web/packages", 
            ul) && !grepl("^https?://cran.r-project.org/web/packages/([.[:alnum:]_]+(html|pdf|rds))?$", 
            ul)) || (grepl("^https?://cran.r-project.org/web/views/[[:alnum:]]+[.]html$", 
            ul)) || startsWith(ul, "http://cran.r-project.org") || 
            any(startsWith(ul, mirrors)))
        R <- grepl("^http://(www|bugs|journal).r-project.org", 
            ul)
        spaces <- grepl(" ", u)
        c(if (cran) u else "", if (spaces) u else "", if (R) u else "")
    }
    bad <- .gather()
    if (!NROW(db)) 
        return(bad)
    mirrors <- c(utils::read.csv(file.path(R.home("doc"), "CRAN_mirrors.csv"), 
        as.is = TRUE, encoding = "UTF-8")$URL, "http://cran.rstudio.com/", 
        "https://cran.rstudio.com/")
    mirrors <- tolower(sub("/$", "", mirrors))
    if (inherits(db, "check_url_db")) {
        parents <- db$From
        urls <- db$URL
    }
    else {
        parents <- split(db$Parent, db$URL)
        urls <- names(parents)
    }
    parts <- parse_URI_reference(urls)
    ind <- apply(parts == "", 1L, all)
    if (any(ind)) {
        len <- sum(ind)
        bad <- rbind(bad, .gather(urls[ind], parents[ind], m = rep.int("Empty URL", 
            len)))
    }
    schemes <- parts[, 1L]
    ind <- is.na(match(tolower(schemes), c("", IANA_URI_scheme_db$URI_Scheme, 
        "arxiv", "isbn", "issn", "javascript")))
    if (any(ind)) {
        len <- sum(ind)
        msg <- rep.int("Invalid URI scheme", len)
        doi <- schemes[ind] == "doi"
        if (any(doi)) 
            msg[doi] <- paste(msg[doi], "(use \\doi for DOIs in Rd markup)")
        bad <- rbind(bad, .gather(urls[ind], parents[ind], m = msg))
    }
    pos <- which(schemes == "ftp")
    if (length(pos) && remote) {
        urlspos <- urls[pos]
        headers <- .fetch_headers(urlspos)
        results <- do.call(rbind, Map(.check_ftp, urlspos, headers))
        status <- as.numeric(results[, 1L])
        ind <- (status < 0L) | (status >= 400L)
        if (any(ind)) {
            pos <- pos[ind]
            s <- as.character(status[ind])
            s[s == "-1"] <- "Error"
            m <- results[ind, 2L]
            m[is.na(m)] <- ""
            bad <- rbind(bad, .gather(urls[pos], parents[pos], 
                s, m))
        }
    }
    pos <- which(schemes == "http" | schemes == "https")
    if (length(pos) && remote) {
        urlspos <- urls[pos]
        myparts <- parts[pos, , drop = FALSE]
        ind <- (((myparts[, 2L] == "doi.org") | (myparts[, 2L] == 
            "dx.doi.org")) & startsWith(myparts[, 3L], "/10.") & 
            !nzchar(myparts[, 4L]) & !nzchar(myparts[, 5L]))
        if (any(ind)) 
            urlspos[ind] <- paste0("https://doi.org/api/handles", 
                myparts[ind, 3L])
        headers <- .fetch_headers(urlspos)
        if (parallel && any(ind <- vapply(headers, function(e) {
            if (inherits(e, "error")) -1L else attr(e, "status")
        }, 0L) != 200)) {
            headers[ind] <- .fetch_headers_via_curl(urlspos[ind], 
                verbose, pool, FALSE)
        }
        results <- do.call(rbind, Map(.check_http, urlspos, headers))
        status <- as.numeric(results[, 1L])
        ind <- is.na(match(status, c(200L, 405L, NA))) | nzchar(results[, 
            3L]) | nzchar(results[, 4L]) | nzchar(results[, 5L]) | 
            nzchar(results[, 6L])
        if (any(ind)) {
            pos <- pos[ind]
            s <- as.character(status[ind])
            s[is.na(s)] <- ""
            s[s == "-1"] <- "Error"
            m <- results[ind, 2L]
            m[is.na(m)] <- ""
            bad_https <- .gather(urls[pos], parents[pos], s, 
                m, results[ind, 3L], results[ind, 4L], results[ind, 
                  5L], results[ind, 6L])
            false_pos_db_403 <- c("^https?://twitter.com/", "^https?://www.jstor.org/", 
                "^https?://.+\\.wiley.com/", "^https?://www.science.org/", 
                "^https?://www.researchgate.net/", "^https?://www.tandfonline.com/", 
                "^https?://pubs.acs.org/", "^https?://journals.aom.org/", 
                "^https?://journals.sagepub.com/", "^https?://www.pnas.org/")
            false_pos_db_404 <- c("^https?://finance.yahoo.com/")
            bad_https <- bad_https[!((grepl(paste(false_pos_db_403, 
                collapse = "|"), bad_https$URL) & bad_https$Status == 
                "403") | (grepl(paste(false_pos_db_404, collapse = "|"), 
                bad_https$URL) & bad_https$Status == "404")), 
                , drop = FALSE]
            bad <- rbind(bad, bad_https)
        }
    }
    bad
}
