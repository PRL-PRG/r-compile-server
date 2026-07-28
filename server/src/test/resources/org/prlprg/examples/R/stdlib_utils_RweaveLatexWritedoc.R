#? stdlib
`RweaveLatexWritedoc` <- function (object, chunk) 
{
    linesout <- attr(chunk, "srclines")
    filenumout <- attr(chunk, "srcFilenum")
    if (length(grep("\\usepackage[^\\}]*Sweave.*\\}", chunk))) 
        object$havesty <- TRUE
    if (!object$havesty) {
        begindoc <- "^[[:space:]]*\\\\begin\\{document\\}"
        which <- grep(begindoc, chunk)
        if (length(which)) {
            chunk[which] <- sub(begindoc, paste0("\\\\usepackage{", 
                object$styfile, "}\n\\\\begin{document}"), chunk[which])
            idx <- c(1L:which, which, seq.int(from = which + 
                1L, length.out = length(linesout) - which))
            linesout <- linesout[idx]
            filenumout <- filenumout[idx]
            object$havesty <- TRUE
        }
    }
    while (length(pos <- grep(object$syntax$docexpr, chunk))) {
        cmdloc <- regexpr(object$syntax$docexpr, chunk[pos[1L]])
        cmd <- substr(chunk[pos[1L]], cmdloc, cmdloc + attr(cmdloc, 
            "match.length") - 1L)
        cmd <- sub(object$syntax$docexpr, "\\1", cmd)
        if (object$options$eval) {
            val <- tryCatch(as.character(eval(str2expression(cmd), 
                envir = .GlobalEnv)), error = function(e) {
                filenum <- attr(chunk, "srcFilenum")[pos[1L]]
                filename <- attr(chunk, "srcFilenames")[filenum]
                location <- paste0(basename(filename), ":", attr(chunk, 
                  "srclines")[pos[1L]])
                stop("at ", location, ", ", conditionMessage(e), 
                  domain = NA, call. = FALSE)
            })
            if (length(val) == 0L) 
                val <- ""
        }
        else val <- paste0("\\\\verb#<<", cmd, ">>#")
        chunk[pos[1L]] <- sub(object$syntax$docexpr, val, chunk[pos[1L]])
    }
    while (length(pos <- grep(object$syntax$docopt, chunk))) {
        opts <- sub(paste0(".*", object$syntax$docopt, ".*"), 
            "\\1", chunk[pos[1L]])
        object$options <- SweaveParseOptions(opts, object$options, 
            RweaveLatexOptions)
        if (isTRUE(object$options$concordance) && !object$haveconcordance) {
            savelabel <- object$options$label
            object$options$label <- "concordance"
            prefix <- RweaveChunkPrefix(object$options)
            object$options$label <- savelabel
            object$concordfile <- paste0(prefix, ".tex")
            chunk[pos[1L]] <- sub(object$syntax$docopt, paste0("\\\\input{", 
                prefix, "}"), chunk[pos[1L]])
            object$haveconcordance <- TRUE
        }
        else chunk[pos[1L]] <- sub(object$syntax$docopt, "", 
            chunk[pos[1L]])
    }
    cat(chunk, sep = "\n", file = object$output)
    object$linesout <- c(object$linesout, linesout)
    object$filenumout <- c(object$filenumout, filenumout)
    object
}
