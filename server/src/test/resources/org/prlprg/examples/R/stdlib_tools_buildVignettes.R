#? stdlib
`buildVignettes` <- function (package, dir, lib.loc = NULL, quiet = TRUE, clean = TRUE, 
    tangle = FALSE, skip = NULL, ser_elibs = NULL) 
{
    separate <- !is.null(ser_elibs)
    if (separate) 
        elibs <- readRDS(ser_elibs)
    vigns <- pkgVignettes(package = package, dir = dir, lib.loc = lib.loc, 
        check = TRUE)
    if (is.null(vigns)) 
        return(invisible())
    if (length(vigns$docs) <= 1L) 
        separate <- FALSE
    if (length(vigns$msg)) 
        warning(paste(vigns$msg, collapse = "\n"), domain = NA)
    dups <- duplicated(vigns$names)
    if (any(dups)) {
        names <- unique(vigns$names[dups])
        docs <- sort(basename(vigns$docs[vigns$names %in% names]))
        stop(gettextf("Detected vignette source files (%s) with shared names (%s) and therefore risking overwriting each other's output files", 
            paste(sQuote(docs), collapse = ", "), paste(sQuote(names), 
                collapse = ", ")), domain = NA)
    }
    if (isTRUE(skip)) {
        installed <- rownames(utils::installed.packages())
    }
    else if (!is.null(skip)) {
        if (isFALSE(skip)) 
            skip <- NULL
        else stopifnot(is.character(skip))
    }
    Sys.unsetenv("SWEAVE_STYLEPATH_DEFAULT")
    op <- options(warn = 1)
    wd <- getwd()
    if (is.null(wd)) 
        stop("current working directory cannot be ascertained")
    on.exit({
        setwd(wd)
        options(op)
    })
    setwd(vigns$dir)
    origfiles <- list.files(all.files = TRUE)
    have.makefile <- "Makefile" %in% origfiles
    file.create(".build.timestamp")
    outputs <- character()
    sourceList <- list()
    startdir <- getwd()
    skipped <- character()
    fails <- character()
    for (i in seq_along(vigns$docs)) {
        thisOK <- TRUE
        file <- basename(vigns$docs[i])
        name <- vigns$names[i]
        thisSKIP <- if (isTRUE(skip)) {
            vinfo <- vignetteInfo(file)
            length(missdeps <- vinfo$depends %w/o% installed) > 
                0
        }
        else name %in% skip
        if (thisSKIP) {
            msg <- if (isTRUE(skip)) 
                .pretty_format2(sprintf("Note: skipping %s due to unavailable dependencies:", 
                  sQuote(file)), missdeps)
            else gettextf("Note: skipping %s", sQuote(file))
            message(paste0(c(msg, ""), collapse = "\n"), domain = NA)
            skipped <- c(skipped, file)
            next
        }
        enc <- vigns$encodings[i]
        if (enc == "non-ASCII") {
            message(gettextf("Error: Vignette '%s' is non-ASCII but has no declared encoding", 
                file))
            fails <- c(fails, file)
            next
        }
        engine <- vignetteEngine(vigns$engines[i])
        if (separate) {
            tf2 <- gsub("\\", "/", tempfile(fileext = ".rds"), 
                fixed = TRUE)
            saveRDS(engine, tf2)
            Rcmd <- sprintf("tools:::.buildOneVignette(\"%s\", \"%s\", %s, %s, \"%s\", \"%s\", \"%s\")", 
                file, vigns$pkgdir, quiet, have.makefile, name, 
                enc, tf2)
            tlim <- get_timeout(Sys.getenv("_R_CHECK_ONE_VIGNETTE_ELAPSED_TIMEOUT_", 
                Sys.getenv("_R_CHECK_ELAPSED_TIMEOUT_")))
            tf <- tempfile()
            status <- R_runR(Rcmd, "--vanilla --no-echo", elibs, 
                stdout = tf, stderr = tf, timeout = tlim)
            unlink(tf2)
            if (!status) {
                this <- readLines(tf)
                patt <- "^[+]-[+]"
                l <- grepl(patt, this)
                output <- gsub(patt, "", this[l])
                outputs <- c(outputs, output)
                cat(this[!l], sep = "\n")
            }
            else {
                fails <- c(fails, file)
                cat(readLines(tf), sep = "\n")
            }
            unlink(tf)
        }
        else {
            message(gettextf("--- re-building %s using %s", sQuote(file), 
                engine$name))
            tryCatch({
                engine$weave(file, quiet = quiet, encoding = enc)
                setwd(startdir)
                output <- find_vignette_product(name, by = "weave", 
                  engine = engine)
                if (!have.makefile && vignette_is_tex(output)) {
                  texi2pdf(file = output, clean = FALSE, quiet = quiet)
                  output <- find_vignette_product(name, by = "texi2pdf", 
                    engine = engine)
                }
                outputs <- c(outputs, output)
            }, error = function(e) {
                thisOK <<- FALSE
                fails <<- c(fails, file)
                message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s", 
                  file, conditionMessage(e)))
            })
        }
        if (tangle && !separate) {
            output <- tryCatch({
                engine$tangle(file, quiet = quiet, encoding = enc)
                setwd(startdir)
                find_vignette_product(name, by = "tangle", main = FALSE, 
                  engine = engine)
            }, error = function(e) {
                thisOK <<- FALSE
                fails <<- c(fails, file)
                message(gettextf("Error: tangling vignette '%s' failed with diagnostics:\n%s", 
                  file, conditionMessage(e)))
            })
            sourceList[[file]] <- output
        }
        if (!separate) {
            if (thisOK) 
                message(gettextf("--- finished re-building %s\n", 
                  sQuote(file)))
            else message(gettextf("--- failed re-building %s\n", 
                sQuote(file)))
        }
    }
    if (have.makefile) {
        WINDOWS <- .Platform$OS.type == "windows"
        if (WINDOWS) {
            rhome <- chartr("\\", "/", R.home())
            Sys.setenv(R_HOME = rhome)
        }
        make <- Sys.getenv("MAKE", "make")
        if (!nzchar(make)) 
            make <- "make"
        yy <- system(make)
        if (yy > 0) 
            stop("running 'make' failed")
        if (clean && any(startsWith(readLines("Makefile", warn = FALSE), 
            "clean:"))) 
            system(paste(make, "clean"))
    }
    else {
        grDevices::graphics.off()
        keep <- c(outputs, unlist(sourceList))
        if (clean) {
            f <- setdiff(list.files(all.files = TRUE, no.. = TRUE), 
                keep)
            newer <- file_test("-nt", f, ".build.timestamp")
            unlink(f[newer], recursive = TRUE)
            f <- setdiff(list.files(all.files = TRUE, no.. = TRUE), 
                c(keep, origfiles))
            f <- f[file_test("-f", f)]
            file.remove(f)
        }
    }
    if (file.exists(".build.timestamp")) 
        file.remove(".build.timestamp")
    if (length(fails)) {
        message(ngettext(length(fails), "SUMMARY: processing the following file failed:", 
            "SUMMARY: processing the following files failed:"))
        message(paste(.pretty_format(fails), collapse = "\n"))
        message()
    }
    if (length(fails) || (length(outputs) != (length(vigns$docs) - 
        length(skipped)))) {
        msg <- "Vignette re-building failed."
        stop(msg, domain = NA, call. = FALSE)
    }
    vigns$outputs <- outputs
    vigns$sources <- sourceList
    invisible(vigns)
}
