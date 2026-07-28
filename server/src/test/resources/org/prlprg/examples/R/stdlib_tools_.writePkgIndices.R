#? stdlib
`.writePkgIndices` <- function (dir, outDir, OS = .Platform$OS.type, html = TRUE) 
{
    re <- function(x) {
        xx <- rep.int(TRUE, length(x))
        xx[grep("-package", x, fixed = TRUE)] <- FALSE
        order(xx, toupper(x), x)
    }
    html_header <- function(pkg, title, version, conn) {
        cat(paste(HTMLheader(title, Rhome = "../../..", up = "../../../doc/html/packages.html", 
            css = "R.css"), collapse = "\n"), "<h2>Documentation for package &lsquo;", 
            pkg, "&rsquo; version ", version, "</h2>\n\n", sep = "", 
            file = conn)
        cat("<ul><li><a href=\"../DESCRIPTION\">DESCRIPTION file</a>.</li>\n", 
            file = conn)
        if (file.exists(file.path(outDir, "doc"))) 
            cat("<li><a href=\"../doc/index.html\">User guides, package vignettes and other documentation.</a></li>\n", 
                file = conn)
        if (file.exists(file.path(outDir, "demo"))) 
            cat("<li><a href=\"../demo\">Code demos</a>.  Use <a href=\"../../utils/help/demo\">demo()</a> to run them.</li>\n", 
                sep = "", file = conn)
        if (any(file.exists(file.path(outDir, c("NEWS", "NEWS.Rd", 
            "NEWS.md"))))) 
            cat("<li><a href=\"../NEWS\">Package NEWS</a>.</li>\n", 
                sep = "", file = conn)
        cat("</ul>\n\n<h2>Help Pages</h2>\n\n\n", sep = "", file = conn)
    }
    firstLetterCategory <- function(x) {
        x[endsWith(x, "-package")] <- " "
        x <- toupper(substr(x, 1, 1))
        x[x > "Z"] <- "misc"
        x[x < "A" & x != " "] <- "misc"
        x
    }
    Rd <- if (file.exists(f <- file.path(outDir, "Meta", "Rd.rds"))) 
        readRDS(f)
    else {
        db <- tryCatch(Rd_db(basename(outDir), lib.loc = dirname(outDir)), 
            error = function(e) NULL)
        if (is.null(db)) 
            db <- Rd_db(dir = dir)
        Rd <- Rd_contents(db)
        saveRDS(Rd, file.path(outDir, "Meta", "Rd.rds"))
        Rd
    }
    topics <- Rd$Aliases
    M <- if (!length(topics)) {
        list2DF(list(Topic = character(), File = character(), 
            Title = character(), Internal = character()))
    }
    else {
        lens <- lengths(topics)
        files <- sub("\\.[Rr]d$", "", Rd$File)
        internal <- (vapply(Rd$Keywords, function(x) match("internal", 
            x, 0L), 0L) > 0L)
        list2DF(list(Topic = unlist(topics), File = rep.int(files, 
            lens), Title = rep.int(Rd$Title, lens), Internal = rep.int(internal, 
            lens)))
    }
    outman <- file.path(outDir, "help")
    dir.create(outman, showWarnings = FALSE)
    MM <- M[re(M[, 1L]), 1:2]
    utils::write.table(MM, file.path(outman, "AnIndex"), quote = FALSE, 
        row.names = FALSE, col.names = FALSE, sep = "\t")
    a <- structure(MM[, 2L], names = MM[, 1L])
    saveRDS(a, file.path(outman, "aliases.rds"))
    outman <- file.path(outDir, "html")
    dir.create(outman, showWarnings = FALSE)
    outcon <- file(file.path(outman, "00Index.html"), "wt")
    on.exit(close(outcon))
    desc <- read.dcf(file.path(outDir, "DESCRIPTION"))[1L, ]
    if (!is.na(enc <- desc["Encoding"])) {
        desc <- iconv(desc, enc, "UTF-8", sub = "byte")
    }
    M <- M[!M[, 4L], ]
    if (desc["Package"] %in% c("base", "graphics", "stats", "utils")) {
        for (pass in 1:2) {
            gen <- gsub("\\.data\\.frame", ".data_frame", M$Topic)
            gen <- sub("\\.model\\.matrix$", ".modelmatrix", 
                gen)
            gen <- sub("^(all|as|is|file|Sys|row|na|model)\\.", 
                "\\1_", gen)
            gen <- sub("^(.*)\\.test", "\\1_test", gen)
            gen <- sub("([-[:alnum:]]+)\\.[^.]+$", "\\1", gen)
            last <- nrow(M)
            nongen <- gen %in% c("ar", "bw", "contr", "dyn", 
                "lm", "qr", "ts", "which", ".Call", ".External", 
                ".Library", ".First", ".Last")
            nc <- nchar(gen)
            asg <- (nc > 3) & endsWith(gen, "<-")
            skip <- (gen == c("", gen[-last])) & (M$File == c("", 
                M$File[-last])) & !nongen
            skip <- skip | asg
            M <- M[!skip, ]
        }
    }
    M$Topic <- sub("^([^,]*),.*-method$", "\\1-method", M$Topic)
    M <- M[!duplicated(M[, c("Topic", "File")]), ]
    M <- M[re(M[, 1L]), ]
    htmlize <- function(x, backtick) {
        x <- gsub("&", "&amp;", x, fixed = TRUE)
        x <- gsub("<", "&lt;", x, fixed = TRUE)
        x <- gsub(">", "&gt;", x, fixed = TRUE)
        if (backtick) {
            x <- gsub("---", "-", x, fixed = TRUE)
            x <- gsub("--", "-", x, fixed = TRUE)
        }
        x
    }
    M$HTopic <- htmlize(M$Topic, FALSE)
    M$Title <- htmlize(M$Title, TRUE)
    html_header(desc["Package"], htmlize(desc["Title"], TRUE), 
        desc["Version"], outcon)
    use_alpha <- (nrow(M) > 100)
    if (use_alpha) {
        first <- firstLetterCategory(M$Topic)
        nm <- sort(names(table(first)))
        m <- match(" ", nm, 0L)
        if (m) 
            nm <- c(" ", nm[-m])
        m <- match("misc", nm, 0L)
        if (m) 
            nm <- c(nm[-m], "misc")
        writeLines(c("<p style=\"text-align: center;\">", paste0("<a href=\"#", 
            nm, "\">", nm, "</a>"), "</p>\n"), outcon)
        for (f in nm) {
            MM <- M[first == f, ]
            if (f != " ") 
                cat("\n<h2><a id=\"", f, "\">-- ", f, " --</a></h2>\n\n", 
                  sep = "", file = outcon)
            writeLines(c("<table style=\"width: 100%;\">", paste0("<tr><td style=\"width: 25%;\"><a href=\"", 
                MM[, 2L], ".html\">", MM$HTopic, "</a></td>\n<td>", 
                MM[, 3L], "</td></tr>"), "</table>"), outcon)
        }
    }
    else if (nrow(M)) {
        writeLines(c("<table style=\"width: 100%;\">", paste0("<tr><td style=\"width: 25%;\"><a href=\"", 
            M[, 2L], ".html\">", M$HTopic, "</a></td>\n<td>", 
            M[, 3L], "</td></tr>"), "</table>"), outcon)
    }
    else {
        writeLines("There are no help pages in this package", 
            outcon)
    }
    writeLines("</div></body></html>", outcon)
    file.copy(file.path(R.home("doc"), "html", "R.css"), outman)
    invisible(NULL)
}
