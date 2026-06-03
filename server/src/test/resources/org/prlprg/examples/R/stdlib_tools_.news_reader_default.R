#? stdlib
`.news_reader_default` <- function (file) 
{
    .collapse <- function(s) paste(s, collapse = "\n")
    lines <- readLines(file, warn = FALSE)
    if (any(ind <- is.na(nchar(lines, allowNA = TRUE)))) {
        dir <- dirname(file)
        if (basename(dir) == "inst") 
            dir <- dirname(file)
        encoding <- if (file.exists(dfile <- file.path(dir, "DESCRIPTION"))) 
            .read_description(dfile)["Encoding"]
        else NA
        if (!is.na(encoding)) 
            lines[ind] <- iconv(lines[ind], encoding, "")
        if (anyNA(nchar(lines[ind], allowNA = TRUE))) 
            lines[ind] <- iconv(lines[ind], "", "", sub = "byte")
    }
    olines <- lines
    lines <- lines[!grepl("^[[:space:]]*[[:punct:]]*[[:space:]]*$", 
        lines)]
    re_valid_package_name <- .standard_regexps()$valid_package_name
    re_v <- sprintf("^([[:space:]]*(%s)|(%s))(%s).*$", paste0("CHANGES? *(IN|FOR).*VERSION *", 
        "|", "CHANGES? *(IN|FOR|TO) *"), sprintf(paste("NEW IN .*", 
        "VERSION:? *", "%s +", "CHANGES IN %s +", "== Changes in %s +", 
        "== Version +", "update *", "v *", "", sep = "|"), re_valid_package_name, 
        re_valid_package_name, re_valid_package_name), .standard_regexps()$valid_package_version)
    ind <- grepl(re_v, lines, ignore.case = TRUE)
    if (!any(ind)) 
        return(.make_news_db(cbind(NA_character_, NA_character_, 
            NA_character_, .collapse(olines))))
    if (!ind[1L]) {
        pos <- seq_len(which.max(ind) - 1L)
        lines <- lines[-pos]
        ind <- ind[-pos]
    }
    re_d <- sprintf("^.*(%s)[[:punct:][:space:]]*$", "[[:digit:]]{4}-[[:digit:]]{2}-[[:digit:]]{2}")
    chunks <- split(lines, cumsum(ind))
    do_chunk <- function(chunk, header = NA_character_) {
        if (!is.na(header)) 
            date <- NA_character_
        else {
            txt <- chunk[1L]
            header <- sub(re_v, "\\6", txt, ignore.case = TRUE)
            date <- if (grepl(re_d, txt, perl = TRUE)) 
                sub(re_d, "\\1", txt, perl = TRUE)
            else NA_character_
        }
        lines <- chunk[-1L]
        s <- .collapse(lines)
        if (grepl("^[[:space:]]*([o*+-])", s)) {
            sep <- sub("^[[:space:]]*([o*+-]).*$", "\\1", s)
            ire <- sprintf("^[[:space:]]*([%s])[[:space:]]+", 
                sep)
            ind <- grepl(ire, lines)
            list(entries = sapply(split(lines, cumsum(ind)), 
                function(s) sub(ire, "", .collapse(sub("^\t?", 
                  "", s)))), header = header, chunk = chunk, 
                date = date)
        }
        else {
            re_c <- "^([[:alpha:]].*)[[:space:]]*$"
            ind <- grepl(re_c, lines)
            if (!any(ind)) {
                list(entries = character(), header = header, 
                  chunk = chunk, date = date)
            }
            else {
                pos <- cumsum(ind) > 0
                list(entries = Map(do_chunk, split(lines[pos], 
                  cumsum(ind)[pos]), sub("[[:punct:]]*$", "", 
                  sub(re_c, "\\1", lines[ind]))), header = header, 
                  chunk = chunk, date = date)
            }
        }
    }
    out <- lapply(chunks, do_chunk)
    reporter <- function(x) {
        warning(gettextf("Cannot process chunk/lines:\n%s", .collapse(paste0("  ", 
            x))), domain = NA, call. = FALSE)
        NULL
    }
    finisher <- function(x) {
        entries <- x$entries
        version <- x$header
        date <- x$date
        if (is.list(entries)) {
            do.call(rbind, lapply(entries, function(x) {
                entries <- x$entries
                bad <- if (!length(entries)) {
                  reporter(x$chunk)
                  entries <- sub("^[[:space:]]*", "", .collapse(x$chunk[-1L]))
                  TRUE
                }
                else FALSE
                cbind(version, date, x$header, entries, bad)
            }))
        }
        else {
            bad <- if (!length(entries)) {
                reporter(x$chunk)
                entries <- sub("^[[:space:]]*", "", .collapse(x$chunk[-1L]))
                TRUE
            }
            else FALSE
            cbind(version, date, NA_character_, entries, bad)
        }
    }
    out <- do.call(rbind, lapply(out, finisher))
    entries <- out[, 4L]
    exdent <- unlist(lapply(gregexpr("\n *", entries), attr, 
        "match.length"))
    exdent <- exdent[exdent > 1L]
    if (length(exdent)) {
        out[, 4L] <- gsub(sprintf("\n%s", strrep(" ", min(exdent) - 
            1L)), "\n", entries)
    }
    .make_news_db(out[, -5L, drop = FALSE], as.logical(out[, 
        5L]))
}
