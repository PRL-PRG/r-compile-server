#? stdlib
`makeRweaveLatexCodeRunner` <- function (evalFunc = RweaveEvalWithOpt) 
{
    function(object, chunk, options) {
        pdf.Swd <- function(name, width, height, ...) grDevices::pdf(file = paste0(chunkprefix, 
            ".pdf"), width = width, height = height, version = options$pdf.version, 
            encoding = options$pdf.encoding, compress = options$pdf.compress)
        eps.Swd <- function(name, width, height, ...) grDevices::postscript(file = paste0(name, 
            ".eps"), width = width, height = height, paper = "special", 
            horizontal = FALSE)
        png.Swd <- function(name, width, height, options, ...) grDevices::png(filename = paste0(chunkprefix, 
            ".png"), width = width, height = height, res = options$resolution, 
            units = "in")
        jpeg.Swd <- function(name, width, height, options, ...) grDevices::jpeg(filename = paste0(chunkprefix, 
            ".jpeg"), width = width, height = height, res = options$resolution, 
            units = "in")
        if (!(options$engine %in% c("R", "S"))) 
            return(object)
        devs <- devoffs <- list()
        if (options$fig && options$eval) {
            if (options$pdf) {
                devs <- c(devs, list(pdf.Swd))
                devoffs <- c(devoffs, list(grDevices::dev.off))
            }
            if (options$eps) {
                devs <- c(devs, list(eps.Swd))
                devoffs <- c(devoffs, list(grDevices::dev.off))
            }
            if (options$png) {
                devs <- c(devs, list(png.Swd))
                devoffs <- c(devoffs, list(grDevices::dev.off))
            }
            if (options$jpeg) {
                devs <- c(devs, list(jpeg.Swd))
                devoffs <- c(devoffs, list(grDevices::dev.off))
            }
            if (nzchar(grd <- options$grdevice)) {
                grdo <- paste0(grd, ".off")
                if (grepl("::", grd, fixed = TRUE)) {
                  devs <- c(devs, eval(str2expression(grd)))
                  devoffs <- c(devoffs, if (!inherits(grdo <- tryCatch(eval(str2expression(grdo)), 
                    error = identity), "error")) list(grdo) else list(grDevices::dev.off))
                }
                else {
                  devs <- c(devs, list(get(grd, envir = .GlobalEnv)))
                  devoffs <- c(devoffs, if (exists(grdo, envir = .GlobalEnv)) list(get(grdo, 
                    envir = .GlobalEnv)) else list(grDevices::dev.off))
                }
            }
        }
        if (!object$quiet) {
            cat(formatC(options$chunknr, width = 2), ":")
            if (options$echo) 
                cat(" echo")
            if (options$keep.source) 
                cat(" keep.source")
            if (options$eval) {
                if (options$print) 
                  cat(" print")
                if (options$term) 
                  cat(" term")
                cat("", options$results)
                if (options$fig) {
                  if (options$eps) 
                    cat(" eps")
                  if (options$pdf) 
                    cat(" pdf")
                  if (options$png) 
                    cat(" png")
                  if (options$jpeg) 
                    cat(" jpeg")
                  if (!is.null(options$grdevice)) 
                    cat("", options$grdevice)
                }
            }
            cat(" (")
            if (!is.null(options$label)) 
                cat("label = ", options$label, ", ", sep = "")
            filenum <- attr(chunk, "srcFilenum")[1]
            filename <- attr(chunk, "srcFilenames")[filenum]
            cat(basename(filename), ":", attr(chunk, "srclines")[1], 
                ")", sep = "")
            cat("\n")
        }
        chunkprefix <- RweaveChunkPrefix(options)
        if (options$split) {
            chunkout <- object$chunkout[chunkprefix][[1L]]
            if (is.null(chunkout)) {
                chunkout <- file(paste0(chunkprefix, ".tex"), 
                  "w")
                if (!is.null(options$label)) 
                  object$chunkout[[chunkprefix]] <- chunkout
                if (!grepl(.SweaveValidFilenameRegexp, chunkout)) 
                  warning("file stem ", sQuote(chunkout), " is not portable", 
                    call. = FALSE, domain = NA)
            }
        }
        else chunkout <- object$output
        srcfile <- srcfilecopy(object$filename, chunk, isFile = TRUE)
        chunkexps <- try(parse(text = chunk, srcfile = srcfile), 
            silent = TRUE)
        if (inherits(chunkexps, "try-error")) 
            chunkexps[1L] <- sub(" parse(text = chunk, srcfile = srcfile) : \n ", 
                "", chunkexps[1L], fixed = TRUE)
        RweaveTryStop(chunkexps, options)
        putSinput <- function(dce, leading) {
            if (!openSinput) {
                if (!openSchunk) {
                  cat("\\begin{Schunk}\n", file = chunkout)
                  linesout[thisline + 1L] <<- srcline
                  filenumout[thisline + 1L] <<- srcfilenum
                  thisline <<- thisline + 1L
                  openSchunk <<- TRUE
                }
                cat("\\begin{Sinput}", file = chunkout)
                openSinput <<- TRUE
            }
            leading <- max(leading, 1L)
            cat("\n", paste0(getOption("prompt"), dce[seq_len(leading)], 
                collapse = "\n"), file = chunkout, sep = "")
            if (length(dce) > leading) 
                cat("\n", paste0(getOption("continue"), dce[-seq_len(leading)], 
                  collapse = "\n"), file = chunkout, sep = "")
            linesout[thisline + seq_along(dce)] <<- srcline
            filenumout[thisline + seq_along(dce)] <<- srcfilenum
            thisline <<- thisline + length(dce)
        }
        trySrcLines <- function(srcfile, showfrom, showto, ce) {
            tryCatch(suppressWarnings(getSrcLines(srcfile, showfrom, 
                showto)), error = function(e) {
                if (is.null(ce)) 
                  character()
                else deparse(ce, width.cutoff = 0.75 * getOption("width"))
            })
        }
        echoComments <- function(showto) {
            if (options$echo && !is.na(lastshown) && lastshown < 
                showto) {
                dce <- trySrcLines(srcfile, lastshown + 1L, showto, 
                  NULL)
                linedirs <- startsWith(dce, "#line ")
                dce <- dce[!linedirs]
                if (length(dce)) 
                  putSinput(dce, length(dce))
                lastshown <<- showto
            }
        }
        openSinput <- FALSE
        openSchunk <- FALSE
        srclines <- attr(chunk, "srclines")
        srcfilenums <- attr(chunk, "srcFilenum")
        linesout <- integer()
        filenumout <- integer()
        srcline <- srclines[1L]
        srcfilenum <- srcfilenums[1L]
        thisline <- 0L
        lastshown <- 0L
        leading <- 1L
        srcrefs <- attr(chunkexps, "srcref")
        if (length(devs)) {
            if (!grepl(.SweaveValidFilenameRegexp, chunkprefix)) 
                warning("file stem ", sQuote(chunkprefix), " is not portable", 
                  call. = FALSE, domain = NA)
            if (options$figs.only) 
                devs[[1L]](name = chunkprefix, width = options$width, 
                  height = options$height, options)
        }
        SweaveHooks(options, run = TRUE)
        for (nce in seq_along(chunkexps)) {
            ce <- chunkexps[[nce]]
            if (options$keep.source && nce <= length(srcrefs) && 
                !is.null(srcref <- srcrefs[[nce]])) {
                showfrom <- srcref[7L]
                showto <- srcref[8L]
                dce <- trySrcLines(srcfile, lastshown + 1L, showto, 
                  ce)
                leading <- showfrom - lastshown
                lastshown <- showto
                srcline <- srcref[3L]
                linedirs <- startsWith(dce, "#line ")
                dce <- dce[!linedirs]
                leading <- leading - sum(linedirs[seq_len(leading)])
                while (length(dce) && length(grep("^[[:blank:]]*$", 
                  dce[1L]))) {
                  dce <- dce[-1L]
                  leading <- leading - 1L
                }
            }
            else {
                dce <- deparse(ce, width.cutoff = 0.75 * getOption("width"))
                leading <- 1L
            }
            if (object$debug) 
                cat("\nRnw> ", paste(dce, collapse = "\n+  "), 
                  "\n")
            if (options$echo && length(dce)) 
                putSinput(dce, leading)
            if (options$eval) {
                tmpcon <- file()
                sink(file = tmpcon)
                err <- tryCatch(evalFunc(ce, options), finally = {
                  cat("\n")
                  sink()
                })
                output <- readLines(tmpcon)
                close(tmpcon)
                if (length(output) == 1L && !nzchar(output[1L])) 
                  output <- NULL
                RweaveTryStop(err, options)
            }
            else output <- NULL
            if (length(output) && object$debug) 
                cat(paste(output, collapse = "\n"))
            if (length(output) && (options$results != "hide")) {
                if (openSinput) {
                  cat("\n\\end{Sinput}\n", file = chunkout)
                  linesout[thisline + 1L:2L] <- srcline
                  filenumout[thisline + 1L:2L] <- srcfilenum
                  thisline <- thisline + 2L
                  openSinput <- FALSE
                }
                if (options$results == "verbatim") {
                  if (!openSchunk) {
                    cat("\\begin{Schunk}\n", file = chunkout)
                    linesout[thisline + 1L] <- srcline
                    filenumout[thisline + 1L] <- srcfilenum
                    thisline <- thisline + 1L
                    openSchunk <- TRUE
                  }
                  cat("\\begin{Soutput}\n", file = chunkout)
                  linesout[thisline + 1L] <- srcline
                  filenumout[thisline + 1L] <- srcfilenum
                  thisline <- thisline + 1L
                }
                output <- paste(output, collapse = "\n")
                if (options$strip.white %in% c("all", "true")) {
                  output <- sub("^[[:space:]]*\n", "", output)
                  output <- sub("\n[[:space:]]*$", "", output)
                  if (options$strip.white == "all") 
                    output <- sub("\n[[:space:]]*\n", "\n", output)
                }
                cat(output, file = chunkout)
                count <- sum(strsplit(output, NULL)[[1L]] == 
                  "\n")
                if (count > 0L) {
                  linesout[thisline + 1L:count] <- srcline
                  filenumout[thisline + 1L:count] <- srcfilenum
                  thisline <- thisline + count
                }
                remove(output)
                if (options$results == "verbatim") {
                  cat("\n\\end{Soutput}\n", file = chunkout)
                  linesout[thisline + 1L:2L] <- srcline
                  filenumout[thisline + 1L:2L] <- srcfilenum
                  thisline <- thisline + 2L
                }
            }
        }
        if (options$keep.source) 
            echoComments(length(srcfile$lines))
        if (openSinput) {
            cat("\n\\end{Sinput}\n", file = chunkout)
            linesout[thisline + 1L:2L] <- srcline
            filenumout[thisline + 1L:2L] <- srcfilenum
            thisline <- thisline + 2L
        }
        if (openSchunk) {
            cat("\\end{Schunk}\n", file = chunkout)
            linesout[thisline + 1L] <- srcline
            filenumout[thisline + 1L] <- srcfilenum
            thisline <- thisline + 1L
        }
        if (is.null(options$label) && options$split) 
            close(chunkout)
        if (options$split && options$include) {
            cat("\\input{", chunkprefix, "}\n", sep = "", file = object$output)
            linesout[thisline + 1L] <- srcline
            filenumout[thisline + 1L] <- srcfilenum
            thisline <- thisline + 1L
        }
        if (length(devs)) {
            if (options$figs.only) 
                devoffs[[1L]]()
            for (i in seq_along(devs)) {
                if (options$figs.only && i == 1) 
                  next
                devs[[i]](name = chunkprefix, width = options$width, 
                  height = options$height, options)
                err <- tryCatch({
                  SweaveHooks(options, run = TRUE)
                  eval(chunkexps, envir = .GlobalEnv)
                }, error = function(e) {
                  devoffs[[i]]()
                  stop(conditionMessage(e), call. = FALSE, domain = NA)
                })
                devoffs[[i]]()
            }
            if (options$include) {
                cat("\\includegraphics{", chunkprefix, "}\n", 
                  sep = "", file = object$output)
                linesout[thisline + 1L] <- srcline
                filenumout[thisline + 1L] <- srcfilenum
                thisline <- thisline + 1L
            }
        }
        object$linesout <- c(object$linesout, linesout)
        object$filenumout <- c(object$filenumout, filenumout)
        object
    }
}
