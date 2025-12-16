#? stdlib
`Sweave` <- function (file, driver = RweaveLatex(), syntax = getOption("SweaveSyntax"), 
    encoding = "", ...) 
{
    if (is.character(driver)) 
        driver <- get(driver, mode = "function")()
    else if (is.function(driver)) 
        driver <- driver()
    if (is.null(syntax)) 
        syntax <- SweaveGetSyntax(file)
    if (is.character(syntax)) 
        syntax <- get(syntax, mode = "list")
    if (.Platform$OS.type == "windows") 
        file <- chartr("\\", "/", file)
    text <- SweaveReadFile(file, syntax, encoding = encoding)
    attr(file, "encoding") <- encoding <- attr(text, "encoding")
    srcFilenames <- attr(text, "files")
    srcFilenum <- attr(text, "srcFilenum")
    srcLinenum <- attr(text, "srcLinenum")
    drobj <- driver$setup(file = file, syntax = syntax, ...)
    on.exit(driver$finish(drobj, error = TRUE))
    syntax <- attr(text, "syntax")
    if (!is.na(envopts <- Sys.getenv("SWEAVE_OPTIONS", NA))) 
        drobj$options <- SweaveParseOptions(envopts, drobj$options, 
            driver$checkopts)
    drobj$filename <- file
    mode <- "doc"
    chunknr <- 0L
    chunk <- NULL
    chunkopts <- NULL
    namedchunks <- list()
    prevfilenum <- 0L
    prevlinediff <- 0L
    for (linenum in seq_along(text)) {
        line <- text[linenum]
        filenum <- srcFilenum[linenum]
        linediff <- srcLinenum[linenum] - linenum
        if (nzchar(Sys.getenv("R_DEBUG_Sweave"))) {
            cat(sprintf("l.%3d: %30s -'%4s'- ", linenum, substr(line, 
                1, 30), mode))
            cat(sprintf("%16s\n", system(paste("ls -s", summary(drobj$output)$description), 
                intern = TRUE)))
        }
        if (length(grep(syntax$doc, line))) {
            if (mode == "doc") {
                if (!is.null(chunk)) 
                  drobj <- driver$writedoc(drobj, chunk)
            }
            else {
                if (!is.null(chunkopts$label)) 
                  namedchunks[[chunkopts$label]] <- chunk
                if (!is.null(chunk)) 
                  drobj <- driver$runcode(drobj, chunk, chunkopts)
                mode <- "doc"
            }
            chunk <- NULL
        }
        else if (length(grep(syntax$code, line))) {
            if (mode == "doc") {
                if (!is.null(chunk)) 
                  drobj <- driver$writedoc(drobj, chunk)
            }
            else {
                if (!is.null(chunkopts$label)) 
                  namedchunks[[chunkopts$label]] <- chunk
                if (!is.null(chunk)) 
                  drobj <- driver$runcode(drobj, chunk, chunkopts)
            }
            mode <- "code"
            chunkopts <- sub(syntax$code, "\\1", line)
            chunkopts <- SweaveParseOptions(chunkopts, drobj$options, 
                driver$checkopts)
            file <- srcFilenames[filenum]
            chunk <- paste0("#line ", linenum + linediff + 1L, 
                " \"", basename(file), "\"")
            attr(chunk, "srclines") <- linenum + linediff
            attr(chunk, "srcFilenum") <- filenum
            attr(chunk, "srcFilenames") <- srcFilenames
            chunknr <- chunknr + 1L
            chunkopts$chunknr <- chunknr
        }
        else {
            if (mode == "code" && length(grep(syntax$coderef, 
                line))) {
                chunkref <- sub(syntax$coderef, "\\1", line)
                if (!(chunkref %in% names(namedchunks))) {
                  warning(gettextf("reference to unknown chunk %s", 
                    sQuote(chunkref)), call. = TRUE, domain = NA)
                  next
                }
                else {
                  file <- srcFilenames[filenum]
                  line <- c(namedchunks[[chunkref]], paste0("#line ", 
                    linenum + linediff + 1L, " \"", basename(file), 
                    "\""))
                }
            }
            if (mode == "code" && (prevfilenum != filenum || 
                prevlinediff != linediff)) {
                file <- srcFilenames[filenum]
                line <- c(paste0("#line ", linenum + linediff, 
                  " \"", basename(file), "\""), line)
            }
            srclines <- c(attr(chunk, "srclines"), rep.int(linenum + 
                linediff, length(line)))
            srcfilenum <- c(attr(chunk, "srcFilenum"), rep.int(filenum, 
                length(line)))
            chunk <- c(chunk, line)
            attr(chunk, "srclines") <- srclines
            attr(chunk, "srcFilenum") <- srcfilenum
            attr(chunk, "srcFilenames") <- srcFilenames
        }
        prevfilenum <- filenum
        prevlinediff <- linediff
    }
    if (!is.null(chunk)) {
        drobj <- if (mode == "doc") 
            driver$writedoc(drobj, chunk)
        else driver$runcode(drobj, chunk, chunkopts)
    }
    on.exit()
    drobj$srcFilenames <- srcFilenames
    driver$finish(drobj)
}

# Examples
testfile <- system.file("Sweave", "Sweave-test-1.Rnw", package = "utils")
oldwd <- setwd(tempdir()) # so we will write only to a temp directory

## enforce par(ask = FALSE)
options(device.ask.default = FALSE)

## create a LaTeX file - in the current working directory, getwd():
Sweave(testfile)

## This can be compiled to PDF by
## tools::texi2pdf("Sweave-test-1.tex")

## or outside R by
##
## 	R CMD texi2pdf Sweave-test-1.tex
## on Unix-alikes which sets the appropriate TEXINPUTS path.
##
## On Windows,
##      Rcmd texify --pdf Sweave-test-1.tex
## if MiKTeX is available.

## create an R source file from the code chunks
Stangle(testfile)
## which can be sourced, e.g.
source("Sweave-test-1.R")


if(!interactive()) unlink("Sweave-test-1*")
setwd(oldwd)


