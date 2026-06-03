#? stdlib
`.extract_news_from_Rd` <- function (x) 
{
    get_section_names <- function(x) sapply(x, function(e) .Rd_get_text(e[[1L]]))
    get_item_texts <- function(x) {
        pos <- which(RdTags(x) == "\\itemize")
        if (!length(pos)) {
            stop(gettextf("Malformed NEWS.Rd file:\nChunk starting\n  %s\ncontains no \\itemize.", 
                substr(sub("^[[:space:]]*", "", .Rd_deparse(x)), 
                  1L, 60L)), domain = NA)
        }
        else if (length(pos) > 1L) {
            warning(gettextf("Malformed NEWS.Rd file:\nChunk starting\n  %s\ncontains more than one \\itemize.\nUsing the first one.", 
                substr(sub("^[[:space:]]*", "", .Rd_deparse(x)), 
                  1L, 60L)), domain = NA, call. = FALSE)
            pos <- pos[1L]
        }
        x <- x[[pos]]
        out <- file()
        on.exit(close(out))
        Rd2txt_options <- Rd2txt_NEWS_in_Rd_options
        Rd2txt_options$width <- 72L
        y <- split(x, cumsum(RdTags(x) == "\\item"))
        y <- y[names(y) != "0"]
        if (!length(y)) {
            warning(gettextf("Malformed NEWS.Rd file:\nChunk starting\n  %s\ncontains no \\item.", 
                substr(sub("^[[:space:]]*", "", .Rd_deparse(x)), 
                  1L, 60L)), domain = NA, call. = FALSE)
            return(matrix(character(), 0L, 2L, dimnames = list(NULL, 
                c("Text", "HTML"))))
        }
        do.call(rbind, lapply(y, function(e) {
            e <- e[-1L]
            Rd2txt(e, fragment = TRUE, out = out, options = Rd2txt_options)
            one <- paste(readLines(out, warn = FALSE), collapse = "\n")
            Rd2HTML(e, fragment = TRUE, out = out)
            two <- paste(readLines(out, warn = FALSE), collapse = "\n")
            cbind(Text = one, HTML = two)
        }))
    }
    cbind_safely <- function(u, v) cbind(rep_len(u, NROW(v)), 
        v)
    x <- x[RdTags(x) == "\\section"]
    y <- Map(cbind_safely, get_section_names(x), lapply(x, function(e) {
        z <- e[[2L]]
        ind <- RdTags(z) == "\\subsection"
        if (any(ind)) {
            z <- z[ind]
            do.call(rbind, Map(cbind_safely, get_section_names(z), 
                lapply(z, function(e) get_item_texts(e[[2L]]))))
        }
        else {
            cbind_safely(NA_character_, get_item_texts(z))
        }
    }))
    y <- do.call(rbind, y)
    s <- trimws(y[, "HTML"])
    i <- which(startsWith(s, "<p>") & !endsWith(s, "</p>"))
    if (length(i)) {
        z <- s[i]
        j <- which((lengths(gregexpr("</?p>", z))%%2L) > 0L)
        if (length(j)) 
            s[i[j]] <- paste0(z[j], "</p>")
    }
    y[, "HTML"] <- s
    y
}
