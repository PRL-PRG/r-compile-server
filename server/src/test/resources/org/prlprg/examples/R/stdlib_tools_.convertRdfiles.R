#? stdlib
`.convertRdfiles` <- function (dir, outDir, types = "html", silent = FALSE, outenc = "UTF-8") 
{
    showtype <- function(type) {
        if (!shown) {
            nc <- nchar(bf)
            if (nc < 38L) 
                cat("    ", bf, rep.int(" ", 40L - nc), sep = "")
            else cat("    ", bf, "\n", rep.int(" ", 44L), sep = "")
            shown <<- TRUE
        }
        cat(type, rep.int(" ", max(0L, 6L - nchar(type))), sep = "")
    }
    dirname <- c("html", "latex", "R-ex")
    ext <- c(".html", ".tex", ".R")
    names(dirname) <- names(ext) <- c("html", "latex", "example")
    mandir <- file.path(dir, "man")
    if (!dir.exists(mandir)) 
        return()
    desc <- readRDS(file.path(outDir, "Meta", "package.rds"))$DESCRIPTION
    pkg <- desc["Package"]
    ver <- desc["Version"]
    for (type in types) dir.create(file.path(outDir, dirname[type]), 
        showWarnings = FALSE)
    cat("  converting help for package ", sQuote(pkg), "\n", 
        sep = "")
    if ("html" %in% types) {
        if (!silent) 
            message("    finding HTML links ...", appendLF = FALSE, 
                domain = NA)
        Links <- findHTMLlinks(outDir, level = 0:1)
        if (!silent) 
            message(" done")
        .Links2 <- function() {
            message("\n    finding level-2 HTML links ...", appendLF = FALSE, 
                domain = NA)
            Links2 <- findHTMLlinks(level = 2)
            message(" done", domain = NA)
            Links2
        }
        delayedAssign("Links2", .Links2())
    }
    db <- tryCatch(Rd_db(basename(outDir), lib.loc = dirname(outDir)), 
        error = function(e) NULL)
    if (is.null(db)) 
        db <- Rd_db(dir = dir)
    if (!length(db)) 
        return()
    .whandler <- function(e) {
        .messages <<- c(.messages, paste("Rd warning:", conditionMessage(e)))
        tryInvokeRestart("muffleWarning")
    }
    .ehandler <- function(e) {
        message("", domain = NA)
        unlink(ff)
        stop(conditionMessage(e), domain = NA, call. = FALSE)
    }
    .convert <- function(expr) withCallingHandlers(tryCatch(expr, 
        error = .ehandler), warning = .whandler)
    files <- names(db)
    for (nf in files) {
        .messages <- character()
        Rd <- db[[nf]]
        attr(Rd, "source") <- NULL
        bf <- sub("\\.[Rr]d$", "", basename(nf))
        f <- attr(Rd, "Rdfile")
        shown <- FALSE
        if ("html" %in% types) {
            type <- "html"
            ff <- file.path(outDir, dirname[type], paste0(bf, 
                ext[type]))
            if (!file_test("-f", ff) || file_test("-nt", f, ff)) {
                showtype(type)
                .convert(Rd2HTML(Rd, ff, package = c(pkg, ver), 
                  defines = NULL, Links = Links, Links2 = Links2))
            }
        }
        if ("latex" %in% types) {
            type <- "latex"
            ff <- file.path(outDir, dirname[type], paste0(bf, 
                ext[type]))
            if (!file_test("-f", ff) || file_test("-nt", f, ff)) {
                showtype(type)
                .convert(Rd2latex(Rd, ff, defines = NULL, outputEncoding = outenc))
            }
        }
        if ("example" %in% types) {
            type <- "example"
            ff <- file.path(outDir, dirname[type], paste0(bf, 
                ext[type]))
            if (!file_test("-f", ff) || file_test("-nt", f, ff)) {
                .convert(Rd2ex(Rd, ff, defines = NULL))
                if (file_test("-f", ff)) 
                  showtype(type)
            }
        }
        if (shown) {
            cat("\n")
            if (length(.messages)) 
                writeLines(unique(.messages))
        }
    }
    bfs <- sub("\\.[Rr]d$", "", basename(files))
    if ("html" %in% types) {
        type <- "html"
        have <- list.files(file.path(outDir, dirname[type]))
        have2 <- sub(".html", "", basename(have), fixed = TRUE)
        drop <- have[have2 %notin% c(bfs, "00Index", "R.css")]
        unlink(file.path(outDir, dirname[type], drop))
    }
    if ("latex" %in% types) {
        type <- "latex"
        have <- list.files(file.path(outDir, dirname[type]))
        have2 <- sub(".tex", "", basename(have), fixed = TRUE)
        drop <- have[have2 %notin% bfs]
        unlink(file.path(outDir, dirname[type], drop))
    }
    if ("example" %in% types) {
        type <- "example"
        have <- list.files(file.path(outDir, dirname[type]))
        have2 <- sub(".R", "", basename(have), fixed = TRUE)
        drop <- have[have2 %notin% bfs]
        unlink(file.path(outDir, dirname[type], drop))
    }
}
