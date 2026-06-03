#? stdlib
`Rd2HTML` <- function (Rd, out = "", package = "", defines = .Platform$OS.type, 
    Links = NULL, Links2 = NULL, stages = "render", outputEncoding = "UTF-8", 
    dynamic = FALSE, no_links = FALSE, fragment = FALSE, stylesheet = if (dynamic) "/doc/html/R.css" else "R.css", 
    texmath = getOption("help.htmlmath"), concordance = FALSE, 
    standalone = TRUE, hooks = list(), toc = isTRUE(getOption("help.htmltoc")), 
    Rhtml = FALSE, ...) 
{
    package_help <- inherits(Rd, "Rd") && (length(package) == 
        2L)
    if (missing(no_links) && is.null(Links) && !dynamic) 
        no_links <- TRUE
    linksToTopics <- config_val_to_logical(Sys.getenv("_R_HELP_LINKS_TO_TOPICS_", 
        "TRUE"))
    enhancedHTML <- config_val_to_logical(Sys.getenv("_R_HELP_ENABLE_ENHANCED_HTML_", 
        "TRUE"))
    if (!no_links && !linksToTopics && !standalone) {
        warning("links not supported for 'standalone = FALSE' when _R_HELP_LINKS_TO_TOPICS_=false")
        no_links <- TRUE
    }
    version <- ""
    if (!identical(package, "")) {
        if (length(package) > 1L) {
            version <- package[2L]
            package <- package[1L]
        }
        else {
            dir <- dirname(package)
            if (nzchar(dir) && file_test("-f", dfile <- file.path(package, 
                "DESCRIPTION"))) {
                version <- .read_description(dfile)["Version"]
                package <- basename(package)
            }
            else {
                version <- utils::packageDescription(package, 
                  fields = "Version")
            }
        }
        if (is.na(version)) 
            version <- ""
    }
    writeLinesUTF8 <- if (outputEncoding == "UTF-8" || (outputEncoding == 
        "" && l10n_info()[["UTF-8"]])) {
        function(x, con, outputEncoding, ...) writeLines(x, con, 
            useBytes = TRUE, ...)
    }
    else {
        function(x, con, outputEncoding, ...) {
            x <- iconv(x, "UTF-8", outputEncoding, sub = "byte", 
                mark = FALSE)
            writeLines(x, con, useBytes = TRUE, ...)
        }
    }
    if (concordance) 
        conc <- activeConcordance()
    else conc <- NULL
    if (toc) {
        if (!standalone) 
            toc <- FALSE
        else toc_entries <- list()
    }
    skipNewline <- FALSE
    of0 <- function(...) of1(paste0(...))
    of1 <- function(text) {
        if (skipNewline) {
            skipNewline <<- FALSE
            if (text == "\n") 
                return()
        }
        if (concordance) 
            conc$addToConcordance(text)
        writeLinesUTF8(text, con, outputEncoding, sep = "")
    }
    pendingClose <- pendingOpen <- character()
    inEqn <- FALSE
    sectionLevel <- 0L
    inPara <- FALSE
    inAsIs <- FALSE
    HTMLTags <- c(`\\bold` = "b", `\\cite` = "cite", `\\code` = "code", 
        `\\command` = "code", `\\dfn` = "dfn", `\\emph` = "em", 
        `\\kbd` = "kbd", `\\preformatted` = "pre", `\\strong` = "strong", 
        `\\var` = "var")
    HTMLEscapes <- c(`\\R` = "<span class=\"rlang\"><b>R</b></span>", 
        `\\cr` = "<br />", `\\dots` = "...", `\\ldots` = "...")
    HTMLLeft <- c(`\\abbr` = "<abbr>", `\\acronym` = "<abbr><span class=\"acronym\">", 
        `\\donttest` = "", `\\dontdiff` = "", `\\env` = "<span class=\"env\">", 
        `\\file` = "&lsquo;<span class=\"file\">", `\\option` = "<span class=\"option\">", 
        `\\pkg` = "<span class=\"pkg\">", `\\samp` = "&lsquo;<span class=\"samp\">&#8288;", 
        `\\sQuote` = "&lsquo;", `\\dQuote` = "&ldquo;", `\\verb` = "<code style=\"white-space: pre;\">&#8288;")
    HTMLRight <- c(`\\abbr` = "</abbr>", `\\acronym` = "</span></abbr>", 
        `\\donttest` = "", `\\dontdiff` = "", `\\env` = "</span>", 
        `\\file` = "</span>&rsquo;", `\\option` = "</span>", 
        `\\pkg` = "</span>", `\\samp` = "&#8288;</span>&rsquo;", 
        `\\sQuote` = "&rsquo;", `\\dQuote` = "&rdquo;", `\\verb` = "&#8288;</code>")
    addParaBreaks <- function(x) {
        if (isBlankLineRd(x) && isTRUE(inPara)) {
            inPara <<- FALSE
            return("</p>\n")
        }
        if (utils:::getSrcByte(x) == 1L) 
            x <- psub("^\\s+", "", x)
        if (isFALSE(inPara) && !all(grepl("^[[:blank:]\n]*$", 
            x, perl = TRUE))) {
            x <- paste0("<p>", x)
            inPara <<- TRUE
        }
        x
    }
    enterPara <- function(enter = TRUE) {
        if (enter && isFALSE(inPara)) {
            of1("<p>")
            inPara <<- TRUE
        }
    }
    leavePara <- function(newval) {
        if (isTRUE(inPara)) 
            of1("</p>\n")
        inPara <<- newval
    }
    writeItemAsCode <- function(blocktag, block, addID = blocktag == 
        "\\arguments") {
        for (i in which(RdTags(block) == "\\code")) attr(block[[i]], 
            "Rd_tag") <- "Rd"
        s <- as.character.Rd(block)
        toEsc <- s %in% names(HTMLEscapes)
        if (any(toEsc)) 
            s[toEsc] <- HTMLEscapes[s[toEsc]]
        s <- trimws(strsplit(paste(s, collapse = ""), ",", fixed = TRUE)[[1]])
        s <- s[nzchar(s)]
        item_value <- vhtmlify(s)
        s <- if (addID) {
            item_id <- tag2id(name = if (standalone) 
                NULL
            else name, tagid = s)
            if (toc) 
                toc_entries <<- c(toc_entries, list(argitem = list(id = item_id, 
                  value = sprintf("<code>%s</code>", item_value))))
            sprintf("<code id=\"%s\">%s</code>", item_id, item_value)
        }
        else sprintf("<code>%s</code>", item_value)
        s <- paste0(s, collapse = ", ")
        of1(s)
    }
    writeWrapped <- function(tag, block, doParas) {
        if (!doParas || HTMLTags[tag] == "pre") 
            leavePara(NA)
        else enterPara()
        saveAsIs <- inAsIs
        asis <- !is.na(match(tag, "\\command"))
        if (asis) 
            inAsIs <<- TRUE
        if (!isBlankRd(block)) {
            of0("<", HTMLTags[tag], ">")
            writeContent(block, tag)
            of0("</", HTMLTags[tag], ">")
        }
        if (HTMLTags[tag] == "pre") 
            inPara <<- FALSE
        if (asis) 
            inAsIs <<- saveAsIs
    }
    writeLink <- function(tag, block, doParas) {
        parts <- get_link(block, tag, Rdfile)
        writeHref <- function() {
            enterPara(doParas)
            savePara <- inPara
            inPara <<- NA
            if (!no_links) 
                of0("<a href=\"", htmlfile, "\">")
            writeContent(block, tag)
            if (!no_links) 
                of1("</a>")
            inPara <<- savePara
        }
        if (is.null(parts$targetfile)) {
            topic <- parts$dest
            if (dynamic) {
                htmlfile <- paste0("../../", urlify(package), 
                  "/help/", topic2url(topic))
                writeHref()
                return()
            }
            else if (linksToTopics && !is.null(Links) && !is.na(Links[topic]) && 
                startsWith(Links[topic], paste0("../../", urlify(package)))) {
                htmlfile <- if (standalone) 
                  paste0("../../", urlify(package), "/help/", 
                    topic2filename(topic), ".html")
                else topic2href(topic)
                writeHref()
                return()
            }
            else {
                htmlfile <- NA_character_
                if (!is.null(Links)) {
                  tmp <- Links[topic]
                  if (!is.na(tmp)) 
                    htmlfile <- tmp
                  else {
                    tmp <- Links2[topic]
                    if (!is.na(tmp)) 
                      htmlfile <- tmp
                  }
                }
            }
            if (is.na(htmlfile)) {
                if (!no_links) 
                  warnRd(block, Rdfile, "missing link ", sQuote(topic))
                writeContent(block, tag)
            }
            else {
                if (!standalone) {
                  htmlfile <- topic2href(topic, destpkg = strsplit(htmlfile, 
                    "/", fixed = TRUE)[[1]][[3]], hooks = hooks)
                }
                else {
                  pkg_regexp <- paste0("^../../", urlify(package), 
                    "/html/")
                  if (grepl(pkg_regexp, htmlfile)) {
                    htmlfile <- sub(pkg_regexp, "", htmlfile)
                  }
                }
                writeHref()
            }
        }
        else {
            if (!dynamic && !linksToTopics && !no_links && nzchar(pkgpath <- system.file(package = parts$pkg))) {
                htmlfile <- paste0(topic2url(parts$targetfile), 
                  ".html")
                OK <- FALSE
                if (!file.exists(file.path(pkgpath, "html", htmlfile))) {
                  f <- file.path(pkgpath, "help", "paths.rds")
                  if (file.exists(f)) {
                    paths <- sub("\\.[Rr]d$", "", basename(readRDS(f)))
                    OK <- parts$targetfile %in% paths
                  }
                }
                else OK <- TRUE
                if (!OK) {
                  file <- utils:::index.search(parts$targetfile, 
                    pkgpath)
                  if (length(file)) {
                    parts$targetfile <- basename(file)
                  }
                  else {
                    warnRd(block, Rdfile, "missing file link ", 
                      sQuote(parts$targetfile))
                  }
                }
            }
            if (parts$pkg == package) {
                if (linksToTopics) 
                  htmlfile <- if (dynamic) 
                    paste0("../help/", topic2url(parts$targetfile))
                  else if (standalone) 
                    paste0("../help/", topic2filename(parts$targetfile), 
                      ".html")
                  else topic2href(parts$targetfile)
                else htmlfile <- paste0(topic2url(parts$targetfile), 
                  ".html")
                writeHref()
            }
            else {
                if (linksToTopics) 
                  htmlfile <- if (dynamic) 
                    paste0("../../", urlify(parts$pkg), "/help/", 
                      topic2url(parts$targetfile))
                  else if (standalone) 
                    paste0("../../", urlify(parts$pkg), "/help/", 
                      topic2filename(parts$targetfile), ".html")
                  else topic2href(parts$targetfile, destpkg = urlify(parts$pkg), 
                    hooks = hooks)
                else htmlfile <- paste0("../../", urlify(parts$pkg), 
                  "/html/", topic2url(parts$targetfile), ".html")
                writeHref()
            }
        }
    }
    writeLR <- function(block, tag, doParas) {
        enterPara(doParas)
        of1(HTMLLeft[tag])
        writeContent(block, tag)
        of1(HTMLRight[tag])
    }
    writeDR <- function(block, tag) {
        if (Rhtml && length(block) > 1L) 
            of1("\nend.rcode-->\n\n<!--begin.rcode eval=FALSE\n")
        of1("## Not run: ")
        writeContent(block, tag)
        if (length(block) > 1L) {
            of1("\n## End(Not run)")
            if (Rhtml) 
                of1("\nend.rcode-->\n\n<!--begin.rcode\n")
        }
    }
    writeBlock <- function(block, tag, blocktag) {
        if (concordance) 
            conc$saveSrcref(block)
        doParas <- (blocktag %notin% c("\\tabular"))
        switch(tag, UNKNOWN = , VERB = if (Rhtml && blocktag == 
            "\\dontrun") of1(block) else of1(vhtmlify(block, 
            inEqn)), RCODE = if (Rhtml) of1(block) else of1(vhtmlify(block)), 
            TEXT = of1(if (doParas && !inAsIs) addParaBreaks(htmlify(block)) else vhtmlify(block)), 
            USERMACRO = , `\\newcommand` = , `\\renewcommand` = {
            }, COMMENT = if (utils:::getSrcByte(block) == 1L) skipNewline <<- TRUE, 
            LIST = writeContent(block, tag), `\\describe` = , 
            `\\enumerate` = , `\\itemize` = {
                leavePara(FALSE)
                writeContent(block, tag)
            }, `\\bold` = , `\\cite` = , `\\code` = , `\\command` = , 
            `\\dfn` = , `\\emph` = , `\\kbd` = , `\\preformatted` = , 
            `\\strong` = , `\\var` = writeWrapped(tag, block, 
                doParas), `\\special` = writeContent(block, tag), 
            `\\linkS4class` = , `\\link` = writeLink(tag, block, 
                doParas), `\\email` = if (length(block)) {
                url <- lines2str(as.character(block))
                enterPara(doParas)
                of0("<a href=\"mailto:", urlify_email_address(url), 
                  "\">", htmlify(url), "</a>")
            }, `\\url` = if (length(block)) {
                url <- lines2str(as.character(block))
                enterPara(doParas)
                of0("<a href=\"", urlify(url), "\">", htmlify(url), 
                  "</a>")
            }, `\\href` = {
                closing <- if (length(block[[1L]])) {
                  url <- lines2str(as.character(block[[1L]]))
                  enterPara(doParas)
                  of0("<a href=\"", urlify(url), "\">")
                  "</a>"
                } else ""
                savePara <- inPara
                inPara <<- NA
                writeContent(block[[2L]], tag)
                of0(closing)
                inPara <<- savePara
            }, `\\Sexpr` = of0(as.character.Rd(block, deparse = TRUE)), 
            `\\cr` = , `\\dots` = , `\\ldots` = , `\\R` = {
                enterPara(doParas)
                of1(HTMLEscapes[tag])
            }, `\\abbr` = , `\\acronym` = , `\\donttest` = , 
            `\\dontdiff` = , `\\env` = , `\\file` = , `\\option` = , 
            `\\pkg` = , `\\samp` = , `\\sQuote` = , `\\dQuote` = , 
            `\\verb` = writeLR(block, tag, doParas), `\\dontrun` = writeDR(block, 
                tag), `\\enc` = writeContent(block[[1L]], tag), 
            `\\eqn` = {
                block <- if (doTexMath) block[[1L]] else block[[length(block)]]
                if (length(block)) {
                  enterPara(doParas)
                  inEqn <<- !doTexMath
                  if (doTexMath) of1("<code class=\"reqn\">") else of1("<i>")
                  writeContent(block, tag)
                  if (doTexMath) of1("</code>") else of1("</i>")
                  inEqn <<- FALSE
                }
            }, `\\deqn` = {
                block <- if (doTexMath) block[[1L]] else block[[length(block)]]
                if (length(block)) {
                  inEqn <<- !doTexMath
                  leavePara(TRUE)
                  if (doTexMath) of1("<p style=\"text-align: center;\"><code class=\"reqn\">") else of0("<p style=\"", 
                    if (length(block) <= 3) "text-align: center" else "white-space: pre", 
                    ";\"><i>")
                  writeContent(block, tag)
                  if (doTexMath) of1("</code>\n") else of1("</i>")
                  leavePara(FALSE)
                  inEqn <<- FALSE
                }
            }, `\\figure` = {
                enterPara(doParas)
                if (dynamic) of1("<img src=\"figures/") else of1("<img src=\"../help/figures/")
                writeContent(block[[1]], tag)
                of1("\" ")
                if (length(block) > 1L && length(imgoptions <- .Rd_get_latex(block[[2]])) && 
                  startsWith(imgoptions[1L], "options: ")) {
                  imgoptions <- gsub("\\%", "%", paste(imgoptions, 
                    collapse = " "), fixed = TRUE)
                  of1(sub("^options: ", "", imgoptions))
                  if (!grepl("\\balt *=", imgoptions)) {
                    of1(" alt=\"")
                    writeContent(block[[1L]], tag)
                    of1("\"")
                  }
                } else {
                  of1("alt=\"")
                  writeContent(block[[length(block)]], tag)
                  of1("\"")
                }
                of1(" />")
            }, `\\dontshow` = , `\\testonly` = {
            }, `\\method` = , `\\S3method` = , `\\S4method` = {
            }, `\\tabular` = writeTabular(block), `\\subsection` = writeSection(block, 
                tag), `\\if` = , `\\ifelse` = if (testRdConditional("html", 
                block, Rdfile)) writeContent(block[[2L]], tag) else if (tag == 
                "\\ifelse") writeContent(block[[3L]], tag), `\\out` = for (i in seq_along(block)) of1(block[[i]]), 
            stopRd(block, Rdfile, "Tag ", tag, " not recognized"))
    }
    writeTabular <- function(table) {
        format <- table[[1L]]
        content <- table[[2L]]
        if (length(format) != 1 || RdTags(format) != "TEXT") 
            stopRd(table, Rdfile, "\\tabular format must be simple text")
        format <- strsplit(format[[1L]], "", fixed = TRUE)[[1L]]
        if (!all(format %in% c("l", "c", "r"))) 
            stopRd(table, Rdfile, "Unrecognized \\tabular format: ", 
                table[[1L]][[1L]])
        format <- c(l = "left", c = "center", r = "right")[format]
        tags <- RdTags(content)
        leavePara(NA)
        of1("\n<table>\n")
        if (concordance) 
            conc$saveSrcref(table)
        newrow <- TRUE
        newcol <- TRUE
        for (i in seq_along(tags)) {
            if (concordance) 
                conc$saveSrcref(content[[i]])
            if (newrow) {
                of1("<tr>\n ")
                newrow <- FALSE
                col <- 0
            }
            if (newcol) {
                col <- col + 1L
                if (col > length(format)) 
                  stopRd(table, Rdfile, "Only ", length(format), 
                    " columns allowed in this table")
                of0("<td style=\"text-align: ", format[col], 
                  ";\">")
                newcol <- FALSE
            }
            switch(tags[i], `\\tab` = {
                of1("</td>")
                newcol <- TRUE
            }, `\\cr` = {
                if (!newcol) of1("</td>")
                of1("\n</tr>\n")
                newrow <- TRUE
                newcol <- TRUE
            }, writeBlock(content[[i]], tags[i], "\\tabular"))
        }
        if (!newcol) 
            of1("</td>")
        if (!newrow) 
            of1("\n</tr>\n")
        of1("\n</table>\n")
        inPara <<- FALSE
    }
    writeContent <- function(blocks, blocktag) {
        inlist <- FALSE
        itemskip <- FALSE
        tags <- RdTags(blocks)
        i <- 0
        while (i < length(tags)) {
            i <- i + 1
            tag <- tags[i]
            block <- blocks[[i]]
            if (concordance) 
                conc$saveSrcref(block)
            if (length(pendingOpen)) {
                if (tag == "RCODE" && startsWith(block, "(")) {
                  block <- sub("^\\(", "", block)
                  arg1 <- sub("[,)[:space:]].*", "", block)
                  block <- sub(paste0(arg1, "[[:space:]]*,[[:space:]]*"), 
                    "", block)
                  of0(arg1, pendingOpen)
                  pendingClose <<- if (pendingOpen == "$") 
                    ""
                  else chartr("[", "]", pendingOpen)
                }
                else of0("`", pendingOpen, "`")
                pendingOpen <<- character()
            }
            if (length(pendingClose) && tag == "RCODE" && grepl("\\)", 
                block)) {
                of0(sub("\\).*", "", block), pendingClose)
                block <- sub("[^)]*\\)", "", block)
                pendingClose <<- character()
            }
            switch(tag, `\\method` = , `\\S3method` = , `\\S4method` = {
                blocks <- transformMethod(i, blocks, Rdfile)
                tags <- RdTags(blocks)
                i <- i - 1
            }, `\\item` = {
                leavePara(FALSE)
                if (!inlist) {
                  switch(blocktag, `\\value` = of1("<table>\n"), 
                    `\\arguments` = of1("<table>\n"), `\\itemize` = of1("<ul>\n"), 
                    `\\enumerate` = of1("<ol>\n"), `\\describe` = of1("<dl>\n"))
                  inlist <- TRUE
                } else {
                  if (blocktag %in% c("\\itemize", "\\enumerate")) {
                    of1("</li>\n")
                    itemskip <- TRUE
                  }
                }
                switch(blocktag, `\\value` = , `\\arguments` = {
                  of1("<tr><td>")
                  inPara <<- NA
                  writeItemAsCode(blocktag, block[[1L]])
                  of1("</td>\n<td>\n")
                  inPara <<- FALSE
                  writeContent(block[[2L]], tag)
                  leavePara(FALSE)
                  of1("</td></tr>")
                }, `\\describe` = {
                  of1("<dt>")
                  inPara <<- NA
                  writeContent(block[[1L]], tag)
                  of1("</dt><dd>")
                  inPara <<- FALSE
                  writeContent(block[[2L]], tag)
                  leavePara(FALSE)
                  of1("</dd>")
                }, `\\enumerate` = , `\\itemize` = {
                  inPara <<- FALSE
                  of1("<li>")
                })
            }, {
                if (inlist && (blocktag %notin% c("\\itemize", 
                  "\\enumerate")) && tag != "COMMENT" && !(tag == 
                  "TEXT" && isBlankRd(block))) {
                  switch(blocktag, `\\arguments` = , `\\value` = of1("</table>\n"), 
                    `\\describe` = of1("</dl>\n"))
                  inlist <- FALSE
                  inPara <<- FALSE
                }
                if (itemskip) {
                  itemskip <- FALSE
                  if (tag == "TEXT") {
                    txt <- addParaBreaks(htmlify(block))
                    of1(txt)
                  } else writeBlock(block, tag, blocktag)
                } else writeBlock(block, tag, blocktag)
            })
        }
        if (inlist) {
            leavePara(FALSE)
            switch(blocktag, `\\value` = , `\\arguments` = of1("</table>\n"), 
                `\\itemize` = of1("</li></ul>\n"), `\\enumerate` = of1("</li></ol>\n"), 
                `\\describe` = of1("</dl>\n"))
        }
    }
    writeSection <- function(section, tag) {
        if (tag %in% c("\\alias", "\\concept", "\\encoding", 
            "\\keyword")) 
            return()
        leavePara(NA)
        save <- sectionLevel
        sectionLevel <<- sectionLevel + 1L
        if (toc) {
            if (tag %in% c("\\section", "\\subsection")) {
                sec_value <- rdfragment2text(section[[1L]])
                sec_id <- tag2id(name = if (standalone) 
                  NULL
                else name, tagid = rdfragment2text(section[[1L]], 
                  html = FALSE))
            }
            else {
                sec_value <- paste0("<p>", sectionTitles[tag], 
                  "</p>")
                sec_id <- tag2id(tag = tag, name = if (standalone) 
                  NULL
                else name)
            }
            toc_entry <- list(id = trimws(sec_id), value = trimws(sec_value))
            toc_entries <<- c(toc_entries, if (tag == "\\subsection") list(subsection = toc_entry) else list(section = toc_entry))
            of1(paste0("\n\n<h", sectionLevel + 2L, " id='", 
                sec_id, "'>"))
        }
        else of1(paste0("\n\n<h", sectionLevel + 2L, ">"))
        if (concordance) 
            conc$saveSrcref(section)
        if (tag == "\\section" || tag == "\\subsection") {
            title <- section[[1L]]
            section <- section[[2L]]
            writeContent(title, tag)
        }
        else of1(sectionTitles[tag])
        of1(paste0("</h", sectionLevel + 2L, ">\n\n"))
        if (tag == "\\usage") {
            of1("<pre><code class='language-R'>")
            inPara <<- NA
            pre <- TRUE
        }
        else if (tag == "\\examples") {
            if (dynamic && enhancedHTML && !Rhtml && !is.null(firstAlias)) 
                of1(sprintf("<p><a href='../Example/%s'>Run examples</a></p>", 
                  topic2url(firstAlias)))
            if (Rhtml) 
                of1("\n\n<!--begin.rcode\n")
            else of1("<pre><code class='language-R'>")
            inPara <<- NA
            pre <- TRUE
        }
        else {
            inPara <<- FALSE
            pre <- FALSE
        }
        if (length(section)) {
            s1 <- section[[1L]][1L]
            if (RdTags(section)[1] %in% c("TEXT", "RCODE") && 
                s1 == "\n") 
                section <- section[-1L]
            writeContent(section, tag)
        }
        leavePara(FALSE)
        if (pre) 
            if (Rhtml && tag == "\\examples") 
                of1("\nend.rcode-->\n\n")
            else of1("</code></pre>\n")
        sectionLevel <<- save
    }
    writeNav <- function() {
        of0("<nav class=\"topic\" aria-label=\"Section Navigation\">\n", 
            "<div class=\"dropdown-menu\">\n", "<h1>Contents</h1>\n", 
            "<ul class=\"menu\">\n")
        currentLevel <- 1L
        entry_types <- names(toc_entries)
        for (i in seq_along(toc_entries)) {
            newLevel <- if (entry_types[[i]] %in% c("argitem", 
                "subsection")) 
                2L
            else 1L
            if (newLevel > currentLevel) 
                of1("  <ul>")
            else if (newLevel < currentLevel) 
                of1("  </ul>")
            currentLevel <- newLevel
            e <- toc_entries[[i]]
            of0(sprintf("<li><a href='#%s'>%s</a></li>\n", e$id, 
                e$value))
        }
        of0("</ul>\n", "</div>\n", "</nav>")
    }
    info <- list()
    create_redirects <- FALSE
    if (is.character(out)) {
        if (out == "") {
            con <- stdout()
        }
        else {
            con <- file(out, "wt")
            create_redirects <- !dynamic && package_help
            on.exit(close(con))
        }
    }
    else {
        con <- out
        out <- summary(con)$description
    }
    Rd <- prepare_Rd(Rd, defines = defines, stages = stages, 
        fragment = fragment, ...)
    uses_mathjaxr <- function(rd) {
        done <- TRUE
        for (frag in rd) {
            if (attr(frag, "Rd_tag") == "\\description") {
                done <- FALSE
                break
            }
        }
        if (done) 
            return(FALSE)
        for (subfrag in frag) {
            if (identical(attr(subfrag, "Rd_tag"), "USERMACRO") && 
                identical(attr(subfrag, "macro"), "\\loadmathjax")) 
                return(TRUE)
        }
        return(FALSE)
    }
    if (is.null(texmath)) 
        texmath <- "katex"
    if (texmath == "mathjax" && !dynamic) 
        texmath <- "katex"
    doTexMath <- enhancedHTML && !uses_mathjaxr(Rd) && texmath %in% 
        c("katex", "mathjax")
    if (doTexMath && texmath == "katex") {
        KATEX_JS <- if (dynamic) 
            "/doc/html/katex/katex.js"
        else "https://cdn.jsdelivr.net/npm/katex@0.15.3/dist/katex.min.js"
        KATEX_CSS <- if (dynamic) 
            "/doc/html/katex/katex.css"
        else "https://cdn.jsdelivr.net/npm/katex@0.15.3/dist/katex.min.css"
        KATEX_CONFIG <- if (dynamic) 
            "/doc/html/katex-config.js"
        else c("const macros = { \"\\\\R\": \"\\\\textsf{R}\", \"\\\\code\": \"\\\\texttt\"};", 
            "function processMathHTML() {", "    var l = document.getElementsByClassName('reqn');", 
            "    for (let e of l) { katex.render(e.textContent, e, { throwOnError: false, macros }); }", 
            "    return;", "}")
    }
    if (doTexMath && texmath == "mathjax") {
        MATHJAX_JS <- if (dynamic && requireNamespace("mathjaxr", 
            quietly = TRUE)) 
            "/library/mathjaxr/doc/mathjax/es5/tex-chtml-full.js"
        else "https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-chtml-full.js"
        MATHJAX_CONFIG <- if (dynamic) 
            "/doc/html/mathjax-config.js"
        else "../../../doc/html/mathjax-config.js"
    }
    if (enhancedHTML) {
        PRISM_JS <- if (dynamic) 
            "/doc/html/prism.js"
        else NULL
        PRISM_CSS <- if (dynamic) 
            "/doc/html/prism.css"
        else NULL
    }
    Rdfile <- attr(Rd, "Rdfile")
    sections <- RdTags(Rd)
    if (fragment) {
        if (sections[1L] %in% names(sectionOrder)) 
            for (i in seq_along(sections)) writeSection(Rd[[i]], 
                sections[i])
        else for (i in seq_along(sections)) writeBlock(Rd[[i]], 
            sections[i], "")
    }
    else {
        if (create_redirects) 
            createRedirects(out, Rd)
        name <- htmlify(Rd[[2L]][[1L]])
        firstAlias <- trimws(Rd[[which(sections == "\\alias")[1]]][[1]])
        if (concordance) 
            conc$saveSrcref(.Rd_get_section(Rd, "title"))
        headtitle <- strwrap(.Rd_format_title(.Rd_get_title(Rd)), 
            width = 65, initial = "R: ")
        if (length(headtitle) > 1) 
            headtitle <- paste0(headtitle[1], "...")
        if (standalone) {
            hfcomps <- HTMLcomponents(title = headtitle, logo = FALSE, 
                up = NULL, top = NULL, css = stylesheet, outputEncoding = outputEncoding, 
                dynamic = dynamic, prism = enhancedHTML, doTexMath = doTexMath, 
                texmath = texmath, PRISM_CSS_STATIC = NULL, PRISM_JS_STATIC = NULL)
            of1(paste(hfcomps$header, collapse = ""))
            of1("<main>")
            of0("\n\n<table style=\"width: 100%;\">", "<tr><td>", 
                name)
            if (nchar(package)) 
                of0(" {", package, "}")
            of0("</td><td style=\"text-align: right;\">R Documentation</td></tr></table>\n\n")
        }
        if (!standalone) {
            of0("<h2 id='", name2id(name), "'>")
        }
        else of0("<h2>")
        inPara <- NA
        title <- Rd[[1L]]
        info$name <- name
        info$title <- rdfragment2text(title)
        info$htmltitle <- info$title
        info$mathjaxr <- uses_mathjaxr(Rd)
        info$pkgsummary <- FALSE
        if (concordance) 
            conc$saveSrcref(title)
        writeContent(title, sections[1])
        of1("</h2>")
        inPara <- FALSE
        if (!standalone) {
            for (a in trimws(unlist(Rd[which(sections == "\\alias")]))) {
                if (endsWith(a, "-package")) 
                  info$pkgsummary <- TRUE
                of0("<span id='", topic2id(a), "'></span>")
            }
        }
        for (i in seq_along(sections)[-(1:2)]) writeSection(Rd[[i]], 
            sections[i])
        if (nzchar(version)) 
            version <- paste0("Package <em>", package, "</em> version ", 
                version, " ")
        of1("\n")
        if (standalone) {
            if (nzchar(version)) 
                of0("<hr /><div style=\"text-align: center;\">[", 
                  version, if (!no_links) 
                    "<a href=\"00Index.html\">Index</a>", "]</div>")
            of1("</main>\n")
            if (toc) 
                writeNav()
            of1(paste(hfcomps$footer, collapse = ""))
        }
        else attr(out, "info") <- info
    }
    if (concordance) {
        conc$srcFile <- Rdfile
        concdata <- followConcordance(conc$finish(), attr(Rd, 
            "concordance"))
        concdata$srcFile <- stripPathTo(concdata$srcFile, "man")
        attr(out, "concordance") <- concdata
        of0("<!-- ", as.character(concdata), " -->\n")
    }
    invisible(out)
}
