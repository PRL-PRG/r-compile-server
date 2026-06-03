#? stdlib
`.build_news_db_from_package_NEWS_md` <- function (f) 
{
    md <- readLines(f, encoding = "UTF-8", warn = FALSE)
    if (!length(md)) 
        return()
    if (md[1L] == "---") {
        for (pos in seq.int(2L, length(md))) if (md[pos] == "---") 
            break
        md[seq_len(pos)] <- ""
    }
    doc <- commonmark::markdown_xml(md, extensions = TRUE, sourcepos = TRUE)
    doc <- xml2::xml_ns_strip(xml2::read_xml(doc))
    nodes <- xml2::xml_children(doc)
    .markdown_text <- commonmark::markdown_text
    .markdown_html <- commonmark::markdown_html
    .xml_attr <- xml2::xml_attr
    .xml_name <- xml2::xml_name
    .xml_text <- xml2::xml_text
    get_text_and_HTML <- function(sp) {
        l1 <- sp[1L]
        c1 <- sp[2L]
        l2 <- sp[3L]
        c2 <- sp[4L]
        txt <- if (l1 < l2) {
            c(substring(md[l1], c1), md[seq.int(from = l1 + 1L, 
                length.out = l2 - l1 - 1L)], substring(md[l2], 
                1L, c2))
        }
        else substring(md[l1], c1, c2)
        c(.markdown_text(txt, width = 72L), .markdown_html(txt))
    }
    do_vchunk <- function(nodes) {
        version <- .xml_text(nodes[[1L]])
        nodes <- nodes[-1L]
        if (!length(nodes)) 
            return(rbind(c(version, "", "", "")))
        ind <- .xml_name(nodes) == "heading"
        pos <- which(ind)
        if (length(pos)) {
            lev <- .xml_attr(nodes[pos], "level")
            ind[pos] <- (lev == lev[1L])
            if ((pos[1L]) > 1L) {
                ini <- seq_len(pos[1L] - 1L)
                out <- list(do_cchunk(nodes[ini], FALSE))
                nodes <- nodes[-ini]
                ind <- ind[-ini]
            }
            else out <- list()
            out <- c(out, lapply(split(nodes, cumsum(ind)), do_cchunk, 
                TRUE))
            cbind(version, do.call(rbind, out))
        }
        else {
            rbind(c(version, do_cchunk(nodes, FALSE)))
        }
    }
    do_cchunk <- function(nodes, heading) {
        if (heading) {
            category <- .xml_text(nodes[[1L]])
            nodes <- nodes[-1L]
        }
        else {
            category <- ""
        }
        if (!length(nodes)) 
            return(c(category, "", ""))
        sp <- c(.xml_attr(nodes[[1L]], "sourcepos"), .xml_attr(nodes[[length(nodes)]], 
            "sourcepos"))
        sp <- as.integer(unlist(strsplit(sp, "[:-]"))[c(1L, 2L, 
            7L, 8L)])
        c(category, get_text_and_HTML(sp))
    }
    ind <- .xml_name(nodes) == "heading"
    pos <- which(ind)
    if (!length(pos)) 
        return()
    re_v <- sprintf("(^|.*[[:space:]]+)[vV]?(%s).*$", .standard_regexps()$valid_package_version)
    while (length(pos) && !grepl(re_v, .xml_text(nodes[[pos[1L]]]))) pos <- pos[-1L]
    if (!length(pos)) 
        return()
    lev <- .xml_attr(nodes[pos], "level")
    ind[pos] <- (lev == lev[1L])
    if (pos[1L] > 1L) {
        ini <- seq_len(pos[1L] - 1L)
        nodes <- nodes[-ini]
        ind <- ind[-ini]
    }
    vchunks <- split(nodes, cumsum(ind))
    db <- do.call(rbind, lapply(vchunks, do_vchunk))
    reDt <- "[[:digit:]]{4}-[[:digit:]]{2}-[[:digit:]]{2}"
    rEnd <- "[[:punct:][:space:]]*$"
    re_d1 <- sprintf(paste0("^.*(%s)", rEnd), reDt)
    re_d2 <- sprintf(paste0("^.*\\((%s)[[:punct:]] .*\\)", rEnd), 
        reDt)
    nms <- db[, 1L]
    ind <- grepl(re_v, nms, ignore.case = TRUE)
    if (!all(ind)) 
        warning(gettextf("Cannot extract version info from the following section titles:\n%s", 
            paste0("  ", unique(nms[!ind]), collapse = "\n")), 
            domain = NA, call. = FALSE)
    .make_news_db(cbind(ifelse(ind, sub(re_v, "\\2", nms, ignore.case = TRUE), 
        NA_character_), ifelse(grepl(re_d1, nms, perl = TRUE), 
        sub(re_d1, "\\1", nms, perl = TRUE), ifelse(grepl(re_d2, 
            nms, perl = TRUE), sub(re_d2, "\\1", nms, perl = TRUE), 
            NA_character_)), db[, 2L], Text = sub("\n*$", "", 
        db[, 3L]), HTML = db[, 4L]), NULL, "news_db_from_md")
}
