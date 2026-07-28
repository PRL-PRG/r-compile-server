#? stdlib
`httpd` <- function (path, query, ...) 
{
    logHelpRequests <- config_val_to_logical(Sys.getenv("_R_HTTPD_LOG_MESSAGES_", 
        "FALSE"))
    if (logHelpRequests) {
        message(sprintf("HTTPD-REQUEST %s%s", path, if (is.null(query)) 
            ""
        else {
            paste(paste(names(query), query, sep = "="), collapse = ",")
        }))
    }
    linksToTopics <- config_val_to_logical(Sys.getenv("_R_HELP_LINKS_TO_TOPICS_", 
        "TRUE"))
    .HTMLdirListing <- function(dir, base, up) {
        files <- list.files(dir)
        out <- HTMLheader(paste0("Listing of directory<br/>", 
            dir), headerTitle = paste("R:", dir), logo = FALSE, 
            up = up)
        if (!length(files)) 
            out <- c(out, gettext("No files in this directory"))
        else {
            urls <- paste0("<a href=\"", base, "/", files, "\">", 
                files, "</a>")
            out <- c(out, "<dl>", paste0("<dd>", mono(iconv(urls, 
                "", "UTF-8")), "</dd>"), "</dl>")
        }
        out <- c(out, "<hr/>\n</div></body></html>")
        list(payload = paste(out, collapse = "\n"))
    }
    .HTMLusermanuals <- function() {
        pkgs <- unlist(.get_standard_package_names())
        out <- HTMLheader("R User Manuals")
        for (pkg in pkgs) {
            vinfo <- getVignetteInfo(pkg)
            if (nrow(vinfo)) 
                out <- c(out, paste0("<h2>Manuals in package", 
                  sQuote(pkg), "</h2>"), makeVignetteTable(cbind(Package = pkg, 
                  vinfo[, c("File", "Title", "PDF", "R"), drop = FALSE])))
        }
        out <- c(out, "<hr/>\n</div></body></html>")
        list(payload = paste(out, collapse = "\n"))
    }
    .HTMLsearch <- function(query) {
        bool <- function(x) as.logical(as.numeric(x))
        res <- if (identical(names(query), "category")) {
            utils::help.search(keyword = query, verbose = 1L, 
                use_UTF8 = TRUE)
        }
        else if (identical(names(query), c("objects", "port"))) {
            .httpd_objects(query["port"])
        }
        else {
            fields <- types <- NULL
            args <- list(pattern = ".")
            for (i in seq_along(query)) switch(names(query)[i], 
                pattern = args$pattern <- query[i], fields.alias = if (bool(query[i])) fields <- c(fields, 
                  "alias"), fields.title = if (bool(query[i])) fields <- c(fields, 
                  "title"), fields.concept = if (bool(query[i])) fields <- c(fields, 
                  "concept"), fields.keyword = if (bool(query[i])) fields <- c(fields, 
                  "keyword"), ignore.case = args$ignore.case <- bool(query[i]), 
                agrep = args$agrep <- bool(query[i]), types.help = if (bool(query[i])) types <- c(types, 
                  "help"), types.vignette = if (bool(query[i])) types <- c(types, 
                  "vignette"), types.demo = if (bool(query[i])) types <- c(types, 
                  "demo"), package = args$package <- strsplit(query[i], 
                  ";")[[1L]], lib.loc = args$lib.loc <- strsplit(query[i], 
                  ";")[[1L]], warning("Unrecognized search field: ", 
                  names(query)[i], domain = NA))
            args$fields <- fields
            args$use_UTF8 <- TRUE
            args$types <- types
            do.call(utils::help.search, args)
        }
        types <- res$types
        res <- res$matches
        title <- "Search Results"
        out <- c(HTMLheader(title), if ("pattern" %in% names(query) && 
            nchar(query["pattern"])) paste0("The search string was <b>\"", 
            query["pattern"], "\"</b>"), "<hr/>\n")
        if (!NROW(res)) 
            out <- c(out, gettext("No results found"))
        else {
            vigfile0 <- ""
            vigDB <- NULL
            for (type in types) {
                if (NROW(temp <- res[res[, "Type"] == type, , 
                  drop = FALSE]) > 0) {
                  temp <- temp[!duplicated(temp[, "ID"]), , drop = FALSE]
                  switch(type, vignette = {
                    out <- c(out, paste0("<h3>", gettext("Vignettes:"), 
                      "</h3>"), "<dl>")
                    n <- NROW(temp)
                    vignettes <- matrix("", n, 5L)
                    colnames(vignettes) <- c("Package", "File", 
                      "Title", "PDF", "R")
                    for (i in seq_len(NROW(temp))) {
                      topic <- temp[i, "Topic"]
                      pkg <- temp[i, "Package"]
                      vigfile <- file.path(temp[i, "LibPath"], 
                        "Meta", "vignette.rds")
                      if (!identical(vigfile, vigfile0)) {
                        vigDB <- readRDS(vigfile)
                        vigfile0 <- vigfile
                      }
                      vignette <- vigDB[topic == file_path_sans_ext(vigDB$PDF), 
                        ]
                      vignettes[i, ] <- c(pkg, unlist(vignette[1, 
                        c("File", "Title", "PDF", "R")]))
                    }
                    out <- c(out, makeVignetteTable(vignettes))
                  }, demo = {
                    out <- c(out, paste0("<h3>", gettext("Code demonstrations:"), 
                      "</h3>"))
                    out <- c(out, makeDemoTable(temp))
                  }, help = {
                    out <- c(out, paste0("<h3>", gettext("Help pages:"), 
                      "</h3>"))
                    out <- c(out, makeHelpTable(temp))
                  })
                }
            }
        }
        out <- c(out, "<hr/>\n</div></body></html>")
        list(payload = paste(out, collapse = "\n"))
    }
    .HTML_hsearch_db_concepts <- function() {
        concepts <- utils::hsearch_db_concepts()
        s <- concepts$Concept
        out <- c(HTMLheader("Help search concepts"), c("", "<table>", 
            "<tr><th style=\"text-align: left\">Concept</th><th>Frequency</th><th>Packages</th></tr>", 
            paste0("<tr><td>", "<a href=\"/doc/html/Search?pattern=", 
                utils::URLencode(reQuote(s), reserved = TRUE), 
                "&amp;fields.concept=1&amp;agrep=0\">", shtmlify(substr(s, 
                  1L, 80L)), "</a>", "</td><td style=\"text-align: right\">", 
                concepts$Frequency, "</td><td style=\"text-align: right\">", 
                concepts$Packages, "</td></tr>"), "</table>", 
            "</div></body>", "</html>"))
        list(payload = paste(out, collapse = "\n"))
    }
    .HTML_hsearch_db_keywords <- function() {
        keywords <- utils::hsearch_db_keywords()
        out <- c(HTMLheader("Help search keywords"), c("", "<table>", 
            "<tr><th style=\"text-align: left\">Keyword</th><th style=\"text-align: left\">Concept</th><th>Frequency</th><th>Packages</th></tr>", 
            paste0("<tr><td>", "<a href=\"/doc/html/Search?category=", 
                keywords$Keyword, "\">", keywords$Keyword, "</a>", 
                "</td><td>", shtmlify(substr(keywords$Concept, 
                  1L, 80L)), "</td><td style=\"text-align: right\">", 
                keywords$Frequency, "</td><td style=\"text-align: right\">", 
                keywords$Packages, "</td></tr>"), "</table>", 
            "</div></body>", "</html>"))
        list(payload = paste(out, collapse = "\n"))
    }
    .HTML_package_description <- function(descfile) {
        pkg <- basename(dirname(descfile))
        out <- c(HTMLheader(sprintf("Package &lsquo;%s&rsquo;", 
            pkg)), .DESCRIPTION_to_HTML(descfile, dynamic = TRUE), 
            "</div></body></html>")
        list(payload = paste(out, collapse = "\n"))
    }
    charsetSetting <- function(pkg) {
        encoding <- read.dcf(system.file("DESCRIPTION", package = pkg), 
            "Encoding")
        if (is.na(encoding)) 
            ""
        else paste0("; charset=", encoding)
    }
    sQuote <- function(text) paste0("&lsquo;", text, "&rsquo;")
    mono <- function(text) paste0("<span class=\"samp\">", text, 
        "</span>")
    error_page <- function(msg) {
        if (logHelpRequests) {
            message(sprintf("HTTPD-ERROR %s %s", path, paste(msg, 
                collapse = " ")))
        }
        list(payload = paste(c(HTMLheader("httpd error"), msg, 
            "\n</div></body></html>"), collapse = "\n"))
    }
    cssRegexp <- "^/library/([^/]*)/html/R.css$"
    if (grepl("R\\.css$", path) && !grepl(cssRegexp, path)) {
        if (isTRUE(getOption("help.htmltoc"))) 
            return(list(file = file.path(R.home("doc"), "html", 
                "R-nav.css"), `content-type` = "text/css"))
        else return(list(file = file.path(R.home("doc"), "html", 
            "R.css"), `content-type` = "text/css"))
    }
    else if (path == "/favicon.ico") 
        return(list(file = file.path(R.home("doc"), "html", "favicon.ico"), 
            `content-type` = "image/x-icon"))
    else if (path == "/NEWS") 
        return(list(file = file.path(R.home("doc"), "html", "NEWS.html"), 
            `content-type` = "text/html"))
    else if (grepl("^/NEWS[.][[:digit:]]$", path)) 
        return(list(file = file.path(R.home("doc"), sub("/", 
            "", path, fixed = TRUE)), `content-type` = "text/plain; charset=utf-8"))
    else if ((path == "/doc/html/NEWS.html") && identical(names(query), 
        c("objects", "port"))) {
        news <- .httpd_objects(query["port"])
        formatted <- toHTML(news, title = "R News")
        return(list(payload = paste(formatted, collapse = "\n")))
    }
    else if (grepl("^/licenses/([^/.]*)$", path) && file.exists(file <- file.path(R.home("share"), 
        "licenses", basename(path)))) 
        return(list(file = file, `content-type` = "text/plain; charset=utf-8"))
    else if (!grepl("^/(doc|library|session)/", path)) 
        return(error_page(paste("Only NEWS and URLs under", mono("/doc"), 
            "and", mono("/library"), "are allowed")))
    else if (path == "/doc/html/UserManuals.html") 
        return(.HTMLusermanuals())
    else if (path == "/doc/html/hsearch_db_concepts.html") 
        return(.HTML_hsearch_db_concepts())
    else if (path == "/doc/html/hsearch_db_keywords.html") 
        return(.HTML_hsearch_db_keywords())
    fileRegexp <- "^/library/+([^/]*)/html/([^/]*)\\.html$"
    topicRegexp <- "^/library/+([^/]*)/help/(.*)$"
    docRegexp <- "^/library/([^/]*)/doc(.*)"
    demoRegexp <- "^/library/([^/]*)/demo$"
    demosRegexp <- "^/library/([^/]*)/demo/([^/]*)$"
    DemoRegexp <- "^/library/([^/]*)/Demo/([^/]*)$"
    ExampleRegexp <- "^/library/([^/]*)/Example/([^/]*)$"
    newsRegexp <- "^/library/([^/]*)/NEWS$"
    figureRegexp <- "^/library/([^/]*)/(help|html)/figures/([^/]*)$"
    sessionRegexp <- "^/session/"
    packageIndexRegexp <- "^/library/([^/]*)$"
    packageLicenseFileRegexp <- "^/library/([^/]*)/(LICEN[SC]E$)"
    file <- NULL
    if (grepl(topicRegexp, path)) {
        pkg <- sub(topicRegexp, "\\1", path)
        if (pkg == "NULL") 
            pkg <- NULL
        topic <- sub(topicRegexp, "\\2", path)
        if (!is.null(pkg)) {
            if (!nzchar(system.file(package = pkg))) {
                msg <- gettextf("No package named %s could be found", 
                  mono(pkg))
                return(error_page(msg))
            }
            file <- utils::help(topic, package = (pkg), help_type = "text")
            if (!length(file) && linksToTopics) {
                helppath <- system.file("help", package = pkg)
                if (nzchar(helppath)) {
                  contents <- readRDS(sub("/help$", "/Meta/Rd.rds", 
                    helppath, fixed = FALSE))
                  helpfiles <- sub("\\.[Rr]d$", "", contents$File)
                  if (topic %in% helpfiles) 
                    file <- file.path(helppath, topic)
                }
            }
        }
        if (!length(file)) 
            file <- utils::help(topic, help_type = "text", try.all.packages = TRUE)
        if (!length(file)) {
            msg <- gettextf("No help found for topic %s in any package.", 
                mono(topic))
            return(error_page(msg))
        }
        else if (length(file) == 1L) {
            path <- dirname(dirname(file))
            file <- paste0("../../", basename(path), "/html/", 
                basename(file), ".html")
            return(list(payload = paste0("Redirect to <a href=\"", 
                file, "\">\"", basename(file), "\"</a>"), `content-type` = "text/html", 
                header = paste0("Location: ", file), `status code` = 302L))
        }
        else if (length(file) > 1L) {
            paths <- dirname(dirname(file))
            fp <- file.path(paths, "Meta", "Rd.rds")
            tp <- basename(file)
            titles <- tp
            for (i in seq_along(fp)) {
                tmp <- try(readRDS(fp[i]))
                titles[i] <- if (inherits(tmp, "try-error")) 
                  "unknown title"
                else tmp[file_path_sans_ext(tmp$File) == tp[i], 
                  "Title"]
            }
            packages <- paste0("<dt><a href=\"../../", basename(paths), 
                "/html/", basename(file), ".html\">", titles, 
                "</a></dt><dd> (in package <a href=\"../../", 
                basename(paths), "/html/00Index.html\">", basename(paths), 
                "</a> in library ", dirname(paths), ")</dd>", 
                collapse = "\n")
            return(list(payload = paste0("<!DOCTYPE html>", "<html>", 
                "<head>", "<title>R: help</title>", "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />", 
                "</head>", "<body>", "<p>", sprintf(ngettext(length(paths), 
                  "Help on topic '%s' was found in the following package:", 
                  "Help on topic '%s' was found in the following packages:"), 
                  topic), "</p><dl>\n", packages, "</dl>", "</body>", 
                "</html>", collapse = "\n")))
        }
    }
    else if (grepl(fileRegexp, path)) {
        pkg <- sub(fileRegexp, "\\1", path)
        helpdoc <- sub(fileRegexp, "\\2", path)
        if (helpdoc == "00Index") {
            file <- system.file("html", "00Index.html", package = pkg)
            if (!nzchar(file) || !file.exists(file)) {
                msg <- if (nzchar(system.file(package = pkg))) 
                  gettextf("No package index found for package %s", 
                    mono(pkg))
                else gettextf("No package named %s could be found", 
                  mono(pkg))
                return(error_page(msg))
            }
            else {
                return(list(file = file))
            }
        }
        path <- system.file("help", package = pkg)
        if (!nzchar(path)) {
            msg <- if (nzchar(system.file(package = pkg))) 
                gettextf("No help found for package %s", mono(pkg))
            else gettextf("No package named %s could be found", 
                mono(pkg))
            return(error_page(msg))
        }
        contents <- readRDS(sub("/help$", "/Meta/Rd.rds", path, 
            fixed = FALSE))
        files <- sub("\\.[Rr]d$", "", contents$File)
        if (helpdoc %notin% files) {
            aliases <- contents$Aliases
            lens <- lengths(aliases)
            aliases <- structure(rep.int(contents$File, lens), 
                names = unlist(aliases))
            tmp <- sub("\\.[Rr]d$", "", aliases[helpdoc])
            if (is.na(tmp)) {
                msg <- gettextf("Link %s in package %s could not be located", 
                  mono(helpdoc), mono(pkg))
                files <- utils::help(helpdoc, help_type = "text", 
                  try.all.packages = TRUE)
                if (length(files)) {
                  path <- dirname(dirname(files))
                  files <- paste0("/library/", basename(path), 
                    "/html/", basename(files), ".html")
                  msg <- c(msg, "<br/>", "However, you might be looking for one of", 
                    "<p></p>", paste0("<p><a href=\"", files, 
                      "\">", mono(files), "</a></p>"))
                }
                return(error_page(paste(msg, collapse = "\n")))
            }
            helpdoc <- tmp
        }
        dirpath <- dirname(path)
        outfile <- tempfile("Rhttpd")
        Rd2HTML(utils:::.getHelpFile(file.path(path, helpdoc)), 
            out = outfile, package = dirpath, dynamic = TRUE, 
            outputEncoding = "UTF-8")
        on.exit(unlink(outfile))
        return(list(payload = paste(readLines(file(outfile, encoding = "UTF-8")), 
            collapse = "\n")))
    }
    else if (grepl(docRegexp, path)) {
        pkg <- sub(docRegexp, "\\1", path)
        rest <- sub(docRegexp, "\\2", path)
        docdir <- system.file("doc", package = pkg)
        up <- paste0("/library/", pkg, "/html/00Index.html")
        if (!nzchar(docdir)) 
            return(error_page(gettextf("No docs found for package %s", 
                mono(pkg))))
        if (nzchar(rest) && rest != "/") {
            file <- paste0(docdir, rest)
            exists <- file.exists(file)
            if (!exists && rest == "/index.html") {
                rest <- ""
                file <- docdir
            }
            if (dir.exists(file)) 
                return(.HTMLdirListing(file, paste0("/library/", 
                  pkg, "/doc", rest), up))
            else if (exists) 
                return(list(file = file, `content-type` = mime_type(rest)))
            else return(error_page(gettextf("URL %s was not found", 
                mono(path))))
        }
        else {
            return(.HTMLdirListing(docdir, paste("/library", 
                pkg, "doc", sep = "/"), up))
        }
    }
    else if (grepl(demoRegexp, path)) {
        pkg <- sub(demoRegexp, "\\1", path)
        url <- paste0("http://127.0.0.1:", httpdPort(), "/doc/html/Search?package=", 
            pkg, "&agrep=0&types.demo=1&pattern=")
        return(list(payload = paste0("Redirect to <a href=\"", 
            url, "\">help.search()</a>"), `content-type` = "text/html", 
            header = paste0("Location: ", url), `status code` = 302L))
    }
    else if (grepl(demosRegexp, path)) {
        pkg <- sub(demosRegexp, "\\1", path)
        demo <- sub(demosRegexp, "\\2", path)
        file <- system.file(file.path("demo", demo), package = pkg)
        return(list(file = file, `content-type` = mime_type(demo)))
    }
    else if (grepl(DemoRegexp, path)) {
        pkg <- sub(DemoRegexp, "\\1", path)
        demo <- sub(DemoRegexp, "\\2", path)
        if (logHelpRequests) {
            message(sprintf("HTTPD-DEMO %s::%s", pkg, demo))
        }
        else return(demo2html(demo, pkg))
    }
    else if (grepl(ExampleRegexp, path)) {
        pkg <- sub(ExampleRegexp, "\\1", path)
        topic <- sub(ExampleRegexp, "\\2", path)
        if (logHelpRequests) {
            message(sprintf("HTTPD-EXAMPLE %s::%s", pkg, topic))
        }
        else return(example2html(topic, pkg, env = if (identical(query["local"], 
            "FALSE")) .GlobalEnv else NULL))
    }
    else if (grepl(newsRegexp, path)) {
        pkg <- sub(newsRegexp, "\\1", path)
        if (identical(names(query), c("objects", "port"))) 
            news <- .httpd_objects(query["port"])
        else {
            if (!is.null(query) && !is.na(subset <- query["subset"])) {
                rle <- strsplit(subset, "_")[[1L]]
                rle <- structure(list(lengths = as.numeric(rle), 
                  values = rep_len(c(TRUE, FALSE), length(rle))), 
                  class = "rle")
                news <- news(inverse.rle(rle)[-1L], package = pkg)
            }
            else news <- news(package = pkg)
        }
        if (!inherits(news, "news_db")) 
            return(error_page(gettextf("No NEWS found for package %s", 
                mono(pkg))))
        formatted <- toHTML(news, title = paste("NEWS in package", 
            sQuote(pkg)), up = "html/00Index.html")
        if (length(formatted)) 
            return(list(payload = paste(formatted, collapse = "\n")))
        else return(list(file = system.file("NEWS", package = pkg), 
            `content-type` = paste0("text/plain", charsetSetting(pkg))))
    }
    else if (grepl(figureRegexp, path)) {
        pkg <- sub(figureRegexp, "\\1", path)
        fig <- sub(figureRegexp, "\\3", path)
        file <- system.file("help", "figures", fig, package = pkg)
        return(list(file = file, `content-type` = mime_type(fig)))
    }
    else if (grepl(sessionRegexp, path)) {
        tail <- sub(sessionRegexp, "", path)
        file <- file.path(tempdir(), tail)
        return(list(file = file, `content-type` = mime_type(tail)))
    }
    else if (grepl(cssRegexp, path)) {
        pkg <- sub(cssRegexp, "\\1", path)
        return(list(file = system.file("html", "R.css", package = pkg), 
            `content-type` = "text/css"))
    }
    else if (grepl(packageIndexRegexp, path)) {
        url <- paste0(path, "/html/00Index.html")
        return(list(payload = paste0("Redirect to <a href=\"", 
            url, "\">\"", url, "\"</a>"), `content-type` = "text/html", 
            header = paste0("Location: ", url), `status code` = 302L))
    }
    else if (grepl(packageLicenseFileRegexp, path) && file.exists(file <- system.file(basename(path), 
        package = basename(dirname(path))))) {
        return(list(file = file, `content-type` = "text/plain; charset=utf-8"))
    }
    else if (startsWith(path, "/library/")) {
        descRegexp <- "^/library/+([^/]+)/+DESCRIPTION$"
        if (grepl(descRegexp, path)) {
            pkg <- sub(descRegexp, "\\1", path)
            file <- system.file("DESCRIPTION", package = pkg)
            return(.HTML_package_description(file))
        }
        else return(error_page(gettextf("Only help files, %s, %s and files under %s and %s in a package can be viewed", 
            mono("NEWS"), mono("DESCRIPTION"), mono("doc/"), 
            mono("demo/"))))
    }
    if (path == "/doc/html/Search.html") {
        list(file = file.path(R.home("doc"), "html/SearchOn.html"))
    }
    else if (path == "/doc/html/Search") {
        .HTMLsearch(query)
    }
    else if (path == "/doc/html/packages.html") {
        utils::make.packages.html(temp = TRUE)
        list(file = file.path(tempdir(), ".R", path))
    }
    else if (path == "/doc/html/rw-FAQ.html") {
        file <- file.path(R.home("doc"), sub("^/doc", "", path))
        if (file.exists(file)) 
            list(file = file, `content-type` = mime_type(path))
        else {
            url <- "https://cran.r-project.org/bin/windows/base/rw-FAQ.html"
            return(list(payload = paste0("Redirect to <a href=\"", 
                url, "\">\"", url, "\"</a>"), `content-type` = "text/html", 
                header = paste0("Location: ", url), `status code` = 302L))
        }
    }
    else if (grepl("doc/html/.*html$", path) && file.exists(tmp <- file.path(tempdir(), 
        ".R", path))) {
        list(file = tmp)
    }
    else if (grepl("doc/manual/.*html$", path)) {
        file <- file.path(R.home("doc"), sub("^/doc", "", path))
        if (file.exists(file)) 
            list(file = file, `content-type` = mime_type(path))
        else if (file.exists(file <- sub("/manual/", "/html/", 
            file, fixed = TRUE))) {
            list(file = file, `content-type` = mime_type(path))
        }
        else {
            version <- if (grepl("unstable", R.version$status)) 
                "r-devel"
            else "r-patched"
            url <- file.path("https://cran.r-project.org/doc/manuals", 
                version, basename(path))
            return(list(payload = paste0("Redirect to <a href=\"", 
                url, "\">\"", url, "\"</a>"), `content-type` = "text/html", 
                header = paste0("Location: ", url), `status code` = 302L))
        }
    }
    else {
        if (startsWith(path, "/doc/")) {
            file <- file.path(R.home("doc"), sub("^/doc", "", 
                path))
        }
        else return(error_page(gettextf("unsupported URL %s", 
            mono(path))))
        if (!file.exists(file)) 
            error_page(gettextf("URL %s was not found", mono(path)))
        else list(file = file, `content-type` = mime_type(path))
    }
}
