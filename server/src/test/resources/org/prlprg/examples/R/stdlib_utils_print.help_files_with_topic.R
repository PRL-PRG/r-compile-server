#? stdlib
`print.help_files_with_topic` <- function (x, ...) 
{
    browser <- getOption("browser")
    topic <- attr(x, "topic")
    type <- attr(x, "type")
    if (.Platform$GUI == "AQUA" && type == "html") 
        browser <- get("aqua.browser", envir = as.environment("tools:RGUI"))
    paths <- as.character(x)
    if (!length(paths)) {
        writeLines(c(gettextf("No documentation for %s in specified packages and libraries:", 
            sQuote(topic)), gettextf("you could try %s", sQuote(paste0("??", 
            topic)))))
        return(invisible(x))
    }
    port <- if (type == "html") 
        tools::startDynamicHelp(NA)
    else NULL
    if (attr(x, "tried_all_packages")) {
        paths <- unique(dirname(dirname(paths)))
        msg <- gettextf("Help for topic %s is not in any loaded package but can be found in the following packages:", 
            sQuote(topic))
        if (type == "html" && port > 0L) {
            path <- file.path(tempdir(), ".R/doc/html")
            dir.create(path, recursive = TRUE, showWarnings = FALSE)
            out <- paste0("<!DOCTYPE html>\n", "<html>\n", "<head>\n<title>R: help</title>\n", 
                "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n", 
                "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />\n", 
                "<link rel=\"stylesheet\" type=\"text/css\" href=\"/doc/html/R.css\" />\n", 
                "</head>\n<body>\n<div class=\"container\">\n\n<hr>\n")
            out <- c(out, "<p>", msg, "</p><br>")
            out <- c(out, "<table style=\"width: 100%;\">\n", 
                "<tr style=\"text-align: left; vertical-align: top;\">\n", 
                "<td style=\"width: 25%;\">Package</td><td>Library</td></tr>\n")
            pkgs <- basename(paths)
            links <- paste0("<a href=\"http://127.0.0.1:", port, 
                "/library/", pkgs, "/help/", topic, "\">", pkgs, 
                "</a>")
            out <- c(out, paste0("<tr style=\"text-align: left; vertical-align: top;\">\n", 
                "<td>", links, "</td><td>", dirname(paths), "</td></tr>\n"))
            out <- c(out, "</table>\n<hr>\n</div>\n</body>\n</html>")
            writeLines(out, file.path(path, "all.available.html"))
            browseURL(paste0("http://127.0.0.1:", port, "/doc/html/all.available.html"), 
                browser)
        }
        else {
            writeLines(c(strwrap(msg), "", paste0("  ", formatDL(c(gettext("Package"), 
                basename(paths)), c(gettext("Library"), dirname(paths)), 
                indent = 22))))
        }
    }
    else {
        if (length(paths) > 1L) {
            if (type == "html" && port > 0L) {
                browseURL(paste0("http://127.0.0.1:", port, "/library/NULL/help/", 
                  URLencode(topic, reserved = TRUE)), browser)
                return(invisible(x))
            }
            file <- paths[1L]
            p <- paths
            msg <- gettextf("Help on topic %s was found in the following packages:", 
                sQuote(topic))
            paths <- dirname(dirname(paths))
            txt <- formatDL(c("Package", basename(paths)), c("Library", 
                dirname(paths)), indent = 22L)
            writeLines(c(strwrap(msg), "", paste0("  ", txt), 
                ""))
            if (interactive()) {
                fp <- file.path(paths, "Meta", "Rd.rds")
                tp <- basename(p)
                titles <- tp
                if (type == "html" || type == "latex") 
                  tp <- tools::file_path_sans_ext(tp)
                for (i in seq_along(fp)) {
                  tmp <- try(readRDS(fp[i]))
                  titles[i] <- if (inherits(tmp, "try-error")) 
                    "unknown title"
                  else tmp[tools::file_path_sans_ext(tmp$File) == 
                    tp[i], "Title"]
                }
                txt <- paste0(titles, " {", basename(paths), 
                  "}")
                res <- menu(txt, title = gettext("Choose one"), 
                  graphics = getOption("menu.graphics"))
                if (res > 0) 
                  file <- p[res]
            }
            else {
                writeLines(gettext("\nUsing the first match ..."))
            }
        }
        else file <- paths
        if (type == "html") {
            if (port > 0L) {
                path <- dirname(file)
                dirpath <- dirname(path)
                pkgname <- basename(dirpath)
                browseURL(paste0("http://127.0.0.1:", port, "/library/", 
                  pkgname, "/html/", basename(file), ".html"), 
                  browser)
            }
            else {
                warning("HTML help is unavailable", call. = FALSE)
                att <- attributes(x)
                xx <- sub("/html/([^/]*)\\.html$", "/help/\\1", 
                  x)
                attributes(xx) <- att
                attr(xx, "type") <- "text"
                print(xx)
            }
        }
        else if (type == "text") {
            pkgname <- basename(dirname(dirname(file)))
            temp <- tools::Rd2txt(.getHelpFile(file), out = tempfile("Rtxt"), 
                package = pkgname)
            file.show(temp, title = gettextf("R Help on %s", 
                sQuote(topic)), delete.file = TRUE)
        }
        else if (type %in% "pdf") {
            path <- dirname(file)
            dirpath <- dirname(path)
            texinputs <- file.path(dirpath, "help", "figures")
            tf2 <- tempfile("Rlatex")
            tools::Rd2latex(.getHelpFile(file), out = tf2)
            .show_help_on_topic_offline(tf2, topic, type, texinputs)
            unlink(tf2)
        }
    }
    invisible(x)
}
