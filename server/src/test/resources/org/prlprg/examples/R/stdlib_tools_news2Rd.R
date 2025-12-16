#? stdlib
`news2Rd` <- function (file, out = stdout(), codify = FALSE) 
{
    file <- file_path_as_absolute(file)
    if (file_test("-d", file)) {
        dir <- file
        dfile <- file.path(dir, "DESCRIPTION")
        if (!file_test("-f", dfile)) 
            stop("DESCRIPTION file not found")
        file <- file.path(dir, "inst", "NEWS")
        if (!file_test("-f", file)) {
            file <- file.path(dir, "NEWS")
            if (!file_test("-f", file)) 
                stop("NEWS file not found")
        }
    }
    else {
        dir <- dirname(file)
        dfile <- file.path(dir, "DESCRIPTION")
        if (!file_test("-f", dfile)) {
            if ((basename(dir) != "inst") || !file_test("-f", 
                dfile <- file.path(dirname(dir), "DESCRIPTION"))) 
                stop("DESCRIPTION file not found")
        }
    }
    meta <- .read_description(dfile)
    wto <- function(x) writeLines(x, con = out, useBytes = TRUE)
    cre <- "(\\W|^)(\"[[:alnum:]_.]*\"|[[:alnum:]_.:]+\\(\\))(\\W|$)"
    if (is.character(out)) {
        out <- file(out, "wt")
        on.exit(close(out))
    }
    if (!isOpen(out, "wt")) {
        open(out, "wt")
        on.exit(close(out))
    }
    {
        news <- .news_reader_default(file)
        bad <- attr(news, "bad")
        if (!length(bad)) 
            stop("No news found in given file using package default format.")
        if (any(bad)) {
            bad <- news$Text[bad]
            stop("Could not extract news from the following text chunks:\n", 
                paste(sprintf("\nChunk %s:\n%s", format(seq_along(bad)), 
                  bad), collapse = "\n"))
        }
        encoding <- meta["Encoding"]
        package <- meta["Package"]
        texts <- toRd(news$Text)
        if (codify) 
            texts <- gsub(cre, "\\1\\\\code{\\2}\\3", texts)
        if (!is.na(encoding)) 
            texts <- iconv(texts, to = encoding, sub = "byte", 
                mark = FALSE)
        news$Text <- texts
        wto(c("\\name{NEWS}", sprintf("\\title{News for Package '%s'}", 
            package)))
        if (!is.na(encoding)) 
            wto(sprintf("\\encoding{%s}", encoding))
        vchunks <- split(news, news$Version)
        vchunks <- vchunks[order(as.numeric_version(names(vchunks)), 
            decreasing = TRUE)]
        dates <- vapply(vchunks, function(v) v$Date[1L], "")
        if (any(ind <- !is.na(dates))) 
            names(vchunks)[ind] <- sprintf("%s (%s)", names(vchunks)[ind], 
                dates[ind])
        vheaders <- sprintf("\\section{Changes in %s version %s}{", 
            package, names(vchunks))
        for (i in seq_along(vchunks)) {
            wto(vheaders[i])
            vchunk <- vchunks[[i]]
            if (all(!is.na(category <- vchunk$Category) & nzchar(category))) {
                cchunks <- split(vchunk, factor(category, levels = unique(category)))
                cheaders <- sprintf("  \\subsection{%s}{", names(cchunks))
                for (j in seq_along(cchunks)) {
                  wto(c(cheaders[j], "    \\itemize{", paste("      \\item", 
                    gsub("\n", "\n        ", cchunks[[j]]$Text, 
                      fixed = TRUE)), "    }", "  }"))
                }
            }
            else {
                wto(c("  \\itemize{", paste("    \\item", gsub("\n", 
                  "\n      ", vchunk$Text, fixed = TRUE)), "  }"))
            }
            wto("}")
        }
    }
}
