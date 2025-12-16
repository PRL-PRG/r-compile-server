#? stdlib
`processRdChunk` <- function (code, stage, options, env, macros) 
{
    if (is.null(opts <- attr(code, "Rd_option"))) 
        opts <- ""
    codesrcref <- attr(code, "srcref")
    Rdfile <- attr(codesrcref, "srcfile")$filename
    options <- utils:::SweaveParseOptions(opts, options, RweaveRdOptions)
    if (stage == options$stage) {
        res <- character(0)
        tags <- RdTags(code)
        if (length(bad <- setdiff(tags, c("RCODE", "COMMENT")))) 
            warnRd(code, Rdfile, "\\Sexpr expects R code; found ", 
                paste0(sQuote(bad), collapse = ", "))
        code <- structure(code[tags != "COMMENT"], srcref = codesrcref)
        chunkexps <- tryCatch(parse(text = as.character(code), 
            keep.source = options$keep.source), error = function(e) stopRd(code, 
            Rdfile, conditionMessage(e)))
        if (length(chunkexps) == 0L) 
            return(tagged(code, "LIST"))
        srcrefs <- attr(chunkexps, "srcref")
        lastshown <- 0L
        err <- NULL
        for (nce in seq_along(chunkexps)) {
            ce <- chunkexps[[nce]]
            if (options$echo && options$results == "verbatim") {
                if (nce <= length(srcrefs) && !is.null(srcref <- srcrefs[[nce]])) {
                  srcfile <- attr(srcref, "srcfile")
                  showfrom <- srcref[1L]
                  showto <- srcref[3L]
                  dce <- getSrcLines(srcfile, lastshown + 1, 
                    showto)
                  leading <- showfrom - lastshown
                  lastshown <- showto
                  while (length(dce) && grepl("^[[:blank:]]*$", 
                    dce[1L])) {
                    dce <- dce[-1L]
                    leading <- leading - 1L
                  }
                }
                else {
                  dce <- deparse(ce, width.cutoff = 0.75 * getOption("width"))
                  leading <- 1L
                }
                if (length(dce)) {
                  res <- c(res, "\n", paste0(getOption("prompt"), 
                    dce[1L:leading], collapse = "\n"))
                  if (length(dce) > leading) 
                    res <- c(res, "\n", paste0(getOption("continue"), 
                      dce[-(1L:leading)], collapse = "\n"))
                }
            }
            tmpcon <- file()
            sink(file = tmpcon)
            if (options$eval) 
                err <- evalWithOpt(ce, options, env)
            res <- c(res, "\n")
            sink()
            output <- readLines(tmpcon, warn = FALSE)
            close(tmpcon)
            if (length(output) == 1L && output[1L] == "") 
                output <- NULL
            if (inherits(err, "error")) 
                stopRd(code, Rdfile, conditionMessage(err))
            if (length(output) && (options$results != "hide")) {
                output <- paste(output, collapse = "\n")
                if (options$strip.white %in% c("all", "true")) {
                  output <- sub("^[[:space:]]*\n", "", output)
                  output <- sub("\n[[:space:]]*$", "", output)
                  if (options$strip.white == "all") 
                    output <- sub("\n[[:space:]]*\n", "\n", output)
                }
                res <- c(res, output, "\n")
                remove(output)
            }
        }
        if (options$results == "rd") {
            res <- enc2utf8(as.character(err))
            tmpcon <- file()
            writeLines(res, tmpcon, useBytes = TRUE)
            parseFragment <- function(cond) {
                seek(tmpcon, 0)
                parse_Rd(tmpcon, encoding = "UTF-8", fragment = TRUE, 
                  macros = macros)
            }
            res <- tryCatch(parse_Rd(tmpcon, encoding = "UTF-8", 
                fragment = FALSE, macros = macros), warning = parseFragment, 
                error = parseFragment, finally = close(tmpcon))
            last <- res[[length(res)]]
            if (attr(last, "Rd_tag") == "TEXT" && (len <- length(last))) 
                res[[length(res)]][len] <- gsub("\\n$", "", last[len])
            flag <- getDynamicFlags(res)
            if (any(flag)) {
                bad <- flag[c(stage, switch(stage, install = "build", 
                  render = c("build", "install")))]
                if (any(bad)) 
                  warnRd(code, Rdfile, "unprocessed ", paste0(sQuote(names(bad)[bad]), 
                    collapse = "/"), " macro from ", stage, "-stage \\Sexpr")
            }
            tags <- RdTags(res)
            keep <- rep.int(TRUE, length(tags))
            for (i in seq_along(tags)) {
                if (tags[i] == "TEXT" && res[[i]] == "") 
                  keep[i] <- FALSE
            }
            res <- res[keep]
            tags <- tags[keep]
            if (length(res) > 1) {
                is_section <- !is.na(sectionOrder[tags])
                if (!any(is_section)) 
                  res <- tagged(res, "LIST")
                else {
                  if (sum(is_section) > 1) 
                    stop(gettextf("Only one Rd section per %s is supported.", 
                      "\\Sexpr"), domain = NA)
                  res <- res[[which(is_section)]]
                }
            }
            else if (length(res) == 1) 
                res <- res[[1]]
            else res <- tagged("", "TEXT")
            if (is.list(res)) {
                res <- setDynamicFlags(res, flag)
                res <- prepare_Rd(res, defines = .Platform$OS.type, 
                  options = options, stage2 = FALSE, stage3 = FALSE)
            }
        }
        else if (options$results == "text") 
            res <- tagged(enc2utf8(as.character(err)), "TEXT")
        else if (options$results == "hide" || !length(res)) 
            res <- tagged("", "COMMENT")
        else {
            res <- lapply(as.list(res), function(x) tagged(x, 
                "VERB"))
            res <- tagged(res, "\\verb")
        }
    }
    else res <- code
    replaceRdSrcrefs(res, codesrcref)
}
