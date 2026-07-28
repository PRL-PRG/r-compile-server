#? stdlib
`xgettext` <- function (dir, verbose = FALSE, asCall = TRUE) 
{
    dir <- file_path_as_absolute(dir)
    bn <- basename(dir)
    dir <- file.path(dir, "R")
    exts <- .make_file_exts("code")
    R_files <- list_files_with_exts(dir, exts)
    for (d in c("unix", "windows")) {
        OSdir <- file.path(dir, d)
        if (dir.exists(OSdir)) 
            R_files <- c(R_files, list_files_with_exts(OSdir, 
                exts))
    }
    if (bn == "base") {
        shdir <- file.path(dir, "../../../../share/R")
        R_files <- c(R_files, list_files_with_exts(shdir, exts))
    }
    out <- vector("list", length = length(R_files))
    names(out) <- R_files
    find_strings <- function(e) {
        find_strings2 <- function(e, suppress) {
            if (is.character(e)) {
                if (!suppress) 
                  strings <<- c(strings, e)
            }
            else if (is.call(e)) {
                if (is.name(e[[1L]])) {
                  fname <- as.character(e[[1L]])
                  if (fname %in% c("warningCondition", "errorCondition")) {
                    e <- match.call(baseenv()[[fname]], e)
                    e <- e["message"]
                  }
                  else if (fname %in% c("gettext", "gettextf")) {
                    domain <- e[["domain"]]
                    suppress <- !is.null(domain) && !is.name(domain) && 
                      is.na(domain)
                    if (fname == "gettextf") {
                      e <- match.call(gettextf, e)
                      e <- e["fmt"]
                    }
                    else if (fname == "gettext" && !is.null(names(e))) {
                      e <- e[!(names(e) == "domain")]
                    }
                  }
                  else if (fname == "ngettext") 
                    return()
                }
                for (i in seq_along(e)) find_strings2(e[[i]], 
                  suppress)
            }
        }
        if (is.call(e) && is.name(e[[1L]]) && (as.character(e[[1L]]) %in% 
            c("warning", "stop", "message", "packageStartupMessage", 
                "gettext", "gettextf"))) {
            domain <- e[["domain"]]
            suppress <- !is.null(domain) && !is.name(domain) && 
                is.na(domain)
            if (!is.null(names(e))) 
                e <- e[names(e) %notin% c("call.", "immediate.", 
                  "domain")]
            if (asCall) {
                if (!suppress) 
                  strings <<- c(strings, as.character(e)[-1L])
            }
            else {
                if (as.character(e[[1L]]) == "gettextf") {
                  e <- match.call(gettextf, e)
                  e <- e["fmt"]
                }
                for (i in seq_along(e)) find_strings2(e[[i]], 
                  suppress)
            }
        }
        else if (is.recursive(e)) 
            for (i in seq_along(e)) Recall(e[[i]])
    }
    for (f in R_files) {
        if (verbose) 
            message(gettextf("parsing '%s'", f), domain = NA)
        strings <- character()
        for (e in parse(file = f)) find_strings(e)
        strings <- sub("^[ \t\n]*", "", strings)
        strings <- sub("[ \t\n]*$", "", strings)
        out[[f]] <- structure(unique(strings), class = "xgettext")
    }
    out[lengths(out) > 0L]
}

# Examples

## Create source package-like  <tmp>/R/foo.R  and get text from it:
tmpPkg <- tempdir()
tmpRDir <- file.path(tmpPkg, "R")
dir.create(tmpRDir, showWarnings = FALSE)
fnChar <- paste(sep = "\n",
  "foo <- function(x) {",
  "  if (x < -1)  stop('too small')",
  "  # messages unduplicated (not so for ngettext)",
  "  if (x < -.5) stop('too small')",
  "  if (x < 0) {",
  "    warning(",
  "      'sqrt(x) is', sqrt(as.complex(x)),",
  "      ', which may be too small'",
  "    )",
  "  }",
  "  # calls with domain=NA are skipped",
  "  if (x == 0) cat(gettext('x is 0!\n', domain=NA))",
  "  # gettext strings may be ignored due to 'outer' domain=NA",
  "  if (x > 10) warning('x is ', gettextf('%.2f', x), domain=NA)",
  "  # using a custom condition class",
  "  if (x == 42)",
  "    stop(errorCondition(gettext('needs Deep Thought'), class='myError'))",
  "  x",
  "}")

writeLines(fnChar, con = file.path(tmpRDir, "foo.R"))

## [[1]] : suppressing (tmpfile) name to make example Rdiff-able
xgettext(tmpPkg, asCall=TRUE )[[1]] # default; shows calls
xgettext(tmpPkg, asCall=FALSE)[[1]] # doesn't ; but then ' %.2f '

unlink(tmpRDir, recursive=TRUE)

