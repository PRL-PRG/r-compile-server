#? stdlib
`.check_package_datasets` <- function (pkgDir) 
{
    oLC_ct <- Sys.getlocale("LC_CTYPE")
    on.exit(Sys.setlocale("LC_CTYPE", oLC_ct))
    Sys.setlocale("LC_CTYPE", "C")
    oop <- options(warn = -1)
    on.exit(options(oop), add = TRUE)
    check_one <- function(x, ds) {
        if (!length(x)) 
            return()
        if (is.list(x)) 
            lapply(unclass(x), check_one, ds = ds)
        if (is.character(x)) {
            xx <- unclass(x)
            enc <- Encoding(xx)
            latin1 <<- latin1 + sum(enc == "latin1")
            utf8 <<- utf8 + sum(enc == "UTF-8")
            bytes <<- bytes + sum(enc == "bytes")
            unk <- xx[enc == "unknown"]
            ind <- .Call(C_check_nonASCII2, unk)
            if (length(ind)) {
                non_ASCII <<- c(non_ASCII, unk[ind])
                where <<- c(where, rep.int(ds, length(ind)))
            }
        }
        a <- attributes(x)
        if (!is.null(a)) {
            lapply(a, check_one, ds = ds)
            check_one(names(a), ds)
        }
        invisible()
    }
    sink(tempfile())
    on.exit(sink(), add = TRUE)
    files <- list_files_with_type(file.path(pkgDir, "data"), 
        "data")
    files <- unique(basename(file_path_sans_ext(files)))
    ans <- vector("list", length(files))
    dataEnv <- new.env(hash = TRUE)
    names(ans) <- files
    old <- setwd(pkgDir)
    .try <- function(expr, msg) {
        oop <- options(warn = 1)
        on.exit(options(oop))
        outConn <- file(open = "w+")
        sink(outConn, type = "output")
        sink(outConn, type = "message")
        tryCatch(withRestarts(withCallingHandlers(expr, error = {
            function(e) invokeRestart("grmbl", e, sys.calls())
        }), grmbl = function(e, calls) {
            n <- length(sys.calls())
            calls <- calls[-seq.int(length.out = n - 1L)]
            calls <- rev(calls)[-c(1L, 2L)]
            tb <- lapply(calls, deparse)
            message(msg, conditionMessage(e), "\nCall sequence:\n", 
                paste(c(utils::head(.eval_with_capture(traceback(tb))$output, 
                  5), "  ..."), collapse = "\n"), "\n")
        }), error = identity, finally = {
            sink(type = "message")
            sink(type = "output")
            close(outConn)
        })
    }
    for (f in files) {
        msg <- sprintf("Error loading dataset %s: ", sQuote(f))
        .try(utils::data(list = f, package = character(), envir = dataEnv), 
            msg)
    }
    setwd(old)
    non_ASCII <- where <- character()
    latin1 <- utf8 <- bytes <- 0L
    for (ds in ls(envir = dataEnv, all.names = TRUE)) {
        if (inherits(suppressWarnings(suppressMessages(try(check_one(get(ds, 
            envir = dataEnv), ds), silent = TRUE))), "try-error")) {
            msg <- sprintf("Error loading dataset %s:\n ", sQuote(ds))
            message(msg, geterrmessage())
        }
    }
    unknown <- unique(cbind(non_ASCII, where))
    structure(list(latin1 = latin1, utf8 = utf8, bytes = bytes, 
        unknown = unknown), class = "check_package_datasets")
}
