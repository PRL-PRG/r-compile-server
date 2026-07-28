#? stdlib
`massageExamples` <- function (pkg, files, outFile = stdout(), use_gct = FALSE, addTiming = FALSE, 
    ..., commentDonttest = TRUE) 
{
    if (dir.exists(files[1L])) {
        old <- Sys.getlocale("LC_COLLATE")
        Sys.setlocale("LC_COLLATE", "C")
        files <- sort(Sys.glob(file.path(files, "*.R")))
        Sys.setlocale("LC_COLLATE", old)
    }
    if (is.character(outFile)) {
        out <- file(outFile, "wt")
        on.exit(close(out))
        cntFile <- paste0(outFile, "-cnt")
    }
    else {
        out <- outFile
        cntFile <- NULL
    }
    count <- 0L
    lines <- c(paste0("pkgname <- \"", pkg, "\""), "source(file.path(R.home(\"share\"), \"R\", \"examples-header.R\"))", 
        if (use_gct) {
            gct_n <- as.integer(Sys.getenv("_R_CHECK_GCT_N_", 
                "0"))
            if (!is.na(gct_n) && gct_n > 0L) sprintf("gctorture2(%s)", 
                gct_n) else "gctorture(TRUE)"
        }, "options(warn = 1)")
    cat(lines, sep = "\n", file = out)
    if (.Platform$OS.type == "windows") 
        cat("options(pager = \"console\")\n", file = out)
    if (addTiming) {
        cat("base::assign(\".ExTimings\", \"", pkg, "-Ex.timings\", pos = 'CheckExEnv')\n", 
            sep = "", file = out)
        cat("base::cat(\"name\\tuser\\tsystem\\telapsed\\n\", file=base::get(\".ExTimings\", pos = 'CheckExEnv'))\n", 
            file = out)
        cat("base::assign(\".format_ptime\",", "function(x) {", 
            "  if(!is.na(x[4L])) x[1L] <- x[1L] + x[4L]", "  if(!is.na(x[5L])) x[2L] <- x[2L] + x[5L]", 
            "  options(OutDec = '.')", "  format(x[1L:3L], digits = 7L)", 
            "},", "pos = 'CheckExEnv')\n", sep = "\n", file = out)
        cat("### * </HEADER>\n", file = out)
    }
    if (pkg == "tcltk") {
        if (capabilities("tcltk")) 
            cat("require('tcltk')\n\n", file = out)
        else cat("q()\n\n", file = out)
    }
    else if (pkg != "base") 
        cat("library('", pkg, "')\n\n", sep = "", file = out)
    cat("base::assign(\".oldSearch\", base::search(), pos = 'CheckExEnv')\n", 
        file = out)
    cat("base::assign(\".old_wd\", base::getwd(), pos = 'CheckExEnv')\n", 
        file = out)
    for (file in files) {
        nm <- sub("\\.R$", "", basename(file))
        nm <- gsub("[^- .a-zA-Z0-9_]", ".", nm, perl = TRUE, 
            useBytes = TRUE)
        if (pkg == "grDevices" && nm == "postscript") 
            next
        if (pkg == "graphics" && nm == "text") 
            next
        if (!file.exists(file)) 
            stop("file ", file, " cannot be opened", domain = NA)
        lines <- readLines(file)
        have_examples <- any(grepl("_ Examples _|### \\*+ Examples", 
            lines, perl = TRUE, useBytes = TRUE))
        com <- grep("^#", lines, perl = TRUE, useBytes = TRUE)
        lines1 <- if (length(com)) 
            lines[-com]
        else lines
        have_par <- any(grepl("[^a-zA-Z0-9.]par\\(|^par\\(", 
            lines1, perl = TRUE, useBytes = TRUE))
        have_contrasts <- any(grepl("options\\(contrasts", lines1, 
            perl = TRUE, useBytes = TRUE))
        if (have_examples) 
            cat("cleanEx()\nnameEx(\"", nm, "\")\n", sep = "", 
                file = out)
        cat("### * ", nm, "\n\n", sep = "", file = out)
        cat("flush(stderr()); flush(stdout())\n\n", file = out)
        if (addTiming) 
            cat("base::assign(\".ptime\", proc.time(), pos = \"CheckExEnv\")\n", 
                file = out)
        if (commentDonttest) {
            dont_test <- FALSE
            for (line in lines) {
                if (any(grepl("^[[:space:]]*## No test:", line, 
                  perl = TRUE, useBytes = TRUE))) {
                  dont_test <- TRUE
                  count <- count + 1L
                }
                if (!dont_test) 
                  cat(line, "\n", sep = "", file = out)
                if (any(grepl("^[[:space:]]*## End\\(No test\\)", 
                  line, perl = TRUE, useBytes = TRUE))) 
                  dont_test <- FALSE
            }
        }
        else for (line in lines) cat(line, "\n", sep = "", file = out)
        if (addTiming) {
            cat("base::assign(\".dptime\", (proc.time() - get(\".ptime\", pos = \"CheckExEnv\")), pos = \"CheckExEnv\")\n", 
                file = out)
            cat("base::cat(\"", nm, "\", base::get(\".format_ptime\", pos = 'CheckExEnv')(get(\".dptime\", pos = \"CheckExEnv\")), \"\\n\", file=base::get(\".ExTimings\", pos = 'CheckExEnv'), append=TRUE, sep=\"\\t\")\n", 
                sep = "", file = out)
        }
        if (have_par) 
            cat("graphics::par(get(\"par.postscript\", pos = 'CheckExEnv'))\n", 
                file = out)
        if (have_contrasts) 
            cat("base::options(contrasts = c(unordered = \"contr.treatment\",", 
                "ordered = \"contr.poly\"))\n", sep = "", file = out)
    }
    cat(readLines(file.path(R.home("share"), "R", "examples-footer.R")), 
        sep = "\n", file = out)
    if (count && !is.null(cntFile)) 
        writeLines(as.character(count), cntFile)
}
