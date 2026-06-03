#? stdlib
`analyze_check_log` <- function (log, drop_ok = TRUE, ...) 
{
    make_results <- function(package, version, flags, chunks) list(Package = package, 
        Version = version, Flags = flags, Chunks = chunks)
    lqa <- "'|‘"
    rqa <- "'|’"
    if (is.character(drop_ok)) {
        drop_ok_status_tags <- drop_ok
        drop_ok <- TRUE
    }
    else {
        drop_ok_status_tags <- c("OK", "NONE", "SKIPPED")
    }
    lines <- read_check_log(log, ...)
    re <- "^\\* using session charset: "
    pos <- grep(re, lines, perl = TRUE, useBytes = TRUE)
    if (length(pos)) {
        enc <- sub(re, "", lines[pos[1L]], useBytes = TRUE)
        lines <- iconv(lines, enc, "UTF-8", sub = "byte")
        if (any(bad <- !validUTF8(lines))) 
            lines[bad] <- iconv(lines[bad], to = "ASCII", sub = "byte")
    }
    else return()
    package <- "???"
    version <- ""
    header <- lines
    re <- sprintf("^\\* this is package (%s)(.*)(%s) version (%s)(.*)(%s)$", 
        lqa, rqa, lqa, rqa)
    pos <- grep(re, lines, perl = TRUE)
    if (length(pos)) {
        pos <- pos[1L]
        txt <- lines[pos]
        package <- sub(re, "\\2", txt, perl = TRUE)
        version <- sub(re, "\\5", txt, perl = TRUE)
        header <- lines[seq_len(pos - 1L)]
        lines <- lines[-seq_len(pos)]
    }
    else {
        re <- sprintf("^\\* checking for file (%s)(.*)/DESCRIPTION(%s).*$", 
            lqa, rqa)
        pos <- grep(re, lines, perl = TRUE)
        if (length(pos)) {
            pos <- pos[1L]
            txt <- lines[pos]
            package <- sub(re, "\\2", txt, perl = TRUE)
            header <- lines[seq_len(pos - 1L)]
        }
        else if (!any(startsWith(lines, "* checking "))) 
            return()
    }
    re <- sprintf("^\\* using options? (%s)(.*)(%s)$", lqa, rqa)
    flags <- if (length(pos <- grep(re, header, perl = TRUE))) {
        sub(re, "\\2", header[pos[1L]], perl = TRUE)
    }
    else ""
    len <- length(lines)
    pos <- which(lines == "* DONE")
    if (length(pos) && ((pos <- pos[length(pos)]) < len) && startsWith(lines[pos + 
        1L], "Status: ")) 
        lines <- lines[seq_len(pos - 1L)]
    else {
        if (startsWith(lines[len], "* elapsed time ")) {
            lines <- lines[-len]
            len <- len - 1L
            while (grepl("^[[:space:]]*$", lines[len])) {
                lines <- lines[-len]
                len <- len - 1L
            }
        }
        if (startsWith(lines[len], "Status: ")) {
            lines <- lines[-len]
            len <- len - 1L
        }
        else {
            num <- length(grep("^(NOTE|WARNING): There", lines[c(len - 
                1L, len)]))
            if (num > 0L) {
                pos <- seq.int(len - num + 1L, len)
                lines <- lines[-pos]
                len <- len - num
            }
        }
        if (lines[len] == "* DONE") 
            lines <- lines[-len]
    }
    analyze_lines <- function(lines) {
        pos <- which(startsWith(lines, "* loading checks for arch"))
        pos <- pos[pos < length(lines)]
        pos <- pos[startsWith(lines[pos + 1L], "** checking")]
        if (length(pos)) 
            lines <- lines[-pos]
        pos <- which(startsWith(lines, "* checking examples"))
        pos <- pos[pos < length(lines)]
        pos <- pos[startsWith(lines[pos + 1L], "** running examples for arch")]
        if (length(pos)) 
            lines <- lines[-pos]
        pos <- which(startsWith(lines, "* checking tests"))
        pos <- pos[pos < length(lines)]
        pos <- pos[startsWith(lines[pos + 1L], "** running tests for arch")]
        if (length(pos)) 
            lines <- lines[-pos]
        pos <- which(startsWith(lines, "* used"))
        if (length(pos)) 
            lines[pos] <- paste("Used", substring(lines[pos], 
                8L))
        re <- "^\\*\\*? ((checking|creating|running examples for arch|running tests for arch) .*) \\.\\.\\.( (\\[[^ ]*\\]))?( (.*)|)$"
        ind <- grepl(re, lines, perl = TRUE)
        csi <- cumsum(ind)
        ind <- (csi > 0)
        chunks <- lapply(split(lines[ind], csi[ind]), function(s) {
            line <- s[1L]
            check <- sub(re, "\\1", line, perl = TRUE)
            status <- sub(re, "\\6", line, perl = TRUE)
            if (status == "") 
                status <- "FAILURE"
            list(check = check, status = status, output = paste(s[-1L], 
                collapse = "\n"))
        })
        status <- vapply(chunks, `[[`, "", "status")
        if (isTRUE(drop_ok) || (is.na(drop_ok) && all(is.na(match(c("ERROR", 
            "FAILURE"), status))))) 
            chunks <- chunks[is.na(match(status, drop_ok_status_tags))]
        chunks
    }
    chunks <- analyze_lines(lines)
    if (!length(chunks) && !isFALSE(drop_ok)) {
        chunks <- list(list(check = "*", status = "OK", output = ""))
    }
    make_results(package, version, flags, chunks)
}
